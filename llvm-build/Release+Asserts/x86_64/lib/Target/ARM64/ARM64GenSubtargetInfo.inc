/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Subtarget Enumeration Source Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace ARM64 {
enum {
  FeatureZCRegMove =  1ULL << 0,
  FeatureZCZeroing =  1ULL << 1
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV ARM64FeatureKV[] = {
  { "zcm", "Has zereo-cycle register moves", ARM64::FeatureZCRegMove, 0ULL },
  { "zcz", "Has zero-cycle zeroing instructions", ARM64::FeatureZCZeroing, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV ARM64SubTypeKV[] = {
  { "arm64-generic", "Select the arm64-generic processor", 0ULL, 0ULL },
  { "cyclone", "Select the cyclone processor", ARM64::FeatureZCRegMove | ARM64::FeatureZCZeroing, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry ARM64WriteProcResTable[] = {
  { 0,  0}, // Invalid
  {10,  1}, // #1
  { 4,  1}, // #2
  { 4,  2}, // #3
  { 7,  2}, // #4
  { 4,  1}, // #5
  { 7,  1}, // #6
  { 1,  1}, // #7
  { 4,  1}, // #8
  { 1,  1}, // #9
  { 2,  1}, // #10
  { 4,  1}, // #11
  { 9,  1}, // #12
  {10,  1}, // #13
  {11,  1}, // #14
  {13,  1}, // #15
  { 3, 17}, // #16
  {10,  2}, // #17
  {12,  2}, // #18
  {10,  1}, // #19
  {13,  1}, // #20
  { 1,  1}, // #21
  { 2,  1}, // #22
  { 4,  1}, // #23
  { 6,  1}, // #24
  { 1,  2}, // #25
  { 4,  2}, // #26
  { 5,  2}, // #27
  { 8, 10}, // #28
  { 1,  2}, // #29
  { 4,  2}, // #30
  { 5,  2}, // #31
  { 8, 13}, // #32
  { 9,  2}, // #33
  {10,  1}, // #34
  {12,  1}, // #35
  { 4,  1}, // #36
  { 9,  2}, // #37
  { 9,  3}, // #38
  { 4,  1}, // #39
  { 9,  3}, // #40
  { 9,  4}, // #41
  { 4,  1}, // #42
  { 9,  4}, // #43
  { 9,  1}, // #44
  {10,  2}, // #45
  { 4,  1}, // #46
  { 9,  1}, // #47
  {10,  2}, // #48
  { 9,  2}, // #49
  {10,  2}, // #50
  { 4,  1}, // #51
  { 9,  2}, // #52
  {10,  2}, // #53
  { 9,  2}, // #54
  {10,  3}, // #55
  { 4,  1}, // #56
  { 9,  2}, // #57
  {10,  3}, // #58
  { 9,  3}, // #59
  {10,  3}, // #60
  { 4,  1}, // #61
  { 9,  3}, // #62
  {10,  3}, // #63
  { 9,  1}, // #64
  {10,  3}, // #65
  { 4,  1}, // #66
  { 9,  1}, // #67
  {10,  3}, // #68
  { 9,  2}, // #69
  {10,  4}, // #70
  { 4,  1}, // #71
  { 9,  2}, // #72
  {10,  4}, // #73
  { 9,  4}, // #74
  {10,  8}, // #75
  { 4,  1}, // #76
  { 9,  4}, // #77
  {10,  8}, // #78
  { 9,  1}, // #79
  {10,  4}, // #80
  { 4,  1}, // #81
  { 9,  1}, // #82
  {10,  4}, // #83
  { 4,  1}, // #84
  { 9,  2}, // #85
  {10,  1}, // #86
  { 4,  1}, // #87
  { 7,  1}, // #88
  { 9,  1} // #89
}; // ARM64WriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry ARM64WriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 2,  0}, // #1 WriteV_WriteISReg_WriteIEReg_WriteExtr_WriteF_WriteFImm_WriteAdr_CyWriteCrypto2
  { 1,  0}, // #2 WriteI_WriteIS_WriteBarrier_WriteImm
  {-1,  0}, // #3 WriteSys
  { 4,  0}, // #4 WriteFCmp_WriteFCvt_WriteFMul_WriteLD_WriteIM32_WriteST_CyWriteV4_WriteFRSQRTE_WriteVST
  {17,  0}, // #5 WriteFDiv
  { 5,  0}, // #6 WriteVLD_WriteLD_WriteIM64_CyWriteV5_WriteST
  { 4,  0}, // #7 WriteLD_WriteST_WriteVST
  { 4,  0}, // #8 WriteLDHi_WriteST_WriteVST
  { 4,  0}, // #9 WriteLD_WriteVST
  { 4,  0}, // #10 WriteLDHi_WriteVST
  { 1,  0}, // #11 WriteAdr_WriteI
  {10,  0}, // #12 WriteID32_WriteFRSQRTS_WriteLD
  {13,  0}, // #13 WriteID64
  { 8,  0}, // #14 WriteLD_WriteFRECPS_WriteVST
  { 6,  0}, // #15 WriteVST_CyWriteCrypto6
  { 1,  0}, // #16 WriteAdr
  { 6,  0}, // #17 WriteVST
  { 1,  0}, // #18 WriteAdr
  { 4,  0}, // #19 WriteST_WriteVST
  { 7,  0}, // #20 WriteV
  { 3,  0}, // #21 CyWriteV3_CyWritePMUL_CyWriteCrypto3
  { 2, 18}, // #22 CyWriteVADDLP
  { 3, 19}, // #23 CyWriteVAccum
  { 3, 17}, // #24 CyWriteVABD
  { 2, 21}, // #25 CyWriteVSHR
  { 3, 22}, // #26 CyWriteVSRSHR
  { 3, 23}, // #27 CyWriteVShiftAcc
  { 4, 20}, // #28 CyWriteVMul
  { 5, 16}, // #29 CyWriteV64Mul
  { 8, 10}, // #30 CyWriteSMul
  {10,  7}, // #31 CyWriteDMul
  { 5,  0}, // #32 WriteVLD
  { 1,  0}, // #33 WriteAdr
  { 5,  0}, // #34 WriteVLD
  { 5,  0}, // #35 WriteVLD
  { 5,  0}, // #36 WriteVLD
  { 5,  0}, // #37 WriteVLD
  { 5,  0}, // #38 WriteVLD
  { 7,  0}, // #39 WriteV
  { 1,  0}, // #40 WriteAdr
  { 7,  0}, // #41 WriteV
  { 2,  0}, // #42 WriteV
  { 7,  0}, // #43 WriteV
  { 1,  0}, // #44 WriteAdr
  { 2,  0}, // #45 WriteV
  { 7,  0}, // #46 WriteV
  { 7,  0}, // #47 WriteV
  { 7,  0}, // #48 WriteV
  { 7,  0}, // #49 WriteV
  { 2,  0}, // #50 WriteV
  { 7,  0}, // #51 WriteV
  { 1,  0}, // #52 WriteAdr
  { 7,  0}, // #53 WriteV
  { 7,  0}, // #54 WriteV
  { 7,  0}, // #55 WriteV
  { 2,  0}, // #56 WriteV
  { 2,  0}, // #57 WriteV
  { 7,  0}, // #58 WriteV
  { 1,  0}, // #59 WriteAdr
  { 2,  0}, // #60 WriteV
  { 2,  0}, // #61 WriteV
  { 7,  0}, // #62 WriteV
  { 1,  0}, // #63 WriteAdr
  { 7,  0}, // #64 WriteV
  { 2,  0}, // #65 WriteV
  { 2,  0}, // #66 WriteV
  { 9,  0}, // #67 WriteV
  { 9,  0}, // #68 WriteV
  { 9,  0}, // #69 WriteV
  { 9,  0}, // #70 WriteV
  { 9,  0}, // #71 WriteV
  { 1,  0}, // #72 WriteAdr
  { 9,  0}, // #73 WriteV
  { 9,  0}, // #74 WriteV
  { 9,  0}, // #75 WriteV
  { 7,  0}, // #76 WriteV
  { 2,  0}, // #77 WriteV
  { 2,  0}, // #78 WriteV
  { 2,  0}, // #79 WriteV
  { 7,  0}, // #80 WriteV
  { 1,  0}, // #81 WriteAdr
  { 2,  0}, // #82 WriteV
  { 2,  0}, // #83 WriteV
  { 2,  0}, // #84 WriteV
  { 1,  0}, // #85 WriteAdr
  { 4,  0}, // #86 WriteVST
  { 4,  0}, // #87 WriteVST
  { 6,  0}, // #88 WriteVST
  { 4,  0}, // #89 WriteVST
  { 1,  0}, // #90 WriteAdr
  { 6,  0}, // #91 WriteVST
  { 4,  0}, // #92 WriteVST
  { 1,  0}, // #93 WriteAdr
  { 4,  0}, // #94 WriteVST
  { 4,  0}, // #95 WriteVST
  { 4,  0}, // #96 WriteVST
  { 6,  0}, // #97 WriteVST
  { 6,  0}, // #98 WriteVST
  { 1,  0}, // #99 WriteAdr
  { 6,  0}, // #100 WriteVST
  { 6,  0}, // #101 WriteVST
  { 1,  0}, // #102 WriteAdr
  { 4,  0}, // #103 WriteVST
  { 4,  0}, // #104 WriteVST
  { 4,  0}, // #105 WriteVST
  { 4,  0}, // #106 WriteVST
  { 6,  0}, // #107 WriteVST
  { 6,  0}, // #108 WriteVST
  { 6,  0}, // #109 WriteVST
  { 1,  0}, // #110 WriteAdr
  { 6,  0}, // #111 WriteVST
  { 6,  0}, // #112 WriteVST
  { 6,  0}, // #113 WriteVST
  { 8,  0}, // #114 WriteVST
  { 8,  0}, // #115 WriteVST
  { 1,  0}, // #116 WriteAdr
  { 8,  0}, // #117 WriteVST
  { 8,  0}, // #118 WriteVST
  { 8,  0}, // #119 WriteVST
  { 8,  0}, // #120 WriteVST
  { 8,  0}, // #121 WriteVST
  { 8,  0} // #122 WriteVST
}; // ARM64WriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry ARM64ReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0,  0,  1}, // #1
  {0, 17,  1}, // #2
  {0, 18,  1}, // #3
  {0, 19,  1}, // #4
  {0, 21,  1}, // #5
  {0, 22,  1}, // #6
  {0, 23,  1}, // #7
  {0, 16,  1}, // #8
  {0, 20,  1}, // #9
  {0, 10,  4}, // #10
  {0,  7,  5}, // #11
  {0,  0,  5} // #12
}; // ARM64ReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc CycloneModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("WriteV")             1, 0, 0,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("WriteI")             1, 0, 0,  2, 1,  2, 1,  0, 0}, // #2
  {DBGFIELD("WriteISReg")         1, 0, 0,  3, 2,  1, 1,  0, 0}, // #3
  {DBGFIELD("WriteIEReg")         1, 0, 0,  3, 2,  1, 1,  0, 0}, // #4
  {DBGFIELD("WriteIS")            1, 0, 0,  5, 2,  2, 1,  0, 0}, // #5
  {DBGFIELD("WriteBr")            1, 0, 0,  7, 2,  0, 1,  0, 0}, // #6
  {DBGFIELD("WriteBrReg")         1, 0, 0,  9, 3,  0, 1,  0, 0}, // #7
  {DBGFIELD("WriteSys")           1, 0, 0,  0, 0,  3, 1,  0, 0}, // #8
  {DBGFIELD("WriteBarrier")       1, 0, 0, 12, 1,  2, 1,  0, 0}, // #9
  {DBGFIELD("WriteExtr_ReadExtrHi") 2, 0, 0,  3, 2,  1, 1,  1, 1}, // #10
  {DBGFIELD("WriteF")             1, 0, 0,  1, 1,  1, 1,  0, 0}, // #11
  {DBGFIELD("WriteFCmp")          1, 0, 0, 13, 3,  4, 1,  0, 0}, // #12
  {DBGFIELD("WriteFCvt")          1, 0, 0,  1, 1,  4, 1,  0, 0}, // #13
  {DBGFIELD("WriteFDiv")          1, 0, 0, 16, 3,  5, 1,  0, 0}, // #14
  {DBGFIELD("WriteFMul")          1, 0, 0, 19, 2,  4, 1,  0, 0}, // #15
  {DBGFIELD("WriteFCopy")         1, 0, 0, 12, 1,  6, 1,  0, 0}, // #16
  {DBGFIELD("WriteFImm")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #17
  {DBGFIELD("WriteHint")          1, 0, 0,  0, 0,  0, 1,  0, 0}, // #18
  {DBGFIELD("WriteLD")            1, 0, 0, 12, 1,  4, 1,  0, 0}, // #19
  {DBGFIELD("WriteLD_WriteLDHi")  2, 0, 0, 12, 1,  7, 2,  0, 0}, // #20
  {DBGFIELD("WriteLD_WriteLDHi_WriteAdr") 3, 0, 0, 11, 2,  9, 3,  0, 0}, // #21
  {DBGFIELD("WriteLD_WriteI")     2, 0, 0, 11, 2, 10, 2,  0, 0}, // #22
  {DBGFIELD("WriteLD_WriteAdr")   2, 0, 0, 11, 2, 10, 2,  0, 0}, // #23
  {DBGFIELD("WriteLDIdx_ReadAdrBase") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #24
  {DBGFIELD("WriteLDAdr")         2, 0, 0, 11, 2,  6, 1,  0, 0}, // #25
  {DBGFIELD("WriteIM32")          1, 0, 0, 21, 4,  4, 1,  0, 0}, // #26
  {DBGFIELD("WriteIM64")          1, 0, 0, 21, 4,  6, 1,  0, 0}, // #27
  {DBGFIELD("WriteImm")           1, 0, 0,  2, 1,  2, 1,  0, 0}, // #28
  {DBGFIELD("WriteAdrAdr")        2, 0, 0,  3, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("WriteID32")          1, 0, 0, 25, 4, 12, 1,  0, 0}, // #30
  {DBGFIELD("WriteID64")          1, 0, 0, 29, 4, 13, 1,  0, 0}, // #31
  {DBGFIELD("WriteST")            1, 0, 0, 12, 1,  4, 1,  0, 0}, // #32
  {DBGFIELD("WriteSTX")           2, 0, 0, 33, 1, 14, 1,  0, 0}, // #33
  {DBGFIELD("WriteSTP")           2, 0, 0, 12, 2, 15, 1,  0, 0}, // #34
  {DBGFIELD("WriteAdr_WriteSTP")  3, 0, 0, 11, 3, 16, 2,  0, 0}, // #35
  {DBGFIELD("WriteAdr_WriteST_ReadAdrBase") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #36
  {DBGFIELD("WriteAdr_WriteST")   2, 0, 0, 11, 2, 18, 2,  0, 0}, // #37
  {DBGFIELD("WriteSTIdx_ReadAdrBase") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #38
  {DBGFIELD("MOVZWi_MOVZXi")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("ANDWri_ANDXri")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #40
  {DBGFIELD("COPY")               65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("ORRXrr_ADDXrr")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("STPQi")              2, 0, 0, 33, 1,  7, 2,  0, 0}, // #43
  {DBGFIELD("ISB")                1, 0, 0,  2, 1,  2, 1,  0, 0}, // #44
  {DBGFIELD("ORRv16i8")           65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #45
  {DBGFIELD("FMOVSWr_FMOVDXr_FMOVDXHighr") 1, 0, 0, 12, 1,  4, 1,  0, 0}, // #46
  {DBGFIELD("INSvi16gpr_INSvi16lane_INSvi32gpr_INSvi32lane_INSvi64gpr_INSvi64lane_INSvi8gpr_INSvi8lane") 2, 0, 0, 12, 2, 20, 1,  0, 0}, // #47
  {DBGFIELD("SMOVvi16to32_SMOVvi16to64_SMOVvi32to64_SMOVvi8to32_SMOVvi8to64_UMOVvi16_UMOVvi32_UMOVvi64_UMOVvi8") 2, 0, 0, 11, 2,  6, 1,  0, 0}, // #48
  {DBGFIELD("DUPv16i8gpr_DUPv16i8lane_DUPv2i32gpr_DUPv2i32lane_DUPv2i64gpr_DUPv2i64lane_DUPv4i16gpr_DUPv4i16lane_DUPv4i32gpr_DUPv4i32lane_DUPv8i16gpr_DUPv8i16lane_DUPv8i8gpr_DUPv8i8lane") 2, 0, 0, 12, 2, 20, 1,  0, 0}, // #49
  {DBGFIELD("ABSv16i8_ABSv1i64_ABSv2i32_ABSv2i64_ABSv4i16_ABSv4i32_ABSv8i16_ABSv8i8") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #50
  {DBGFIELD("SQABSv16i8_SQABSv1i16_SQABSv1i32_SQABSv1i64_SQABSv1i8_SQABSv2i32_SQABSv2i64_SQABSv4i16_SQABSv4i32_SQABSv8i16_SQABSv8i8_SQNEGv16i8_SQNEGv1i16_SQNEGv1i32_SQNEGv1i64_SQNEGv1i8_SQNEGv2i32_SQNEGv2i64_SQNEGv4i16_SQNEGv4i32_SQNEGv8i16_SQNEGv8i8") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #51
  {DBGFIELD("SADDLPv16i8_v8i16_SADDLPv2i32_v1i64_SADDLPv4i16_v2i32_SADDLPv4i32_v2i64_SADDLPv8i16_v4i32_SADDLPv8i8_v4i16_UADDLPv16i8_v8i16_UADDLPv2i32_v1i64_UADDLPv4i16_v2i32_UADDLPv4i32_v2i64_UADDLPv8i16_v4i32_UADDLPv8i8_v4i16") 1, 0, 0,  1, 1, 22, 1,  0, 0}, // #52
  {DBGFIELD("ADDVv16i8v_ADDVv4i16v_ADDVv4i32v_ADDVv8i16v_ADDVv8i8v_SMAXVv16i8v_SMAXVv4i16v_SMAXVv4i32v_SMAXVv8i16v_SMAXVv8i8v_SMINVv16i8v_SMINVv4i16v_SMINVv4i32v_SMINVv8i16v_SMINVv8i8v_UMAXVv16i8v_UMAXVv4i16v_UMAXVv4i32v_UMAXVv8i16v_UMAXVv8i8v_UMINVv16i8v_UMINVv4i16v_UMINVv4i32v_UMINVv8i16v_UMINVv8i8v") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #53
  {DBGFIELD("SADDLVv16i8v_SADDLVv4i16v_SADDLVv4i32v_SADDLVv8i16v_SADDLVv8i8v_UADDLVv16i8v_UADDLVv4i16v_UADDLVv4i32v_UADDLVv8i16v_UADDLVv8i8v") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #54
  {DBGFIELD("SADALPv16i8_v8i16_SADALPv2i32_v1i64_SADALPv4i16_v2i32_SADALPv4i32_v2i64_SADALPv8i16_v4i32_SADALPv8i8_v4i16_UADALPv16i8_v8i16_UADALPv2i32_v1i64_UADALPv4i16_v2i32_UADALPv4i32_v2i64_UADALPv8i16_v4i32_UADALPv8i8_v4i16") 1, 0, 0, 19, 2, 23, 1,  2, 3}, // #55
  {DBGFIELD("SABALv16i8_v8i16_SABALv2i32_v2i64_SABALv4i16_v4i32_SABALv4i32_v2i64_SABALv8i16_v4i32_SABALv8i8_v8i16_SABAv16i8_SABAv2i32_SABAv4i16_SABAv4i32_SABAv8i16_SABAv8i8_UABALv16i8_v8i16_UABALv2i32_v2i64_UABALv4i16_v4i32_UABALv4i32_v2i64_UABALv8i16_v4i32_UABALv8i8_v8i16_UABAv16i8_UABAv2i32_UABAv4i16_UABAv4i32_UABAv8i16_UABAv8i8") 1, 0, 0, 19, 2, 23, 1,  2, 3}, // #56
  {DBGFIELD("SQADDv16i8_SQADDv1i16_SQADDv1i32_SQADDv1i64_SQADDv1i8_SQADDv2i32_SQADDv2i64_SQADDv4i16_SQADDv4i32_SQADDv8i16_SQADDv8i8_SQSUBv16i8_SQSUBv1i16_SQSUBv1i32_SQSUBv1i64_SQSUBv1i8_SQSUBv2i32_SQSUBv2i64_SQSUBv4i16_SQSUBv4i32_SQSUBv8i16_SQSUBv8i8_UQADDv16i8_UQADDv1i16_UQADDv1i32_UQADDv1i64_UQADDv1i8_UQADDv2i32_UQADDv2i64_UQADDv4i16_UQADDv4i32_UQADDv8i16_UQADDv8i8_UQSUBv16i8_UQSUBv1i16_UQSUBv1i32_UQSUBv1i64_UQSUBv1i8_UQSUBv2i32_UQSUBv2i64_UQSUBv4i16_UQSUBv4i32_UQSUBv8i16_UQSUBv8i8") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #57
  {DBGFIELD("SUQADDv16i8_SUQADDv1i16_SUQADDv1i32_SUQADDv1i64_SUQADDv1i8_SUQADDv2i32_SUQADDv2i64_SUQADDv4i16_SUQADDv4i32_SUQADDv8i16_SUQADDv8i8_USQADDv16i8_USQADDv1i16_USQADDv1i32_USQADDv1i64_USQADDv1i8_USQADDv2i32_USQADDv2i64_USQADDv4i16_USQADDv4i32_USQADDv8i16_USQADDv8i8") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #58
  {DBGFIELD("ADDHNv2i64_v2i32_ADDHNv2i64_v4i32_ADDHNv4i32_v4i16_ADDHNv4i32_v8i16_ADDHNv8i16_v16i8_ADDHNv8i16_v8i8_RADDHNv2i64_v2i32_RADDHNv2i64_v4i32_RADDHNv4i32_v4i16_RADDHNv4i32_v8i16_RADDHNv8i16_v16i8_RADDHNv8i16_v8i8_RSUBHNv2i64_v2i32_RSUBHNv2i64_v4i32_RSUBHNv4i32_v4i16_RSUBHNv4i32_v8i16_RSUBHNv8i16_v16i8_RSUBHNv8i16_v8i8_SUBHNv2i64_v2i32_SUBHNv2i64_v4i32_SUBHNv4i32_v4i16_SUBHNv4i32_v8i16_SUBHNv8i16_v16i8_SUBHNv8i16_v8i8") 1, 0, 0,  1, 1,  4, 1,  0, 0}, // #59
  {DBGFIELD("CMEQv16i8_CMEQv16i8rz_CMEQv1i64_CMEQv1i64rz_CMEQv2i32_CMEQv2i32rz_CMEQv2i64_CMEQv2i64rz_CMEQv4i16_CMEQv4i16rz_CMEQv4i32_CMEQv4i32rz_CMEQv8i16_CMEQv8i16rz_CMEQv8i8_CMEQv8i8rz_CMGEv16i8_CMGEv16i8rz_CMGEv1i64_CMGEv1i64rz_CMGEv2i32_CMGEv2i32rz_CMGEv2i64_CMGEv2i64rz_CMGEv4i16_CMGEv4i16rz_CMGEv4i32_CMGEv4i32rz_CMGEv8i16_CMGEv8i16rz_CMGEv8i8_CMGEv8i8rz_CMGTv16i8_CMGTv16i8rz_CMGTv1i64_CMGTv1i64rz_CMGTv2i32_CMGTv2i32rz_CMGTv2i64_CMGTv2i64rz_CMGTv4i16_CMGTv4i16rz_CMGTv4i32_CMGTv4i32rz_CMGTv8i16_CMGTv8i16rz_CMGTv8i8_CMGTv8i8rz_CMHIv16i8_CMHIv1i64_CMHIv2i32_CMHIv2i64_CMHIv4i16_CMHIv4i32_CMHIv8i16_CMHIv8i8_CMHSv16i8_CMHSv1i64_CMHSv2i32_CMHSv2i64_CMHSv4i16_CMHSv4i32_CMHSv8i16_CMHSv8i8_CMLEv16i8rz_CMLEv1i64rz_CMLEv2i32rz_CMLEv2i64rz_CMLEv4i16rz_CMLEv4i32rz_CMLEv8i16rz_CMLEv8i8rz_CMLTv16i8rz_CMLTv1i64rz_CMLTv2i32rz_CMLTv2i64rz_CMLTv4i16rz_CMLTv4i32rz_CMLTv8i16rz_CMLTv8i8rz") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #60
  {DBGFIELD("SMAXPv16i8_SMAXPv2i32_SMAXPv4i16_SMAXPv4i32_SMAXPv8i16_SMAXPv8i8_SMAXv16i8_SMAXv2i32_SMAXv4i16_SMAXv4i32_SMAXv8i16_SMAXv8i8_SMINPv16i8_SMINPv2i32_SMINPv4i16_SMINPv4i32_SMINPv8i16_SMINPv8i8_SMINv16i8_SMINv2i32_SMINv4i16_SMINv4i32_SMINv8i16_SMINv8i8_UMAXPv16i8_UMAXPv2i32_UMAXPv4i16_UMAXPv4i32_UMAXPv8i16_UMAXPv8i8_UMAXv16i8_UMAXv2i32_UMAXv4i16_UMAXv4i32_UMAXv8i16_UMAXv8i8_UMINPv16i8_UMINPv2i32_UMINPv4i16_UMINPv4i32_UMINPv8i16_UMINPv8i8_UMINv16i8_UMINv2i32_UMINv4i16_UMINv4i32_UMINv8i16_UMINv8i8") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #61
  {DBGFIELD("SABDLv16i8_v8i16_SABDLv2i32_v2i64_SABDLv4i16_v4i32_SABDLv4i32_v2i64_SABDLv8i16_v4i32_SABDLv8i8_v8i16_SABDv16i8_SABDv2i32_SABDv4i16_SABDv4i32_SABDv8i16_SABDv8i8_UABDLv16i8_v8i16_UABDLv2i32_v2i64_UABDLv4i16_v4i32_UABDLv4i32_v2i64_UABDLv8i16_v4i32_UABDLv8i8_v8i16_UABDv16i8_UABDv2i32_UABDv4i16_UABDv4i32_UABDv8i16_UABDv8i8") 1, 0, 0,  1, 1, 24, 1,  0, 0}, // #62
  {DBGFIELD("FADDPv2i32p")        1, 0, 0,  1, 1,  4, 1,  0, 0}, // #63
  {DBGFIELD("FADDPv2i64p")        1, 0, 0,  1, 1,  6, 1,  0, 0}, // #64
  {DBGFIELD("FMAXNMPv2i32p_FMAXNMPv2i64p_FMAXPv2i32p_FMAXPv2i64p_FMINNMPv2i32p_FMINNMPv2i64p_FMINPv2i32p_FMINPv2i64p") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #65
  {DBGFIELD("FMAXNMVv4i32v_FMAXVv4i32v_FMINNMVv4i32v_FMINVv4i32v") 1, 0, 0,  1, 1,  4, 1,  0, 0}, // #66
  {DBGFIELD("FADDSrr_FSUBSrr")    1, 0, 0,  1, 1,  4, 1,  0, 0}, // #67
  {DBGFIELD("FADDv2f32_FADDv4f32_FSUBv2f32_FSUBv4f32_FADDPv2f32_FADDPv4f32_FABD32_FABDv2f32_FABDv4f32") 1, 0, 0,  1, 1,  4, 1,  0, 0}, // #68
  {DBGFIELD("FADDDrr_FSUBDrr")    1, 0, 0,  1, 1,  6, 1,  0, 0}, // #69
  {DBGFIELD("FADDv2f64_FSUBv2f64_FADDPv2f64_FABD64_FABDv2f64") 1, 0, 0,  1, 1,  6, 1,  0, 0}, // #70
  {DBGFIELD("FCMEQ32_FCMEQ64_FCMEQv1i32rz_FCMEQv1i64rz_FCMEQv2f32_FCMEQv2f64_FCMEQv2i32rz_FCMEQv2i64rz_FCMEQv4f32_FCMEQv4i32rz_FCMGT32_FCMGT64_FCMGTv1i32rz_FCMGTv1i64rz_FCMGTv2f32_FCMGTv2f64_FCMGTv2i32rz_FCMGTv2i64rz_FCMGTv4f32_FCMGTv4i32rz_FCMLEv1i32rz_FCMLEv1i64rz_FCMLEv2i32rz_FCMLEv2i64rz_FCMLEv4i32rz_FCMLTv1i32rz_FCMLTv1i64rz_FCMLTv2i32rz_FCMLTv2i64rz_FCMLTv4i32rz") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #71
  {DBGFIELD("FACGE32_FACGE64_FACGEv2f32_FACGEv2f64_FACGEv4f32_FACGT32_FACGT64_FACGTv2f32_FACGTv2f64_FACGTv4f32_FMAXNMPv2f32_FMAXNMPv2f64_FMAXNMPv4f32_FMAXNMv2f32_FMAXNMv2f64_FMAXNMv4f32_FMAXPv2f32_FMAXPv2f64_FMAXPv4f32_FMAXv2f32_FMAXv2f64_FMAXv4f32_FMINNMPv2f32_FMINNMPv2f64_FMINNMPv4f32_FMINNMv2f32_FMINNMv2f64_FMINNMv4f32_FMINPv2f32_FMINPv2f64_FMINPv4f32_FMINv2f32_FMINv2f64_FMINv4f32") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #72
  {DBGFIELD("FMAXDrr_FMAXNMDrr_FMAXNMSrr_FMAXSrr_FMINDrr_FMINNMDrr_FMINNMSrr_FMINSrr") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #73
  {DBGFIELD("SSHRv16i8_shift_SSHRv2i32_shift_SSHRv2i64_shift_SSHRv4i16_shift_SSHRv4i32_shift_SSHRv8i16_shift_SSHRv8i8_shift_USHRv16i8_shift_USHRv2i32_shift_USHRv2i64_shift_USHRv4i16_shift_USHRv4i32_shift_USHRv8i16_shift_USHRv8i8_shift") 1, 0, 0,  1, 1, 25, 1,  0, 0}, // #74
  {DBGFIELD("SRSHRv16i8_shift_SRSHRv2i32_shift_SRSHRv2i64_shift_SRSHRv4i16_shift_SRSHRv4i32_shift_SRSHRv8i16_shift_SRSHRv8i8_shift_URSHRv16i8_shift_URSHRv2i32_shift_URSHRv2i64_shift_URSHRv4i16_shift_URSHRv4i32_shift_URSHRv8i16_shift_URSHRv8i8_shift") 1, 0, 0,  1, 1, 26, 1,  0, 0}, // #75
  {DBGFIELD("SRSRAv16i8_shift_SRSRAv2i32_shift_SRSRAv2i64_shift_SRSRAv4i16_shift_SRSRAv4i32_shift_SRSRAv8i16_shift_SRSRAv8i8_shift_SSRAv16i8_shift_SSRAv2i32_shift_SSRAv2i64_shift_SSRAv4i16_shift_SSRAv4i32_shift_SSRAv8i16_shift_SSRAv8i8_shift_URSRAv16i8_shift_URSRAv2i32_shift_URSRAv2i64_shift_URSRAv4i16_shift_URSRAv4i32_shift_URSRAv8i16_shift_URSRAv8i8_shift_USRAv16i8_shift_USRAv2i32_shift_USRAv2i64_shift_USRAv4i16_shift_USRAv4i32_shift_USRAv8i16_shift_USRAv8i8_shift") 1, 0, 0, 19, 2, 27, 1,  5, 3}, // #76
  {DBGFIELD("SRSHLv16i8_SRSHLv1i64_SRSHLv2i32_SRSHLv2i64_SRSHLv4i16_SRSHLv4i32_SRSHLv8i16_SRSHLv8i8_URSHLv16i8_URSHLv1i64_URSHLv2i32_URSHLv2i64_URSHLv4i16_URSHLv4i32_URSHLv8i16_URSHLv8i8") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #77
  {DBGFIELD("SQRSHLv16i8_SQRSHLv1i16_SQRSHLv1i32_SQRSHLv1i64_SQRSHLv1i8_SQRSHLv2i32_SQRSHLv2i64_SQRSHLv4i16_SQRSHLv4i32_SQRSHLv8i16_SQRSHLv8i8_UQRSHLv16i8_UQRSHLv1i16_UQRSHLv1i32_UQRSHLv1i64_UQRSHLv1i8_UQRSHLv2i32_UQRSHLv2i64_UQRSHLv4i16_UQRSHLv4i32_UQRSHLv8i16_UQRSHLv8i8") 1, 0, 0,  1, 1, 21, 1,  0, 0}, // #78
  {DBGFIELD("RSHRNv16i8_shift_RSHRNv2i32_shift_RSHRNv4i16_shift_RSHRNv4i32_shift_RSHRNv8i16_shift_RSHRNv8i8_shift_SHRNv16i8_shift_SHRNv2i32_shift_SHRNv4i16_shift_SHRNv4i32_shift_SHRNv8i16_shift_SHRNv8i8_shift_SQRSHRNv16i8_shift_SQRSHRNv2i32_shift_SQRSHRNv4i16_shift_SQRSHRNv4i32_shift_SQRSHRNv8i16_shift_SQRSHRNv8i8_shift_SQRSHRUNv16i8_shift_SQRSHRUNv2i32_shift_SQRSHRUNv4i16_shift_SQRSHRUNv4i32_shift_SQRSHRUNv8i16_shift_SQRSHRUNv8i8_shift_SQSHRNv16i8_shift_SQSHRNv2i32_shift_SQSHRNv4i16_shift_SQSHRNv4i32_shift_SQSHRNv8i16_shift_SQSHRNv8i8_shift_SQSHRUNv16i8_shift_SQSHRUNv2i32_shift_SQSHRUNv4i16_shift_SQSHRUNv4i32_shift_SQSHRUNv8i16_shift_SQSHRUNv8i8_shift_SQXTNv16i8_SQXTNv1i16_SQXTNv1i32_SQXTNv1i8_SQXTNv2i32_SQXTNv4i16_SQXTNv4i32_SQXTNv8i16_SQXTNv8i8_SQXTUNv16i8_SQXTUNv1i16_SQXTUNv1i32_SQXTUNv1i8_SQXTUNv2i32_SQXTUNv4i16_SQXTUNv4i32_SQXTUNv8i16_SQXTUNv8i8_UQRSHRNv16i8_shift_UQRSHRNv2i32_shift_UQRSHRNv4i16_shift_UQRSHRNv4i32_shift_UQRSHRNv8i16_shift_UQRSHRNv8i8_shift_UQSHRNv16i8_shift_UQSHRNv2i32_shift_UQSHRNv4i16_shift_UQSHRNv4i32_shift_UQSHRNv8i16_shift_UQSHRNv8i8_shift_UQXTNv16i8_UQXTNv1i16_UQXTNv1i32_UQXTNv1i8_UQXTNv2i32_UQXTNv4i16_UQXTNv4i32_UQXTNv8i16_UQXTNv8i8") 1, 0, 0,  1, 1,  4, 1,  0, 0}, // #79
  {DBGFIELD("MULv16i8_MULv2i32_MULv2i32_indexed_MULv4i16_MULv4i16_indexed_MULv4i32_MULv4i32_indexed_MULv8i16_MULv8i16_indexed_MULv8i8_SMULLv16i8_v8i16_SMULLv2i32_indexed_SMULLv2i32_v2i64_SMULLv4i16_indexed_SMULLv4i16_v4i32_SMULLv4i32_indexed_SMULLv4i32_v2i64_SMULLv8i16_indexed_SMULLv8i16_v4i32_SMULLv8i8_v8i16_SQDMULHv1i16_SQDMULHv1i16_indexed_SQDMULHv1i32_SQDMULHv1i32_indexed_SQDMULHv2i32_SQDMULHv2i32_indexed_SQDMULHv4i16_SQDMULHv4i16_indexed_SQDMULHv4i32_SQDMULHv4i32_indexed_SQDMULHv8i16_SQDMULHv8i16_indexed_SQDMULLv1i32_indexed_SQDMULLv1i64_indexed_SQDMULLv2i32_indexed_SQDMULLv2i32_v2i64_SQDMULLv4i16_indexed_SQDMULLv4i16_v4i32_SQDMULLv4i32_indexed_SQDMULLv4i32_v2i64_SQDMULLv8i16_indexed_SQDMULLv8i16_v4i32_SQRDMULHv1i16_SQRDMULHv1i16_indexed_SQRDMULHv1i32_SQRDMULHv1i32_indexed_SQRDMULHv2i32_SQRDMULHv2i32_indexed_SQRDMULHv4i16_SQRDMULHv4i16_indexed_SQRDMULHv4i32_SQRDMULHv4i32_indexed_SQRDMULHv8i16_SQRDMULHv8i16_indexed_UMULLv16i8_v8i16_UMULLv2i32_indexed_UMULLv2i32_v2i64_UMULLv4i16_indexed_UMULLv4i16_v4i32_UMULLv4i32_indexed_UMULLv4i32_v2i64_UMULLv8i16_indexed_UMULLv8i16_v4i32_UMULLv8i8_v8i16") 1, 0, 0, 19, 2, 28, 1,  0, 0}, // #80
  {DBGFIELD("FMULDrr_FNMULDrr")   1, 0, 0, 19, 2, 29, 1,  0, 0}, // #81
  {DBGFIELD("FMULv2f64_FMULv2i64_indexed_FMULX64_FMULXv2f64_FMULXv2i64_indexed") 1, 0, 0, 19, 2, 29, 1,  0, 0}, // #82
  {DBGFIELD("MLAv16i8_MLAv2i32_MLAv2i32_indexed_MLAv4i16_MLAv4i16_indexed_MLAv4i32_MLAv4i32_indexed_MLAv8i16_MLAv8i16_indexed_MLAv8i8_MLSv16i8_MLSv2i32_MLSv2i32_indexed_MLSv4i16_MLSv4i16_indexed_MLSv4i32_MLSv4i32_indexed_MLSv8i16_MLSv8i16_indexed_MLSv8i8_SMLALv16i8_v8i16_SMLALv2i32_indexed_SMLALv2i32_v2i64_SMLALv4i16_indexed_SMLALv4i16_v4i32_SMLALv4i32_indexed_SMLALv4i32_v2i64_SMLALv8i16_indexed_SMLALv8i16_v4i32_SMLALv8i8_v8i16_SMLSLv16i8_v8i16_SMLSLv2i32_indexed_SMLSLv2i32_v2i64_SMLSLv4i16_indexed_SMLSLv4i16_v4i32_SMLSLv4i32_indexed_SMLSLv4i32_v2i64_SMLSLv8i16_indexed_SMLSLv8i16_v4i32_SMLSLv8i8_v8i16_SQDMLALi16_SQDMLALi32_SQDMLALv1i32_indexed_SQDMLALv1i64_indexed_SQDMLALv2i32_indexed_SQDMLALv2i32_v2i64_SQDMLALv4i16_indexed_SQDMLALv4i16_v4i32_SQDMLALv4i32_indexed_SQDMLALv4i32_v2i64_SQDMLALv8i16_indexed_SQDMLALv8i16_v4i32_SQDMLSLi16_SQDMLSLi32_SQDMLSLv1i32_indexed_SQDMLSLv1i64_indexed_SQDMLSLv2i32_indexed_SQDMLSLv2i32_v2i64_SQDMLSLv4i16_indexed_SQDMLSLv4i16_v4i32_SQDMLSLv4i32_indexed_SQDMLSLv4i32_v2i64_SQDMLSLv8i16_indexed_SQDMLSLv8i16_v4i32_UMLALv16i8_v8i16_UMLALv2i32_indexed_UMLALv2i32_v2i64_UMLALv4i16_indexed_UMLALv4i16_v4i32_UMLALv4i32_indexed_UMLALv4i32_v2i64_UMLALv8i16_indexed_UMLALv8i16_v4i32_UMLALv8i8_v8i16_UMLSLv16i8_v8i16_UMLSLv2i32_indexed_UMLSLv2i32_v2i64_UMLSLv4i16_indexed_UMLSLv4i16_v4i32_UMLSLv4i32_indexed_UMLSLv4i32_v2i64_UMLSLv8i16_indexed_UMLSLv8i16_v4i32_UMLSLv8i8_v8i16") 1, 0, 0, 19, 2, 28, 1,  8, 2}, // #83
  {DBGFIELD("FMADDSrrr_FMSUBSrrr_FNMADDSrrr_FNMSUBSrrr") 1, 0, 0, 19, 2, 30, 1, 10, 1}, // #84
  {DBGFIELD("FMLAv2f32_FMLAv4f32_FMLAv1i32_indexed_FMLAv1i64_indexed_FMLAv2i32_indexed") 1, 0, 0, 19, 2, 30, 1, 10, 1}, // #85
  {DBGFIELD("FMADDDrrr_FMSUBDrrr_FNMADDDrrr_FNMSUBDrrr") 1, 0, 0, 19, 2, 31, 1, 11, 1}, // #86
  {DBGFIELD("FMLAv2f64_FMLAv2i64_indexed_FMLSv2f64_FMLSv2i64_indexed") 1, 0, 0, 19, 2, 31, 1, 11, 1}, // #87
  {DBGFIELD("PMULLv16i8_PMULLv1i64_PMULLv2i64_PMULLv8i8_PMULv16i8_PMULv8i8") 1, 0, 0, 34, 2, 21, 1,  0, 0}, // #88
  {DBGFIELD("FRECPEv1i32_FRECPEv1i64_FRECPEv2f32_FRECPEv2f64_FRECPEv4f32_FRECPXv1i32_FRECPXv1i64_URECPEv2i32_URECPEv4i32_URSQRTEv2i32_URSQRTEv4i32") 1, 0, 0,  1, 1,  4, 1,  0, 0}, // #89
  {DBGFIELD("FRSQRTEv1i32_FRSQRTEv1i64_FRSQRTEv2f32_FRSQRTEv2f64_FRSQRTEv4f32") 1, 0, 0, 19, 2,  4, 1,  0, 0}, // #90
  {DBGFIELD("FRECPSv2f32_FRECPSv2f64_FRECPSv4f32") 1, 0, 0, 19, 2, 14, 1,  0, 0}, // #91
  {DBGFIELD("FRSQRTSv2f32_FRSQRTSv2f64_FRSQRTSv4f32") 1, 0, 0, 19, 2, 12, 1,  0, 0}, // #92
  {DBGFIELD("FCVTSHr_FCVTDHr_FCVTDSr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #93
  {DBGFIELD("FCVTASSWDri_FCVTASSWSri_FCVTASSXDri_FCVTASSXSri_FCVTASUWDr_FCVTASUWSr_FCVTASUXDr_FCVTASUXSr_FCVTAUSWDri_FCVTAUSWSri_FCVTAUSXDri_FCVTAUSXSri_FCVTAUUWDr_FCVTAUUWSr_FCVTAUUXDr_FCVTAUUXSr_FCVTMSSWDri_FCVTMSSWSri_FCVTMSSXDri_FCVTMSSXSri_FCVTMSUWDr_FCVTMSUWSr_FCVTMSUXDr_FCVTMSUXSr_FCVTMUSWDri_FCVTMUSWSri_FCVTMUSXDri_FCVTMUSXSri_FCVTMUUWDr_FCVTMUUWSr_FCVTMUUXDr_FCVTMUUXSr_FCVTNSSWDri_FCVTNSSWSri_FCVTNSSXDri_FCVTNSSXSri_FCVTNSUWDr_FCVTNSUWSr_FCVTNSUXDr_FCVTNSUXSr_FCVTNUSWDri_FCVTNUSWSri_FCVTNUSXDri_FCVTNUSXSri_FCVTNUUWDr_FCVTNUUWSr_FCVTNUUXDr_FCVTNUUXSr_FCVTPSSWDri_FCVTPSSWSri_FCVTPSSXDri_FCVTPSSXSri_FCVTPSUWDr_FCVTPSUWSr_FCVTPSUXDr_FCVTPSUXSr_FCVTPUSWDri_FCVTPUSWSri_FCVTPUSXDri_FCVTPUSXSri_FCVTPUUWDr_FCVTPUUWSr_FCVTPUUXDr_FCVTPUUXSr_FCVTZSSWDri_FCVTZSSWSri_FCVTZSSXDri_FCVTZSSXSri_FCVTZSUWDr_FCVTZSUWSr_FCVTZSUXDr_FCVTZSUXSr_FCVTZUSWDri_FCVTZUSWSri_FCVTZUSXDri_FCVTZUSXSri_FCVTZUUWDr_FCVTZUUWSr_FCVTZUUXDr_FCVTZUUXSr") 2, 0, 0, 12, 2, 20, 1,  0, 0}, // #94
  {DBGFIELD("SCVTFSWDri_SCVTFSWSri_SCVTFSXDri_SCVTFSXSri_SCVTFUWDri_SCVTFUWSri_SCVTFUXDri_SCVTFUXSri_UCVTFSWDri_UCVTFSWSri_UCVTFSXDri_UCVTFSXSri_UCVTFUWDri_UCVTFUWSri_UCVTFUXDri_UCVTFUXSri") 2, 0, 0, 12, 2, 12, 1,  0, 0}, // #95
  {DBGFIELD("AESIMCrr_AESMCrr_SHA1Hrr_AESDrr_AESErr_SHA1SU1rr_SHA256SU0rr_SHA1SU0rrr") 1, 0, 0, 34, 2,  1, 1,  0, 0}, // #96
  {DBGFIELD("SHA256SU1rrr")       1, 0, 0, 34, 2, 21, 1,  0, 0}, // #97
  {DBGFIELD("SHA1Crrr_SHA1Mrrr_SHA1Prrr_SHA256Hrrr_SHA256H2rrr") 1, 0, 0, 34, 2, 15, 1,  0, 0}, // #98
  {DBGFIELD("LD1Onev16b_LD1Onev1d_LD1Onev2d_LD1Onev2s_LD1Onev4h_LD1Onev4s_LD1Onev8b_LD1Onev8h") 1, 0, 0, 12, 1,  6, 1,  0, 0}, // #99
  {DBGFIELD("LD1Onev16b_POST_LD1Onev1d_POST_LD1Onev2d_POST_LD1Onev2s_POST_LD1Onev4h_POST_LD1Onev4s_POST_LD1Onev8b_POST_LD1Onev8h_POST") 2, 0, 0, 11, 2, 32, 2,  0, 0}, // #100
  {DBGFIELD("LD1Twov1d_LD1Twov2s_LD1Twov4h_LD1Twov8b") 1, 0, 0, 12, 1,  6, 1,  0, 0}, // #101
  {DBGFIELD("LD1Twov1d_POST_LD1Twov2s_POST_LD1Twov4h_POST_LD1Twov8b_POST") 2, 0, 0, 11, 2, 32, 2,  0, 0}, // #102
  {DBGFIELD("LD1Twov16b_LD1Twov2d_LD1Twov4s_LD1Twov8h") 2, 0, 0, 33, 1, 34, 2,  0, 0}, // #103
  {DBGFIELD("LD1Twov16b_POST_LD1Twov2d_POST_LD1Twov4s_POST_LD1Twov8h_POST") 3, 0, 0, 36, 2, 32, 3,  0, 0}, // #104
  {DBGFIELD("LD1Threev1d_LD1Threev2s_LD1Threev4h_LD1Threev8b") 2, 0, 0, 33, 1, 34, 2,  0, 0}, // #105
  {DBGFIELD("LD1Threev1d_POST_LD1Threev2s_POST_LD1Threev4h_POST_LD1Threev8b_POST") 3, 0, 0, 36, 2, 32, 3,  0, 0}, // #106
  {DBGFIELD("LD1Threev16b_LD1Threev2d_LD1Threev4s_LD1Threev8h") 3, 0, 0, 38, 1, 36, 3,  0, 0}, // #107
  {DBGFIELD("LD1Threev16b_POST_LD1Threev2d_POST_LD1Threev4s_POST_LD1Threev8h_POST") 4, 0, 0, 39, 2, 32, 4,  0, 0}, // #108
  {DBGFIELD("LD1Fourv1d_LD1Fourv2s_LD1Fourv4h_LD1Fourv8b") 2, 0, 0, 33, 1, 34, 2,  0, 0}, // #109
  {DBGFIELD("LD1Fourv1d_POST_LD1Fourv2s_POST_LD1Fourv4h_POST_LD1Fourv8b_POST") 3, 0, 0, 36, 2, 32, 3,  0, 0}, // #110
  {DBGFIELD("LD1Fourv16b_LD1Fourv2d_LD1Fourv4s_LD1Fourv8h") 4, 0, 0, 41, 1, 34, 4,  0, 0}, // #111
  {DBGFIELD("LD1Fourv16b_POST_LD1Fourv2d_POST_LD1Fourv4s_POST_LD1Fourv8h_POST") 5, 0, 0, 42, 2, 32, 5,  0, 0}, // #112
  {DBGFIELD("LD1i16_LD1i32_LD1i8") 2, 0, 0, 12, 2, 20, 1, 12, 1}, // #113
  {DBGFIELD("LD1i16_POST_LD1i32_POST_LD1i8_POST") 3, 0, 0, 11, 3, 39, 2, 12, 1}, // #114
  {DBGFIELD("LD1i64")             2, 0, 0, 12, 2, 20, 1, 12, 1}, // #115
  {DBGFIELD("LD1i64_POST")        3, 0, 0, 11, 3, 39, 2, 12, 1}, // #116
  {DBGFIELD("LD1Rv16b_LD1Rv1d_LD1Rv2d_LD1Rv2s_LD1Rv4h_LD1Rv4s_LD1Rv8b_LD1Rv8h") 2, 0, 0, 12, 2, 20, 1,  0, 0}, // #117
  {DBGFIELD("LD1Rv16b_POST_LD1Rv1d_POST_LD1Rv2d_POST_LD1Rv2s_POST_LD1Rv4h_POST_LD1Rv4s_POST_LD1Rv8b_POST_LD1Rv8h_POST") 3, 0, 0, 11, 3, 39, 2,  0, 0}, // #118
  {DBGFIELD("LD2Twov2s_LD2Twov4h_LD2Twov8b") 3, 0, 0, 44, 2, 41, 2,  0, 0}, // #119
  {DBGFIELD("LD2Twov2s_POST_LD2Twov4h_POST_LD2Twov8b_POST") 4, 0, 0, 46, 3, 43, 3,  0, 0}, // #120
  {DBGFIELD("LD2Twov16b_LD2Twov2d_LD2Twov4s_LD2Twov8h") 4, 0, 0, 49, 2, 46, 2,  0, 0}, // #121
  {DBGFIELD("LD2Twov16b_POST_LD2Twov2d_POST_LD2Twov4s_POST_LD2Twov8h_POST") 5, 0, 0, 51, 3, 39, 3,  0, 0}, // #122
  {DBGFIELD("LD2i16_LD2i32_LD2i8") 3, 0, 0, 44, 2, 41, 2, 12, 1}, // #123
  {DBGFIELD("LD2i16_POST_LD2i32_POST_LD2i8_POST") 4, 0, 0, 46, 3, 43, 3, 12, 1}, // #124
  {DBGFIELD("LD2i64")             3, 0, 0, 44, 2, 41, 2, 12, 1}, // #125
  {DBGFIELD("LD2i64_POST")        4, 0, 0, 46, 3, 43, 3, 12, 1}, // #126
  {DBGFIELD("LD2Rv16b_LD2Rv1d_LD2Rv2d_LD2Rv2s_LD2Rv4h_LD2Rv4s_LD2Rv8b_LD2Rv8h") 3, 0, 0, 44, 2, 41, 2,  0, 0}, // #127
  {DBGFIELD("LD2Rv16b_POST_LD2Rv1d_POST_LD2Rv2d_POST_LD2Rv2s_POST_LD2Rv4h_POST_LD2Rv4s_POST_LD2Rv8b_POST_LD2Rv8h_POST") 4, 0, 0, 46, 3, 43, 3,  0, 0}, // #128
  {DBGFIELD("LD3Threev2s_LD3Threev4h_LD3Threev8b") 5, 0, 0, 54, 2, 48, 3,  0, 0}, // #129
  {DBGFIELD("LD3Threev2s_POST_LD3Threev4h_POST_LD3Threev8b_POST") 6, 0, 0, 56, 3, 39, 4,  0, 0}, // #130
  {DBGFIELD("LD3Threev16b_LD3Threev2d_LD3Threev4s_LD3Threev8h") 6, 0, 0, 59, 2, 46, 3,  0, 0}, // #131
  {DBGFIELD("LD3Threev16b_POST_LD3Threev2d_POST_LD3Threev4s_POST_LD3Threev8h_POST") 7, 0, 0, 61, 3, 51, 4,  0, 0}, // #132
  {DBGFIELD("LD3i16_LD3i32_LD3i8") 4, 0, 0, 64, 2, 55, 3, 12, 1}, // #133
  {DBGFIELD("LD3i16_POST_LD3i32_POST_LD3i8_POST") 5, 0, 0, 66, 3, 58, 4, 12, 1}, // #134
  {DBGFIELD("LD3i64")             5, 0, 0, 54, 2, 48, 3, 12, 1}, // #135
  {DBGFIELD("LD3i64_POST")        6, 0, 0, 56, 3, 39, 4, 12, 1}, // #136
  {DBGFIELD("LD3Rv16b_LD3Rv2s_LD3Rv4h_LD3Rv4s_LD3Rv8b_LD3Rv8h") 4, 0, 0, 64, 2, 55, 3,  0, 0}, // #137
  {DBGFIELD("LD3Rv16b_POST_LD3Rv2s_POST_LD3Rv4h_POST_LD3Rv4s_POST_LD3Rv8b_POST_LD3Rv8h_POST") 5, 0, 0, 66, 3, 58, 4,  0, 0}, // #138
  {DBGFIELD("LD3Rv1d_LD3Rv2d")    5, 0, 0, 54, 2, 48, 3,  0, 0}, // #139
  {DBGFIELD("LD3Rv2d_POST")       6, 0, 0, 56, 3, 39, 4,  0, 0}, // #140
  {DBGFIELD("LD4Fourv2s_LD4Fourv4h_LD4Fourv8b") 6, 0, 0, 69, 2, 54, 4,  0, 0}, // #141
  {DBGFIELD("LD4Fourv2s_POST_LD4Fourv4h_POST_LD4Fourv8b_POST") 7, 0, 0, 71, 3, 62, 5,  0, 0}, // #142
  {DBGFIELD("LD4Fourv16b_LD4Fourv2d_LD4Fourv4s_LD4Fourv8h") 12, 0, 0, 74, 2, 67, 4,  0, 0}, // #143
  {DBGFIELD("LD4Fourv16b_POST_LD4Fourv2d_POST_LD4Fourv4s_POST_LD4Fourv8h_POST") 13, 0, 0, 76, 3, 71, 5,  0, 0}, // #144
  {DBGFIELD("LD4i16_LD4i32_LD4i8") 5, 0, 0, 79, 2, 76, 4, 12, 1}, // #145
  {DBGFIELD("LD4i16_POST_LD4i32_POST_LD4i8_POST") 6, 0, 0, 81, 3, 80, 5, 12, 1}, // #146
  {DBGFIELD("LD4i64")             6, 0, 0, 69, 2, 54, 4, 12, 1}, // #147
  {DBGFIELD("LD4i64_POST")        6, 0, 0, 56, 3, 39, 4, 12, 1}, // #148
  {DBGFIELD("LD4Rv16b_LD4Rv2s_LD4Rv4h_LD4Rv4s_LD4Rv8b_LD4Rv8h") 5, 0, 0, 79, 2, 76, 4,  0, 0}, // #149
  {DBGFIELD("LD4Rv16b_POST_LD4Rv2s_POST_LD4Rv4h_POST_LD4Rv4s_POST_LD4Rv8b_POST_LD4Rv8h_POST") 6, 0, 0, 81, 3, 80, 5,  0, 0}, // #150
  {DBGFIELD("LD4Rv1d_LD4Rv2d")    6, 0, 0, 69, 2, 54, 4,  0, 0}, // #151
  {DBGFIELD("LD4Rv1d_POST_LD4Rv2d_POST") 7, 0, 0, 71, 3, 62, 5,  0, 0}, // #152
  {DBGFIELD("ST1Onev16b_ST1Onev1d_ST1Onev2d_ST1Onev2s_ST1Onev4h_ST1Onev4s_ST1Onev8b_ST1Onev8h") 1, 0, 0, 12, 1,  4, 1,  0, 0}, // #153
  {DBGFIELD("ST1Onev16b_POST_ST1Onev1d_POST_ST1Onev2d_POST_ST1Onev2s_POST_ST1Onev4h_POST_ST1Onev4s_POST_ST1Onev8b_POST_ST1Onev8h_POST") 2, 0, 0, 11, 2, 18, 2,  0, 0}, // #154
  {DBGFIELD("ST1Twov1d_ST1Twov2s_ST1Twov4h_ST1Twov8b") 2, 0, 0, 12, 2, 15, 1,  0, 0}, // #155
  {DBGFIELD("ST1Twov1d_POST_ST1Twov2s_POST_ST1Twov4h_POST_ST1Twov8b_POST") 3, 0, 0, 11, 3, 16, 2,  0, 0}, // #156
  {DBGFIELD("ST1Twov16b_ST1Twov2d_ST1Twov4s_ST1Twov8h") 2, 0, 0, 33, 1,  7, 2,  0, 0}, // #157
  {DBGFIELD("ST1Twov16b_POST_ST1Twov2d_POST_ST1Twov4s_POST_ST1Twov8h_POST") 3, 0, 0, 36, 2, 85, 3,  0, 0}, // #158
  {DBGFIELD("ST1Threev1d_ST1Threev2s_ST1Threev4h_ST1Threev8b") 3, 0, 0, 33, 2, 88, 2,  0, 0}, // #159
  {DBGFIELD("ST1Threev1d_POST_ST1Threev2s_POST_ST1Threev4h_POST_ST1Threev8b_POST") 4, 0, 0, 84, 3, 90, 3,  0, 0}, // #160
  {DBGFIELD("ST1Threev16b_ST1Threev2d_ST1Threev4s_ST1Threev8h") 3, 0, 0, 38, 1,  7, 3,  0, 0}, // #161
  {DBGFIELD("ST1Threev16b_POST_ST1Threev2d_POST_ST1Threev4s_POST_ST1Threev8h_POST") 4, 0, 0, 39, 2, 93, 4,  0, 0}, // #162
  {DBGFIELD("ST1Fourv1d_ST1Fourv2s_ST1Fourv4h_ST1Fourv8b") 4, 0, 0, 49, 2, 97, 2,  0, 0}, // #163
  {DBGFIELD("ST1Fourv1d_POST_ST1Fourv2s_POST_ST1Fourv4h_POST_ST1Fourv8b_POST") 5, 0, 0, 51, 3, 99, 3,  0, 0}, // #164
  {DBGFIELD("ST1Fourv16b_ST1Fourv2d_ST1Fourv4s_ST1Fourv8h") 4, 0, 0, 41, 1,  7, 4,  0, 0}, // #165
  {DBGFIELD("ST1Fourv16b_POST_ST1Fourv2d_POST_ST1Fourv4s_POST_ST1Fourv8h_POST") 5, 0, 0, 42, 2, 102, 5,  0, 0}, // #166
  {DBGFIELD("ST1i16_ST1i32_ST1i8") 2, 0, 0, 12, 2, 15, 1,  0, 0}, // #167
  {DBGFIELD("ST1i16_POST_ST1i32_POST_ST1i8_POST") 3, 0, 0, 11, 3, 16, 2,  0, 0}, // #168
  {DBGFIELD("ST1i64")             2, 0, 0, 12, 2, 15, 1,  0, 0}, // #169
  {DBGFIELD("ST1i64_POST")        3, 0, 0, 11, 3, 16, 2,  0, 0}, // #170
  {DBGFIELD("ST2Twov2s_ST2Twov4h_ST2Twov8b") 2, 0, 0, 12, 2, 15, 1,  0, 0}, // #171
  {DBGFIELD("ST2Twov2s_POST_ST2Twov4h_POST_ST2Twov8b_POST") 3, 0, 0, 11, 3, 16, 2,  0, 0}, // #172
  {DBGFIELD("ST2Twov16b_ST2Twov2d_ST2Twov4s_ST2Twov8h") 4, 0, 0, 49, 2, 97, 2,  0, 0}, // #173
  {DBGFIELD("ST2Twov16b_POST_ST2Twov2d_POST_ST2Twov4s_POST_ST2Twov8h_POST") 5, 0, 0, 51, 3, 99, 3,  0, 0}, // #174
  {DBGFIELD("ST2i16_ST2i32_ST2i8") 2, 0, 0, 12, 2, 15, 1,  0, 0}, // #175
  {DBGFIELD("ST2i16_POST_ST2i32_POST_ST2i8_POST") 3, 0, 0, 11, 3, 16, 2,  0, 0}, // #176
  {DBGFIELD("ST2i64")             2, 0, 0, 12, 2, 15, 1,  0, 0}, // #177
  {DBGFIELD("ST2i64_POST")        3, 0, 0, 11, 3, 16, 2,  0, 0}, // #178
  {DBGFIELD("ST3Threev2s_ST3Threev4h_ST3Threev8b") 4, 0, 0, 49, 2, 97, 2,  0, 0}, // #179
  {DBGFIELD("ST3Threev2s_POST_ST3Threev4h_POST_ST3Threev8b_POST") 5, 0, 0, 51, 3, 99, 3,  0, 0}, // #180
  {DBGFIELD("ST3Threev16b_ST3Threev2d_ST3Threev4s_ST3Threev8h") 6, 0, 0, 59, 2, 107, 3,  0, 0}, // #181
  {DBGFIELD("ST3Threev16b_POST_ST3Threev2d_POST_ST3Threev4s_POST_ST3Threev8h_POST") 7, 0, 0, 61, 3, 110, 4,  0, 0}, // #182
  {DBGFIELD("ST3i16_ST3i32_ST3i8") 2, 0, 0, 12, 2, 15, 1,  0, 0}, // #183
  {DBGFIELD("ST3i16_POST_ST3i32_POST_ST3i8_POST") 3, 0, 0, 11, 3, 16, 2,  0, 0}, // #184
  {DBGFIELD("ST3i64")             4, 0, 0, 49, 2, 97, 2,  0, 0}, // #185
  {DBGFIELD("ST3i64_POST")        5, 0, 0, 51, 3, 99, 3,  0, 0}, // #186
  {DBGFIELD("ST4Fourv2s_ST4Fourv4h_ST4Fourv8b") 6, 0, 0, 69, 2, 114, 2,  0, 0}, // #187
  {DBGFIELD("ST4Fourv2s_POST_ST4Fourv4h_POST_ST4Fourv8b_POST") 7, 0, 0, 71, 3, 116, 3,  0, 0}, // #188
  {DBGFIELD("ST4Fourv16b_ST4Fourv2d_ST4Fourv4s_ST4Fourv8h") 12, 0, 0, 74, 2, 119, 4,  0, 0}, // #189
  {DBGFIELD("ST4Fourv16b_POST_ST4Fourv2d_POST_ST4Fourv4s_POST_ST4Fourv8h_POST") 13, 0, 0, 76, 3, 116, 5,  0, 0}, // #190
  {DBGFIELD("ST4i16_ST4i32_ST4i8") 3, 0, 0, 44, 2, 14, 1,  0, 0}, // #191
  {DBGFIELD("ST4i16_POST_ST4i32_POST_ST4i8_POST") 4, 0, 0, 46, 3, 116, 2,  0, 0}, // #192
  {DBGFIELD("ST4i64")             4, 0, 0, 49, 2, 97, 2,  0, 0}, // #193
  {DBGFIELD("ST4i64_POST")        5, 0, 0, 51, 3, 99, 3,  0, 0}, // #194
  {DBGFIELD("(WriteIS_WriteLD)_ReadBaseRS") 2, 0, 0, 87, 3,  6, 1,  1, 1}, // #195
  {DBGFIELD("WriteLD_ReadDefault") 1, 0, 0, 12, 1,  4, 1,  0, 0}, // #196
  {DBGFIELD("WriteAdr_WriteST_ReadBaseRS") 2, 0, 0, 11, 2, 18, 2,  1, 1}, // #197
  {DBGFIELD("WriteAdr_WriteST_ReadDefault") 2, 0, 0, 11, 2, 18, 2,  0, 0}, // #198
  {DBGFIELD("(WriteIS_WriteST)_ReadBaseRS") 2, 0, 0, 87, 3,  6, 1,  1, 1}, // #199
  {DBGFIELD("WriteST_ReadDefault") 1, 0, 0, 12, 1,  4, 1,  0, 0}, // #200
  {DBGFIELD("WriteX")             1, 0, 0,  0, 0,  0, 1,  0, 0}, // #201
  {DBGFIELD("WriteImm")           1, 0, 0,  2, 1,  2, 1,  0, 0}, // #202
  {DBGFIELD("WriteI")             1, 0, 0,  2, 1,  2, 1,  0, 0}, // #203
  {DBGFIELD("WriteV")             1, 0, 0,  1, 1,  1, 1,  0, 0} // #204
}; // CycloneModelSchedClasses

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // CompleteModel
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  0); // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc CycloneModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("CyUnitB")         2, 4, 24}, // #1, Super=CyUnitI
  {DBGFIELD("CyUnitBR")        1, 1, -1}, // #2, Super=CyUnitB
  {DBGFIELD("CyUnitFloatDiv")  2, 0, -1}, // #3
  {DBGFIELD("CyUnitI")         4, 0, 48}, // #4
  {DBGFIELD("CyUnitID")        1, 1, 16}, // #5, Super=CyUnitB
  {DBGFIELD("CyUnitIM")        1, 2, 32}, // #6, Super=CyUnitBR
  {DBGFIELD("CyUnitIS")        2, 4, 24}, // #7, Super=CyUnitI
  {DBGFIELD("CyUnitIntDiv")    1, 0, -1}, // #8
  {DBGFIELD("CyUnitLS")        2, 0, 28}, // #9
  {DBGFIELD("CyUnitV")         3, 0, 48}, // #10
  {DBGFIELD("CyUnitVC")        1, 13, 16}, // #11, Super=CyUnitVM
  {DBGFIELD("CyUnitVD")        1, 10, 16}, // #12, Super=CyUnitV
  {DBGFIELD("CyUnitVM")        2, 10, 32}  // #13, Super=CyUnitV
};

static const llvm::MCSchedModel CycloneModel(
  6, // IssueWidth
  192, // MicroOpBufferSize
  4, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  1, // CompleteModel
  1, // Processor ID
  CycloneModelProcResources,
  CycloneModelSchedClasses,
  14,
  205,
  0); // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV ARM64ProcSchedKV[] = {
  { "arm64-generic", (const void *)&NoSchedModel },
  { "cyclone", (const void *)&CycloneModel }
};
#undef DBGFIELD
static inline void InitARM64MCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, ARM64FeatureKV, ARM64SubTypeKV, 
                      ARM64ProcSchedKV, ARM64WriteProcResTable, ARM64WriteLatencyTable, ARM64ReadAdvanceTable, 0, 0, 0, 2, 2);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::ARM64Subtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & ARM64::FeatureZCRegMove) != 0) HasZeroCycleRegMove = true;
  if ((Bits & ARM64::FeatureZCZeroing) != 0) HasZeroCycleZeroing = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct ARM64GenSubtargetInfo : public TargetSubtargetInfo {
  explicit ARM64GenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV ARM64FeatureKV[];
extern const llvm::SubtargetFeatureKV ARM64SubTypeKV[];
extern const llvm::SubtargetInfoKV ARM64ProcSchedKV[];
extern const llvm::MCWriteProcResEntry ARM64WriteProcResTable[];
extern const llvm::MCWriteLatencyEntry ARM64WriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry ARM64ReadAdvanceTable[];
ARM64GenSubtargetInfo::ARM64GenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, ARM64FeatureKV, ARM64SubTypeKV, 
                      ARM64ProcSchedKV, ARM64WriteProcResTable, ARM64WriteLatencyTable, ARM64ReadAdvanceTable, 
                      0, 0, 0, 2, 2);
}

unsigned ARM64GenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const ARM64InstrInfo *TII =
    static_cast<const ARM64InstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 24: // WriteLDIdx_ReadAdrBase
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isScaledAddr(MI)))
        return 195; // (WriteIS_WriteLD)_ReadBaseRS
      if ((true))
        return 196; // WriteLD_ReadDefault
    }
    break;
  case 36: // WriteAdr_WriteST_ReadAdrBase
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isScaledAddr(MI)))
        return 197; // WriteAdr_WriteST_ReadBaseRS
      if ((true))
        return 198; // WriteAdr_WriteST_ReadDefault
    }
    break;
  case 38: // WriteSTIdx_ReadAdrBase
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isScaledAddr(MI)))
        return 199; // (WriteIS_WriteST)_ReadBaseRS
      if ((true))
        return 200; // WriteST_ReadDefault
    }
    break;
  case 39: // MOVZWi_MOVZXi
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isGPRZero(MI)))
        return 201; // WriteX
      if ((true))
        return 202; // WriteImm
    }
    break;
  case 40: // ANDWri_ANDXri
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isGPRZero(MI)))
        return 201; // WriteX
      if ((true))
        return 202; // WriteImm
    }
    break;
  case 41: // COPY
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isGPRCopy(MI)))
        return 201; // WriteX
      if ((TII->isFPRCopy(MI)))
        return 201; // WriteX
      if ((true))
        return 203; // WriteI
    }
    break;
  case 42: // ORRXrr_ADDXrr
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isGPRCopy(MI)))
        return 201; // WriteX
      if ((TII->isFPRCopy(MI)))
        return 201; // WriteX
      if ((true))
        return 203; // WriteI
    }
    break;
  case 45: // ORRv16i8
    if (SchedModel->getProcessorID() == 1) { // CycloneModel
      if ((TII->isFPRCopy(MI)))
        return 201; // WriteX
      if ((true))
        return 204; // WriteV
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // ARM64GenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

