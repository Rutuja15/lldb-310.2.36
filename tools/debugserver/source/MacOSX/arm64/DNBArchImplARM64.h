//===-- DNBArchMachARM64.h --------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//


#ifndef __DNBArchImplARM64_h__
#define __DNBArchImplARM64_h__

#if defined (__arm__) || defined (__arm64__)

#include <map>
#include <mach/thread_status.h>

#if defined (ARM_THREAD_STATE64_COUNT)

#include "DNBArch.h"

class MachThread;

class DNBArchMachARM64 : public DNBArchProtocol
{
public:
    enum { kMaxNumThumbITBreakpoints = 4 };

    DNBArchMachARM64(MachThread *thread) :
        m_thread(thread),
        m_state(),
        m_disabled_watchpoints(),
        m_watchpoint_hw_index(-1),
        m_watchpoint_did_occur(false),
        m_watchpoint_resume_single_step_enabled(false),
        m_saved_register_states()
    {
        m_disabled_watchpoints.resize (16);
        memset(&m_dbg_save, 0, sizeof(m_dbg_save));
    }

    virtual ~DNBArchMachARM64()
    {
    }

    static void Initialize();
    static const DNBRegisterSetInfo *
    GetRegisterSetInfo(nub_size_t *num_reg_sets);

    virtual bool            GetRegisterValue(int set, int reg, DNBRegisterValue *value);
    virtual bool            SetRegisterValue(int set, int reg, const DNBRegisterValue *value);
    virtual nub_size_t      GetRegisterContext (void *buf, nub_size_t buf_len);
    virtual nub_size_t      SetRegisterContext (const void *buf, nub_size_t buf_len);
    virtual uint32_t        SaveRegisterState ();
    virtual bool            RestoreRegisterState (uint32_t save_id);

    virtual kern_return_t   GetRegisterState  (int set, bool force);
    virtual kern_return_t   SetRegisterState  (int set);
    virtual bool            RegisterSetStateIsValid (int set) const;

    virtual uint64_t        GetPC(uint64_t failValue);    // Get program counter
    virtual kern_return_t   SetPC(uint64_t value);
    virtual uint64_t        GetSP(uint64_t failValue);    // Get stack pointer
    virtual void            ThreadWillResume();
    virtual bool            ThreadDidStop();
    virtual bool            NotifyException(MachException::Data& exc);

    static DNBArchProtocol *Create (MachThread *thread);
    static const uint8_t * const SoftwareBreakpointOpcode (nub_size_t byte_size);
    static uint32_t         GetCPUType();

    virtual uint32_t        NumSupportedHardwareWatchpoints();
    virtual uint32_t        EnableHardwareWatchpoint (nub_addr_t addr, nub_size_t size, bool read, bool write, bool also_set_on_task);
    virtual bool            DisableHardwareWatchpoint (uint32_t hw_break_index, bool also_set_on_task);
    virtual bool            DisableHardwareWatchpoint_helper (uint32_t hw_break_index, bool also_set_on_task);

protected:


    kern_return_t           EnableHardwareSingleStep (bool enable);
    static bool             FixGenericRegisterNumber (int &set, int &reg);

    typedef enum RegisterSetTag
    {
        e_regSetALL = REGISTER_SET_ALL,
        e_regSetGPR, // ARM_THREAD_STATE64,
        e_regSetVFP, // ARM_NEON_STATE64,
        e_regSetEXC, // ARM_EXCEPTION_STATE64,
        e_regSetDBG, // ARM_DEBUG_STATE64,
        kNumRegisterSets
    } RegisterSet;

    enum 
    {
        e_regSetGPRCount = ARM_THREAD_STATE64_COUNT,
        e_regSetVFPCount = ARM_NEON_STATE64_COUNT, 
        e_regSetEXCCount = ARM_EXCEPTION_STATE64_COUNT,
        e_regSetDBGCount = ARM_DEBUG_STATE64_COUNT,
    };

    enum
    {
        Read = 0,
        Write = 1,
        kNumErrors = 2
    };
    
    typedef arm_thread_state64_t GPR;
    typedef arm_neon_state64_t FPU;
    typedef arm_exception_state64_t EXC;

    static const DNBRegisterInfo g_gpr_registers[];
    static const DNBRegisterInfo g_vfp_registers[];
    static const DNBRegisterInfo g_exc_registers[];
    static const DNBRegisterSetInfo g_reg_sets[];

    static const size_t k_num_gpr_registers;
    static const size_t k_num_vfp_registers;
    static const size_t k_num_exc_registers;
    static const size_t k_num_all_registers;
    static const size_t k_num_register_sets;

    struct Context
    {
        GPR gpr;
        FPU vfp;
        EXC exc;
    };

    struct State
    {
        Context                 context;
        arm_debug_state64_t     dbg;
        kern_return_t           gpr_errs[2];    // Read/Write errors
        kern_return_t           vfp_errs[2];    // Read/Write errors
        kern_return_t           exc_errs[2];    // Read/Write errors
        kern_return_t           dbg_errs[2];    // Read/Write errors
        State()
        {
            uint32_t i;
            for (i=0; i<kNumErrors; i++)
            {
                gpr_errs[i] = -1;
                vfp_errs[i] = -1;
                exc_errs[i] = -1;
                dbg_errs[i] = -1;
            }
        }
        void InvalidateRegisterSetState(int set)
        {
            SetError (set, Read, -1);
        }
        
        void
        InvalidateAllRegisterStates()
        {
            SetError (e_regSetALL, Read, -1);
        }
        
        kern_return_t GetError (int set, uint32_t err_idx) const
        {
            if (err_idx < kNumErrors)
            {
                switch (set)
                {
                // When getting all errors, just OR all values together to see if
                // we got any kind of error.
                case e_regSetALL:   return gpr_errs[err_idx] |
                                           vfp_errs[err_idx] |
                                           exc_errs[err_idx] |
                                           dbg_errs[err_idx] ;
                case e_regSetGPR:   return gpr_errs[err_idx];
                case e_regSetVFP:   return vfp_errs[err_idx];
                case e_regSetEXC:   return exc_errs[err_idx];
                //case e_regSetDBG:   return dbg_errs[err_idx];
                default: break;
                }
            }
            return -1;
        }
        bool SetError (int set, uint32_t err_idx, kern_return_t err)
        {
            if (err_idx < kNumErrors)
            {
                switch (set)
                {
                case e_regSetALL:
                    gpr_errs[err_idx] = err;
                    vfp_errs[err_idx] = err;
                    dbg_errs[err_idx] = err;
                    exc_errs[err_idx] = err;
                    return true;

                case e_regSetGPR:
                    gpr_errs[err_idx] = err;
                    return true;

                case e_regSetVFP:
                    vfp_errs[err_idx] = err;
                    return true;

                case e_regSetEXC:
                    exc_errs[err_idx] = err;
                    return true;

//                case e_regSetDBG:
//                    dbg_errs[err_idx] = err;
//                    return true;
                default: break;
                }
            }
            return false;
        }
        bool RegsAreValid (int set) const
        {
            return GetError(set, Read) == KERN_SUCCESS;
        }
    };

    kern_return_t GetGPRState (bool force);
    kern_return_t GetVFPState (bool force);
    kern_return_t GetEXCState (bool force);
    kern_return_t GetDBGState (bool force);

    kern_return_t SetGPRState ();
    kern_return_t SetVFPState ();
    kern_return_t SetEXCState ();
    kern_return_t SetDBGState (bool also_set_on_task);

    // Helper functions for watchpoint implementaions.

    typedef arm_debug_state64_t DBG;

    void ClearWatchpointOccurred();
    bool HasWatchpointOccurred();
    bool IsWatchpointEnabled(const DBG &debug_state, uint32_t hw_index);
    nub_addr_t GetWatchpointAddressByIndex (uint32_t hw_index);
    nub_addr_t GetWatchAddress(const DBG &debug_state, uint32_t hw_index);
    virtual bool            ReenableHardwareWatchpoint (uint32_t hw_break_index);
    virtual bool            ReenableHardwareWatchpoint_helper (uint32_t hw_break_index);
    virtual uint32_t        GetHardwareWatchpointHit(nub_addr_t &addr);


    class disabled_watchpoint {
    public:
        disabled_watchpoint () { addr = 0; control = 0; }
        nub_addr_t addr;
        uint32_t   control;
    };

protected:
    MachThread *    m_thread;
    State           m_state;
    arm_debug_state64_t m_dbg_save;

    // arm64 doesn't keep the disabled watchpoint values in the debug register context like armv7;
    // we need to save them aside when we disable them temporarily.
    std::vector<disabled_watchpoint> m_disabled_watchpoints;

    // The following member variables should be updated atomically.
    int32_t         m_watchpoint_hw_index;
    bool            m_watchpoint_did_occur;
    bool            m_watchpoint_resume_single_step_enabled;
    
    typedef std::map<uint32_t, Context> SaveRegisterStates;
    SaveRegisterStates m_saved_register_states;
};

#endif  // #if defined (ARM_THREAD_STATE64_COUNT)
#endif  // #if defined (__arm__)
#endif  // #ifndef __DNBArchImplARM64_h__
