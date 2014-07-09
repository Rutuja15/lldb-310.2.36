/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Calling Convention Implementation Fragment                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static bool CC_ARM64_AAPCS(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_ARM64_DarwinPCS(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_ARM64_DarwinPCS_VarArg(unsigned ValNo, MVT ValVT,
                                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                                      ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_ARM64_AAPCS(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_ARM64_AAPCS(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::v2f32) {
    LocVT = MVT::v2i32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::v2f64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::f128) {
    LocVT = MVT::v2i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (ArgFlags.isSRet()) {
    if (LocVT == MVT::i64) {
      if (unsigned Reg = State.AllocateReg(ARM64::X8, ARM64::W8)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    if (CC_ARM64_Custom_i1i8i16_Reg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      ARM64::W0, ARM64::W1, ARM64::W2, ARM64::W3, ARM64::W4, ARM64::W5, ARM64::W6, ARM64::W7
    };
    static const uint16_t RegList2[] = {
      ARM64::X0, ARM64::X1, ARM64::X2, ARM64::X3, ARM64::X4, ARM64::X5, ARM64::X6, ARM64::X7
    };
    if (unsigned Reg = State.AllocateReg(RegList1, RegList2, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    if (ArgFlags.isSplit()) {
      static const uint16_t RegList3[] = {
        ARM64::X0, ARM64::X2, ARM64::X4, ARM64::X6
      };
      static const uint16_t RegList4[] = {
        ARM64::X0, ARM64::X1, ARM64::X3, ARM64::X5
      };
      if (unsigned Reg = State.AllocateReg(RegList3, RegList4, 4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i64) {
    if (ArgFlags.isSplit()) {
      unsigned Offset5 = State.AllocateStack(8, 16);
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset5, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    static const uint16_t RegList6[] = {
      ARM64::X0, ARM64::X1, ARM64::X2, ARM64::X3, ARM64::X4, ARM64::X5, ARM64::X6, ARM64::X7
    };
    static const uint16_t RegList7[] = {
      ARM64::W0, ARM64::W1, ARM64::W2, ARM64::W3, ARM64::W4, ARM64::W5, ARM64::W6, ARM64::W7
    };
    if (unsigned Reg = State.AllocateReg(RegList6, RegList7, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const uint16_t RegList8[] = {
      ARM64::S0, ARM64::S1, ARM64::S2, ARM64::S3, ARM64::S4, ARM64::S5, ARM64::S6, ARM64::S7
    };
    static const uint16_t RegList9[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList8, RegList9, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const uint16_t RegList10[] = {
      ARM64::D0, ARM64::D1, ARM64::D2, ARM64::D3, ARM64::D4, ARM64::D5, ARM64::D6, ARM64::D7
    };
    static const uint16_t RegList11[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList10, RegList11, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v1i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8 ||
      LocVT == MVT::v1f64 ||
      LocVT == MVT::v2f32) {
    static const uint16_t RegList12[] = {
      ARM64::D0, ARM64::D1, ARM64::D2, ARM64::D3, ARM64::D4, ARM64::D5, ARM64::D6, ARM64::D7
    };
    static const uint16_t RegList13[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList12, RegList13, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v2i64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const uint16_t RegList14[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList14, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    unsigned Offset15 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset15, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    unsigned Offset16 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset16, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v1f64 ||
      LocVT == MVT::v2f32 ||
      LocVT == MVT::v1i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    unsigned Offset17 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset17, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v2i64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    unsigned Offset18 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset18, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool CC_ARM64_DarwinPCS(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::v2f32) {
    LocVT = MVT::v2i32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::v2f64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::f128) {
    LocVT = MVT::v2i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (ArgFlags.isSRet()) {
    if (LocVT == MVT::i64) {
      if (unsigned Reg = State.AllocateReg(ARM64::X8, ARM64::W8)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    if (CC_ARM64_Custom_i1i8i16_Reg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      ARM64::W0, ARM64::W1, ARM64::W2, ARM64::W3, ARM64::W4, ARM64::W5, ARM64::W6, ARM64::W7
    };
    static const uint16_t RegList2[] = {
      ARM64::X0, ARM64::X1, ARM64::X2, ARM64::X3, ARM64::X4, ARM64::X5, ARM64::X6, ARM64::X7
    };
    if (unsigned Reg = State.AllocateReg(RegList1, RegList2, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    if (ArgFlags.isSplit()) {
      static const uint16_t RegList3[] = {
        ARM64::X0, ARM64::X1, ARM64::X2, ARM64::X3, ARM64::X4, ARM64::X5, ARM64::X6
      };
      static const uint16_t RegList4[] = {
        ARM64::W0, ARM64::W1, ARM64::W2, ARM64::W3, ARM64::W4, ARM64::W5, ARM64::W6
      };
      if (unsigned Reg = State.AllocateReg(RegList3, RegList4, 7)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i64) {
    if (ArgFlags.isSplit()) {
      unsigned Offset5 = State.AllocateStack(8, 16, ARM64::X7);
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset5, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    static const uint16_t RegList6[] = {
      ARM64::X0, ARM64::X1, ARM64::X2, ARM64::X3, ARM64::X4, ARM64::X5, ARM64::X6, ARM64::X7
    };
    static const uint16_t RegList7[] = {
      ARM64::W0, ARM64::W1, ARM64::W2, ARM64::W3, ARM64::W4, ARM64::W5, ARM64::W6, ARM64::W7
    };
    if (unsigned Reg = State.AllocateReg(RegList6, RegList7, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const uint16_t RegList8[] = {
      ARM64::S0, ARM64::S1, ARM64::S2, ARM64::S3, ARM64::S4, ARM64::S5, ARM64::S6, ARM64::S7
    };
    static const uint16_t RegList9[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList8, RegList9, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const uint16_t RegList10[] = {
      ARM64::D0, ARM64::D1, ARM64::D2, ARM64::D3, ARM64::D4, ARM64::D5, ARM64::D6, ARM64::D7
    };
    static const uint16_t RegList11[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList10, RegList11, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v1i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8 ||
      LocVT == MVT::v1f64 ||
      LocVT == MVT::v2f32) {
    static const uint16_t RegList12[] = {
      ARM64::D0, ARM64::D1, ARM64::D2, ARM64::D3, ARM64::D4, ARM64::D5, ARM64::D6, ARM64::D7
    };
    static const uint16_t RegList13[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList12, RegList13, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v2i64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const uint16_t RegList14[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList14, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    if (CC_ARM64_Custom_i1i8i16_Stack(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    unsigned Offset15 = State.AllocateStack(4, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset15, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v1f64 ||
      LocVT == MVT::v2f32 ||
      LocVT == MVT::v1i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    unsigned Offset16 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset16, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v2i64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    unsigned Offset17 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset17, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool CC_ARM64_DarwinPCS_VarArg(unsigned ValNo, MVT ValVT,
                                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::v2f32) {
    LocVT = MVT::v2i32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::v2f64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::f128) {
    LocVT = MVT::v2i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16 ||
      LocVT == MVT::i32) {
    LocVT = MVT::i64;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f32) {
    LocVT = MVT::f64;
    LocInfo = CCValAssign::FPExt;
  }

  if (LocVT == MVT::i64) {
    if (ArgFlags.isSplit()) {
      unsigned Offset1 = State.AllocateStack(8, 16);
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset1, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v1i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8 ||
      LocVT == MVT::v1f64 ||
      LocVT == MVT::v2f32) {
    unsigned Offset2 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v2i64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    unsigned Offset3 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset3, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool RetCC_ARM64_AAPCS(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::v2f32) {
    LocVT = MVT::v2i32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::v2f64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::f128) {
    LocVT = MVT::v2i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      ARM64::W0, ARM64::W1, ARM64::W2, ARM64::W3, ARM64::W4, ARM64::W5, ARM64::W6, ARM64::W7
    };
    static const uint16_t RegList2[] = {
      ARM64::X0, ARM64::X1, ARM64::X2, ARM64::X3, ARM64::X4, ARM64::X5, ARM64::X6, ARM64::X7
    };
    if (unsigned Reg = State.AllocateReg(RegList1, RegList2, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    static const uint16_t RegList3[] = {
      ARM64::X0, ARM64::X1, ARM64::X2, ARM64::X3, ARM64::X4, ARM64::X5, ARM64::X6, ARM64::X7
    };
    static const uint16_t RegList4[] = {
      ARM64::W0, ARM64::W1, ARM64::W2, ARM64::W3, ARM64::W4, ARM64::W5, ARM64::W6, ARM64::W7
    };
    if (unsigned Reg = State.AllocateReg(RegList3, RegList4, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const uint16_t RegList5[] = {
      ARM64::S0, ARM64::S1, ARM64::S2, ARM64::S3, ARM64::S4, ARM64::S5, ARM64::S6, ARM64::S7
    };
    static const uint16_t RegList6[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList5, RegList6, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const uint16_t RegList7[] = {
      ARM64::D0, ARM64::D1, ARM64::D2, ARM64::D3, ARM64::D4, ARM64::D5, ARM64::D6, ARM64::D7
    };
    static const uint16_t RegList8[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList7, RegList8, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v1i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8 ||
      LocVT == MVT::v1f64 ||
      LocVT == MVT::v2f32) {
    static const uint16_t RegList9[] = {
      ARM64::D0, ARM64::D1, ARM64::D2, ARM64::D3, ARM64::D4, ARM64::D5, ARM64::D6, ARM64::D7
    };
    static const uint16_t RegList10[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList9, RegList10, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v2i64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const uint16_t RegList11[] = {
      ARM64::Q0, ARM64::Q1, ARM64::Q2, ARM64::Q3, ARM64::Q4, ARM64::Q5, ARM64::Q6, ARM64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList11, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}
