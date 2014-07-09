/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*"Fast" Instruction Selector for the ARM64 target                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


// FastEmit Immediate Predicate functions.
static bool Predicate_imm0_31(int64_t Imm) {

  return ((uint32_t)Imm) < 32;

}
static bool Predicate_imm0_63(int64_t Imm) {

  return ((uint64_t)Imm) < 64;

}
static bool Predicate_VectorIndexD(int64_t Imm) {

  return ((uint64_t)Imm) < 2;

}
static bool Predicate_VectorIndexS(int64_t Imm) {

  return ((uint64_t)Imm) < 4;

}
static bool Predicate_VectorIndexH(int64_t Imm) {

  return ((uint64_t)Imm) < 8;

}
static bool Predicate_VectorIndexB(int64_t Imm) {

  return ((uint64_t)Imm) < 16;

}
static bool Predicate_imm0_255(int64_t Imm) {

  return ((uint32_t)Imm) < 256;

}
static bool Predicate_vecshiftL64(int64_t Imm) {

  return (((uint32_t)Imm) < 64);

}
static bool Predicate_vecshiftR64(int64_t Imm) {

  return (((uint32_t)Imm) > 0) && (((uint32_t)Imm) < 65);

}
static bool Predicate_vecshiftL8(int64_t Imm) {

  return (((uint32_t)Imm) < 8);

}
static bool Predicate_vecshiftL16(int64_t Imm) {

  return (((uint32_t)Imm) < 16);

}
static bool Predicate_vecshiftL32(int64_t Imm) {

  return (((uint32_t)Imm) < 32);

}
static bool Predicate_vecshiftR8(int64_t Imm) {

  return (((uint32_t)Imm) > 0) && (((uint32_t)Imm) < 9);

}
static bool Predicate_vecshiftR16(int64_t Imm) {

  return (((uint32_t)Imm) > 0) && (((uint32_t)Imm) < 17);

}
static bool Predicate_vecshiftR32(int64_t Imm) {

  return (((uint32_t)Imm) > 0) && (((uint32_t)Imm) < 33);

}


// FastEmit functions for ARM64ISD::CALL.

unsigned FastEmit_ARM64ISD_CALL_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(ARM64::BLR, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CALL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ARM64ISD_CALL_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMEQz.

unsigned FastEmit_ARM64ISD_CMEQz_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::CMEQv8i8rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQz_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::CMEQv16i8rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQz_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::CMEQv4i16rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQz_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::CMEQv8i16rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQz_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::CMEQv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQz_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::CMEQv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQz_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::CMEQv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMEQz_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMEQz_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMEQz_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMEQz_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMEQz_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMEQz_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMEQz_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMGEz.

unsigned FastEmit_ARM64ISD_CMGEz_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::CMGEv8i8rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGEz_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::CMGEv16i8rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGEz_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::CMGEv4i16rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGEz_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::CMGEv8i16rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGEz_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::CMGEv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGEz_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::CMGEv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGEz_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::CMGEv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGEz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMGEz_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMGEz_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMGEz_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMGEz_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMGEz_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMGEz_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMGEz_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMGTz.

unsigned FastEmit_ARM64ISD_CMGTz_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::CMGTv8i8rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGTz_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::CMGTv16i8rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGTz_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::CMGTv4i16rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGTz_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::CMGTv8i16rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGTz_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::CMGTv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGTz_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::CMGTv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGTz_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::CMGTv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMGTz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMGTz_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMGTz_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMGTz_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMGTz_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMGTz_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMGTz_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMGTz_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMLEz.

unsigned FastEmit_ARM64ISD_CMLEz_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::CMLEv8i8rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLEz_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::CMLEv16i8rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLEz_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::CMLEv4i16rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLEz_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::CMLEv8i16rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLEz_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::CMLEv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLEz_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::CMLEv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLEz_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::CMLEv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLEz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMLEz_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMLEz_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMLEz_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMLEz_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMLEz_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMLEz_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMLEz_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMLTz.

unsigned FastEmit_ARM64ISD_CMLTz_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::CMLTv8i8rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLTz_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::CMLTv16i8rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLTz_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::CMLTv4i16rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLTz_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::CMLTv8i16rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLTz_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::CMLTv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLTz_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::CMLTv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLTz_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::CMLTv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_CMLTz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMLTz_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMLTz_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMLTz_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMLTz_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMLTz_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMLTz_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMLTz_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::DUP.

unsigned FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v8i8_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::DUPv8i8gpr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v16i8_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::DUPv16i8gpr, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v4i16_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::DUPv4i16gpr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v8i16_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::DUPv8i16gpr, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v2i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::DUPv2i32gpr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::DUPv4i32gpr, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_DUP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v8i8_r(Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v16i8_r(Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v4i16_r(Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v8i16_r(Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v2i32_r(Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_DUP_MVT_i32_MVT_v4i32_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_DUP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::DUPv2i64gpr, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_DUP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_DUP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ARM64ISD_DUP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMEQz.

unsigned FastEmit_ARM64ISD_FCMEQz_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMEQv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMEQz_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMEQv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMEQz_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::FCMEQv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMEQz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMEQz_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMEQz_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMEQz_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMGEz.

unsigned FastEmit_ARM64ISD_FCMGEz_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMGEv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGEz_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMGEv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGEz_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::FCMGEv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGEz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMGEz_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMGEz_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMGEz_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMGTz.

unsigned FastEmit_ARM64ISD_FCMGTz_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMGTv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGTz_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMGTv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGTz_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::FCMGTv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGTz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMGTz_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMGTz_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMGTz_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMLEz.

unsigned FastEmit_ARM64ISD_FCMLEz_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMLEv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMLEz_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMLEv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMLEz_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::FCMLEv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMLEz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMLEz_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMLEz_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMLEz_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMLTz.

unsigned FastEmit_ARM64ISD_FCMLTz_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMLTv2i32rz, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMLTz_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::FCMLTv4i32rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMLTz_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::FCMLTv2i64rz, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_FCMLTz_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMLTz_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMLTz_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMLTz_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::NEG.

unsigned FastEmit_ARM64ISD_NEG_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::NEGv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NEG_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::NEGv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NEG_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::NEGv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NEG_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::NEGv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NEG_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::NEGv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NEG_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::NEGv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NEG_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::NEGv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NEG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_NEG_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_NEG_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_NEG_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_NEG_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_NEG_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_NEG_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_NEG_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::NOT.

unsigned FastEmit_ARM64ISD_NOT_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::NOTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NOT_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::NOTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NOT_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::NOTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NOT_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::NOTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NOT_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::NOTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NOT_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::NOTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NOT_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::NOTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_NOT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_NOT_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_NOT_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_NOT_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_NOT_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_NOT_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_NOT_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_NOT_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::REV16.

unsigned FastEmit_ARM64ISD_REV16_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::REV16v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV16_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::REV16v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV16_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_REV16_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_REV16_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::REV32.

unsigned FastEmit_ARM64ISD_REV32_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::REV32v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV32_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::REV32v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV32_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::REV32v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV32_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::REV32v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV32_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_REV32_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_REV32_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_REV32_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_REV32_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::REV64.

unsigned FastEmit_ARM64ISD_REV64_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::REV64v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::REV64v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::REV64v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::REV64v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::REV64v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::REV64v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::REV64v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::REV64v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_REV64_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_REV64_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_REV64_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_REV64_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_REV64_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_REV64_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_REV64_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ARM64ISD_REV64_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_REV64_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::SITOF.

unsigned FastEmit_ARM64ISD_SITOF_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::SCVTFv1i32, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_SITOF_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::SCVTFv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_SITOF_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARM64ISD_SITOF_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ARM64ISD_SITOF_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::TC_RETURN.

unsigned FastEmit_ARM64ISD_TC_RETURN_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(ARM64::TCRETURNri, &ARM64::tcGPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_TC_RETURN_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ARM64ISD_TC_RETURN_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::UITOF.

unsigned FastEmit_ARM64ISD_UITOF_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::UCVTFv1i32, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_UITOF_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::UCVTFv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARM64ISD_UITOF_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARM64ISD_UITOF_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ARM64ISD_UITOF_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BITCAST.

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_v8i8_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_v4i16_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_v2i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_v1i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_v2f32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_v1f64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ISD_BITCAST_MVT_i64_MVT_v8i8_r(Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ISD_BITCAST_MVT_i64_MVT_v4i16_r(Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_BITCAST_MVT_i64_MVT_v2i32_r(Op0, Op0IsKill);
  case MVT::v1i64: return FastEmit_ISD_BITCAST_MVT_i64_MVT_v1i64_r(Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_BITCAST_MVT_i64_MVT_v2f32_r(Op0, Op0IsKill);
  case MVT::v1f64: return FastEmit_ISD_BITCAST_MVT_i64_MVT_v1f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_BITCAST_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::FMOVDXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::FMOVDXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::FMOVDXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_v1i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::FMOVDXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::FMOVDXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_MVT_v1f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::FMOVDXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BITCAST_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_BITCAST_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i8: return FastEmit_ISD_BITCAST_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ISD_BITCAST_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_BITCAST_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v1i64: return FastEmit_ISD_BITCAST_MVT_v1i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_BITCAST_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v1f64: return FastEmit_ISD_BITCAST_MVT_v1f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BRIND.

unsigned FastEmit_ISD_BRIND_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(ARM64::BR, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BRIND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_BRIND_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BSWAP.

unsigned FastEmit_ISD_BSWAP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(ARM64::REVWr, &ARM64::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BSWAP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::REVXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BSWAP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BSWAP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_BSWAP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTLZ.

unsigned FastEmit_ISD_CTLZ_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(ARM64::CLZWr, &ARM64::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(ARM64::CLZXr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::CLZv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::CLZv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::CLZv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM64::CLZv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::CLZv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::CLZv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_CTLZ_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTLZ_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i8: return FastEmit_ISD_CTLZ_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ISD_CTLZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ISD_CTLZ_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ISD_CTLZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_CTLZ_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_CTLZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTPOP.

unsigned FastEmit_ISD_CTPOP_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::CNTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTPOP_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_r(ARM64::CNTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTPOP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ISD_CTPOP_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ISD_CTPOP_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FABS.

unsigned FastEmit_ISD_FABS_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::FABSSr, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::FABSDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FABSv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FABSv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FABSv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FABS_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FABS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FABS_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FABS_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FABS_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FCEIL.

unsigned FastEmit_ISD_FCEIL_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTPv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FCEIL_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTPv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FCEIL_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTPv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FCEIL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ISD_FCEIL_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FCEIL_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FCEIL_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FFLOOR.

unsigned FastEmit_ISD_FFLOOR_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTMv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FFLOOR_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTMv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FFLOOR_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTMv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FFLOOR_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ISD_FFLOOR_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FFLOOR_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FFLOOR_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FNEARBYINT.

unsigned FastEmit_ISD_FNEARBYINT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTISr, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEARBYINT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTIDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEARBYINT_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTIv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEARBYINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTIv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEARBYINT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTIv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEARBYINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FNEARBYINT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FNEARBYINT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FNEARBYINT_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FNEARBYINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FNEARBYINT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FNEG.

unsigned FastEmit_ISD_FNEG_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::FNEGSr, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::FNEGDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FNEGv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FNEGv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FNEGv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FNEG_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FNEG_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FNEG_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FNEG_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FNEG_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_EXTEND.

unsigned FastEmit_ISD_FP_EXTEND_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::FCVTDSr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_EXTEND_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FCVTLv2i32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FP_EXTEND_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FP_EXTEND_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_ROUND.

unsigned FastEmit_ISD_FP_ROUND_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::FCVTSDr, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_ROUND_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FCVTNv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_ROUND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_ISD_FP_ROUND_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FP_ROUND_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_SINT.

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZSUWSr, &ARM64::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZSUXSr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZSUWDr, &ARM64::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZSUXDr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::FCVTZSv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::FCVTZSv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::FCVTZSv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_SINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FP_TO_SINT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FP_TO_SINT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FP_TO_SINT_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FP_TO_SINT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_UINT.

unsigned FastEmit_ISD_FP_TO_UINT_MVT_f32_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZUUWSr, &ARM64::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_f32_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZUUXSr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_FP_TO_UINT_MVT_f32_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_FP_TO_UINT_MVT_f32_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_f64_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZUUWDr, &ARM64::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_f64_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FCVTZUUXDr, &ARM64::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_FP_TO_UINT_MVT_f64_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_FP_TO_UINT_MVT_f64_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::FCVTZUv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM64::FCVTZUv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM64::FCVTZUv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_TO_UINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FP_TO_UINT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FP_TO_UINT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FP_TO_UINT_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FP_TO_UINT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FRINT.

unsigned FastEmit_ISD_FRINT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTXSr, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FRINT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FRINT_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTXv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FRINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTXv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FRINT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTXv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FRINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FRINT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FRINT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FRINT_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FRINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FRINT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSQRT.

unsigned FastEmit_ISD_FSQRT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::FSQRTSr, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::FSQRTDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FSQRTv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FSQRTv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FSQRTv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSQRT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FSQRT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FSQRT_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSQRT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FSQRT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FTRUNC.

unsigned FastEmit_ISD_FTRUNC_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTZSr, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FTRUNC_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTZDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FTRUNC_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTZv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FTRUNC_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::FRINTZv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FTRUNC_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::FRINTZv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FTRUNC_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FTRUNC_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FTRUNC_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FTRUNC_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FTRUNC_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FTRUNC_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SCALAR_TO_VECTOR.

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_MVT_v1i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_MVT_v1f64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::FMOVXDr, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v1i64: return FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_MVT_v1i64_r(Op0, Op0IsKill);
  case MVT::v1f64: return FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_MVT_v1f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SINT_TO_FP.

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::SCVTFUWSri, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::SCVTFUWDri, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::SCVTFUXSri, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::SCVTFUXDri, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::SCVTFv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::SCVTFv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::SCVTFv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SINT_TO_FP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_SINT_TO_FP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_SINT_TO_FP_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_SINT_TO_FP_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::TRUNCATE.

unsigned FastEmit_ISD_TRUNCATE_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_extractsubreg(RetVT, Op0, Op0IsKill, ARM64::sub_32);
}

unsigned FastEmit_ISD_TRUNCATE_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_r(ARM64::XTNv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_TRUNCATE_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_r(ARM64::XTNv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_TRUNCATE_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_r(ARM64::XTNv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_TRUNCATE_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_TRUNCATE_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ISD_TRUNCATE_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_TRUNCATE_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_TRUNCATE_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UINT_TO_FP.

unsigned FastEmit_ISD_UINT_TO_FP_MVT_i32_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::UCVTFUWSri, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_i32_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::UCVTFUWDri, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_UINT_TO_FP_MVT_i32_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_UINT_TO_FP_MVT_i32_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_i64_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::UCVTFUXSri, &ARM64::FPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_i64_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(ARM64::UCVTFUXDri, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_UINT_TO_FP_MVT_i64_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_UINT_TO_FP_MVT_i64_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM64::UCVTFv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM64::UCVTFv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_r(ARM64::UCVTFv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_UINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_UINT_TO_FP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_UINT_TO_FP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_UINT_TO_FP_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_UINT_TO_FP_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_r(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill) {
  switch (Opcode) {
  case ARM64ISD::CALL: return FastEmit_ARM64ISD_CALL_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::CMEQz: return FastEmit_ARM64ISD_CMEQz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::CMGEz: return FastEmit_ARM64ISD_CMGEz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::CMGTz: return FastEmit_ARM64ISD_CMGTz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::CMLEz: return FastEmit_ARM64ISD_CMLEz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::CMLTz: return FastEmit_ARM64ISD_CMLTz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::DUP: return FastEmit_ARM64ISD_DUP_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::FCMEQz: return FastEmit_ARM64ISD_FCMEQz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::FCMGEz: return FastEmit_ARM64ISD_FCMGEz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::FCMGTz: return FastEmit_ARM64ISD_FCMGTz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::FCMLEz: return FastEmit_ARM64ISD_FCMLEz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::FCMLTz: return FastEmit_ARM64ISD_FCMLTz_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::NEG: return FastEmit_ARM64ISD_NEG_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::NOT: return FastEmit_ARM64ISD_NOT_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::REV16: return FastEmit_ARM64ISD_REV16_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::REV32: return FastEmit_ARM64ISD_REV32_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::REV64: return FastEmit_ARM64ISD_REV64_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::SITOF: return FastEmit_ARM64ISD_SITOF_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::TC_RETURN: return FastEmit_ARM64ISD_TC_RETURN_r(VT, RetVT, Op0, Op0IsKill);
  case ARM64ISD::UITOF: return FastEmit_ARM64ISD_UITOF_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BITCAST: return FastEmit_ISD_BITCAST_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BRIND: return FastEmit_ISD_BRIND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BSWAP: return FastEmit_ISD_BSWAP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTLZ: return FastEmit_ISD_CTLZ_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTPOP: return FastEmit_ISD_CTPOP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FABS: return FastEmit_ISD_FABS_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FCEIL: return FastEmit_ISD_FCEIL_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FFLOOR: return FastEmit_ISD_FFLOOR_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FNEARBYINT: return FastEmit_ISD_FNEARBYINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FNEG: return FastEmit_ISD_FNEG_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_EXTEND: return FastEmit_ISD_FP_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_ROUND: return FastEmit_ISD_FP_ROUND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_SINT: return FastEmit_ISD_FP_TO_SINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_UINT: return FastEmit_ISD_FP_TO_UINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FRINT: return FastEmit_ISD_FRINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FSQRT: return FastEmit_ISD_FSQRT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FTRUNC: return FastEmit_ISD_FTRUNC_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SCALAR_TO_VECTOR: return FastEmit_ISD_SCALAR_TO_VECTOR_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SINT_TO_FP: return FastEmit_ISD_SINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::TRUNCATE: return FastEmit_ISD_TRUNCATE_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::UINT_TO_FP: return FastEmit_ISD_UINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMEQ.

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMEQv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMEQ_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMEQ_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMEQ_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMEQ_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMEQ_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMEQ_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMEQ_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ARM64ISD_CMEQ_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMEQ_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMGE.

unsigned FastEmit_ARM64ISD_CMGE_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMGEv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGE_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMGE_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMGE_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMGE_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMGE_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMGE_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMGE_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ARM64ISD_CMGE_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMGE_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMGT.

unsigned FastEmit_ARM64ISD_CMGT_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMGTv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMGT_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMGT_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMGT_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMGT_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMGT_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMGT_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMGT_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ARM64ISD_CMGT_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMGT_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMHI.

unsigned FastEmit_ARM64ISD_CMHI_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMHIv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHI_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMHI_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMHI_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMHI_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMHI_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMHI_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMHI_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ARM64ISD_CMHI_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMHI_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::CMHS.

unsigned FastEmit_ARM64ISD_CMHS_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::CMHSv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_CMHS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_CMHS_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_CMHS_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_CMHS_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_CMHS_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_CMHS_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_CMHS_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ARM64ISD_CMHS_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_CMHS_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMEQ.

unsigned FastEmit_ARM64ISD_FCMEQ_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::FCMEQv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMEQ_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::FCMEQv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMEQ_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::FCMEQv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMEQ_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMEQ_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMEQ_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMEQ_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMGE.

unsigned FastEmit_ARM64ISD_FCMGE_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::FCMGEv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGE_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::FCMGEv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGE_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::FCMGEv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGE_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMGE_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMGE_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMGE_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMGT.

unsigned FastEmit_ARM64ISD_FCMGT_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::FCMGTv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGT_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::FCMGTv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGT_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::FCMGTv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMGT_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FCMGT_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_FCMGT_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_FCMGT_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FCMP.

unsigned FastEmit_ARM64ISD_FCMP_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_rr(ARM64::FCMPSrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMP_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_rr(ARM64::FCMPDrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FCMP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARM64ISD_FCMP_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ARM64ISD_FCMP_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FMAX.

unsigned FastEmit_ARM64ISD_FMAX_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(ARM64::FMAXSrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FMAX_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(ARM64::FMAXDrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FMAX_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARM64ISD_FMAX_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ARM64ISD_FMAX_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FMIN.

unsigned FastEmit_ARM64ISD_FMIN_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(ARM64::FMINSrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FMIN_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(ARM64::FMINDrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_FMIN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARM64ISD_FMIN_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ARM64ISD_FMIN_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::TRN1.

unsigned FastEmit_ARM64ISD_TRN1_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::TRN1v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN1_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_TRN1_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_TRN1_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_TRN1_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_TRN1_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_TRN1_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_TRN1_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_TRN1_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARM64ISD_TRN1_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_TRN1_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_TRN1_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::TRN2.

unsigned FastEmit_ARM64ISD_TRN2_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::TRN2v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_TRN2_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_TRN2_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_TRN2_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_TRN2_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_TRN2_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_TRN2_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_TRN2_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_TRN2_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARM64ISD_TRN2_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_TRN2_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_TRN2_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::UZP1.

unsigned FastEmit_ARM64ISD_UZP1_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::UZP1v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP1_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_UZP1_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_UZP1_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_UZP1_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_UZP1_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_UZP1_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_UZP1_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_UZP1_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARM64ISD_UZP1_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_UZP1_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_UZP1_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::UZP2.

unsigned FastEmit_ARM64ISD_UZP2_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::UZP2v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_UZP2_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_UZP2_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_UZP2_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_UZP2_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_UZP2_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_UZP2_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_UZP2_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_UZP2_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARM64ISD_UZP2_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_UZP2_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_UZP2_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::ZIP1.

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP1v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP1_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_ZIP1_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_ZIP1_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_ZIP1_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_ZIP1_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_ZIP1_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_ZIP1_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_ZIP1_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARM64ISD_ZIP1_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_ZIP1_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_ZIP1_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::ZIP2.

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::ZIP2v2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ARM64ISD_ZIP2_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_ZIP2_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_ZIP2_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_ZIP2_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_ZIP2_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_ZIP2_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_ZIP2_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_ZIP2_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARM64ISD_ZIP2_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARM64ISD_ZIP2_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ARM64ISD_ZIP2_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::ADDWrr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::ADDXrr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::ADDv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_ADD_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_ADD_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_ADD_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_ADD_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_ADD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_ADD_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_ADD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ISD_ADD_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_ADD_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::ANDWrr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::ANDXrr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::ANDv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_AND_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_AND_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_AND_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_AND_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_AND_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_AND_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_AND_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ISD_AND_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_AND_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FADD.

unsigned FastEmit_ISD_FADD_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(ARM64::FADDSrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(ARM64::FADDDrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::FADDv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::FADDv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::FADDv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FADD_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FADD_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ISD_FADD_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FADD_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FADD_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FDIV.

unsigned FastEmit_ISD_FDIV_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(ARM64::FDIVSrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FDIV_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(ARM64::FDIVDrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FDIV_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::FDIVv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FDIV_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::FDIVv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FDIV_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::FDIVv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FDIV_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FDIV_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ISD_FDIV_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FDIV_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FDIV_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FMUL.

unsigned FastEmit_ISD_FMUL_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(ARM64::FMULSrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(ARM64::FMULDrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::FMULv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::FMULv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::FMULv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FMUL_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FMUL_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ISD_FMUL_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FMUL_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FMUL_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSUB.

unsigned FastEmit_ISD_FSUB_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(ARM64::FSUBSrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(ARM64::FSUBDrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rr(ARM64::FSUBv2f32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rr(ARM64::FSUBv4f32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rr(ARM64::FSUBv2f64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSUB_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FSUB_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ISD_FSUB_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSUB_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FSUB_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::MULv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::MULv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::MULv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::MULv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::MULv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::MULv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ISD_MUL_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_MUL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_MUL_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_MUL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_MUL_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_MUL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MULHS.

unsigned FastEmit_ISD_MULHS_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::SMULHrr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MULHS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_MULHS_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MULHU.

unsigned FastEmit_ISD_MULHU_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::UMULHrr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MULHU_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_MULHU_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::ORRWrr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::ORRXrr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::ORRv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_OR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_OR_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_OR_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_OR_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_OR_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_OR_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_OR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ISD_OR_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_OR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::RORVWr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ROTR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::RORVXr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ROTR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ROTR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_ROTR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SDIV.

unsigned FastEmit_ISD_SDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::SDIVWr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SDIV_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::SDIVXr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SDIV_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::LSLVWr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SHL_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::LSLVXr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SHL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SHL_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::ASRVWr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SRA_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::ASRVXr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SRA_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRA_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SRA_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::LSRVWr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SRL_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::LSRVXr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SRL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SRL_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::SUBSWrr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::SUBSXrr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv1i64, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::SUBv2i64, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SUB_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_SUB_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SUB_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_SUB_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SUB_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_SUB_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SUB_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ISD_SUB_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SUB_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UDIV.

unsigned FastEmit_ISD_UDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::UDIVWr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_UDIV_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::UDIVXr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_UDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_UDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_UDIV_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(ARM64::EORWrr, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(ARM64::EORXrr, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rr(ARM64::EORv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rr(ARM64::EORv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rr(ARM64::EORv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rr(ARM64::EORv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rr(ARM64::EORv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rr(ARM64::EORv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rr(ARM64::EORv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rr(ARM64::EORv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_XOR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_XOR_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_XOR_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_XOR_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_XOR_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_XOR_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_XOR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ISD_XOR_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_XOR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (Opcode) {
  case ARM64ISD::CMEQ: return FastEmit_ARM64ISD_CMEQ_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::CMGE: return FastEmit_ARM64ISD_CMGE_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::CMGT: return FastEmit_ARM64ISD_CMGT_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::CMHI: return FastEmit_ARM64ISD_CMHI_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::CMHS: return FastEmit_ARM64ISD_CMHS_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::FCMEQ: return FastEmit_ARM64ISD_FCMEQ_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::FCMGE: return FastEmit_ARM64ISD_FCMGE_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::FCMGT: return FastEmit_ARM64ISD_FCMGT_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::FCMP: return FastEmit_ARM64ISD_FCMP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::FMAX: return FastEmit_ARM64ISD_FMAX_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::FMIN: return FastEmit_ARM64ISD_FMIN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::TRN1: return FastEmit_ARM64ISD_TRN1_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::TRN2: return FastEmit_ARM64ISD_TRN2_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::UZP1: return FastEmit_ARM64ISD_UZP1_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::UZP2: return FastEmit_ARM64ISD_UZP2_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::ZIP1: return FastEmit_ARM64ISD_ZIP1_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARM64ISD::ZIP2: return FastEmit_ARM64ISD_ZIP2_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ADD: return FastEmit_ISD_ADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::AND: return FastEmit_ISD_AND_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FADD: return FastEmit_ISD_FADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FDIV: return FastEmit_ISD_FDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FMUL: return FastEmit_ISD_FMUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FSUB: return FastEmit_ISD_FSUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MUL: return FastEmit_ISD_MUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MULHS: return FastEmit_ISD_MULHS_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MULHU: return FastEmit_ISD_MULHU_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::OR: return FastEmit_ISD_OR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ROTR: return FastEmit_ISD_ROTR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SDIV: return FastEmit_ISD_SDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SHL: return FastEmit_ISD_SHL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRA: return FastEmit_ISD_SRA_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRL: return FastEmit_ISD_SRL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUB: return FastEmit_ISD_SUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::UDIV: return FastEmit_ISD_UDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::XOR: return FastEmit_ISD_XOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::BIT.

unsigned FastEmit_ARM64ISD_BIT_MVT_v8i8_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_MVT_v16i8_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_MVT_v4i16_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_MVT_v8i16_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_MVT_v2i32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_MVT_v4i32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_MVT_v1i64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_MVT_v2i64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rrr(ARM64::BITv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ARM64ISD_BIT_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_BIT_MVT_v8i8_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v16i8: return FastEmit_ARM64ISD_BIT_MVT_v16i8_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4i16: return FastEmit_ARM64ISD_BIT_MVT_v4i16_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8i16: return FastEmit_ARM64ISD_BIT_MVT_v8i16_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2i32: return FastEmit_ARM64ISD_BIT_MVT_v2i32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4i32: return FastEmit_ARM64ISD_BIT_MVT_v4i32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v1i64: return FastEmit_ARM64ISD_BIT_MVT_v1i64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2i64: return FastEmit_ARM64ISD_BIT_MVT_v2i64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FMA.

unsigned FastEmit_ISD_FMA_MVT_f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rrr(ARM64::FMADDSrrr, &ARM64::FPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ISD_FMA_MVT_f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rrr(ARM64::FMADDDrrr, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ISD_FMA_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FMA_MVT_f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::f64: return FastEmit_ISD_FMA_MVT_f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rrr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (Opcode) {
  case ARM64ISD::BIT: return FastEmit_ARM64ISD_BIT_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case ISD::FMA: return FastEmit_ISD_FMA_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::EXT.

unsigned FastEmit_ARM64ISD_EXT_MVT_v8i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v16i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v4i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v8i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v2i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v4i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v2i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v2f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv8i8, &ARM64::FPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v4f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_MVT_v2f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_rri(ARM64::EXTv16i8, &ARM64::FPR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXT_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_EXT_MVT_v8i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v16i8: return FastEmit_ARM64ISD_EXT_MVT_v16i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i16: return FastEmit_ARM64ISD_EXT_MVT_v4i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8i16: return FastEmit_ARM64ISD_EXT_MVT_v8i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i32: return FastEmit_ARM64ISD_EXT_MVT_v2i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i32: return FastEmit_ARM64ISD_EXT_MVT_v4i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i64: return FastEmit_ARM64ISD_EXT_MVT_v2i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2f32: return FastEmit_ARM64ISD_EXT_MVT_v2f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f32: return FastEmit_ARM64ISD_EXT_MVT_v4f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2f64: return FastEmit_ARM64ISD_EXT_MVT_v2f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (VT == MVT::i32 && Predicate_imm0_31(imm2))
    if (unsigned Reg = FastEmit_rri_Predicate_imm0_31(VT, RetVT, Opcode, Op0, Op0IsKill, Op1, Op1IsKill, imm2))
      return Reg;

  if (VT == MVT::i64 && Predicate_imm0_63(imm2))
    if (unsigned Reg = FastEmit_rri_Predicate_imm0_63(VT, RetVT, Opcode, Op0, Op0IsKill, Op1, Op1IsKill, imm2))
      return Reg;

  switch (Opcode) {
  case ARM64ISD::EXT: return FastEmit_ARM64ISD_EXT_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::EXTR.

unsigned FastEmit_ARM64ISD_EXTR_MVT_i32_rri_Predicate_imm0_31(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rri(ARM64::EXTRWrri, &ARM64::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXTR_rri_Predicate_imm0_31(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_EXTR_MVT_i32_rri_Predicate_imm0_31(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rri_Predicate_imm0_31(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (Opcode) {
  case ARM64ISD::EXTR: return FastEmit_ARM64ISD_EXTR_rri_Predicate_imm0_31(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::EXTR.

unsigned FastEmit_ARM64ISD_EXTR_MVT_i64_rri_Predicate_imm0_63(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rri(ARM64::EXTRXrri, &ARM64::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARM64ISD_EXTR_rri_Predicate_imm0_63(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ARM64ISD_EXTR_MVT_i64_rri_Predicate_imm0_63(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rri_Predicate_imm0_63(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (Opcode) {
  case ARM64ISD::EXTR: return FastEmit_ARM64ISD_EXTR_rri_Predicate_imm0_63(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::DUPLANE64.

unsigned FastEmit_ARM64ISD_DUPLANE64_MVT_v2i64_ri_Predicate_VectorIndexD(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_ri(ARM64::DUPv2i64lane, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE64_MVT_v2f64_ri_Predicate_VectorIndexD(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  return FastEmitInst_ri(ARM64::DUPv2i64lane, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE64_ri_Predicate_VectorIndexD(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v2i64: return FastEmit_ARM64ISD_DUPLANE64_MVT_v2i64_ri_Predicate_VectorIndexD(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2f64: return FastEmit_ARM64ISD_DUPLANE64_MVT_v2f64_ri_Predicate_VectorIndexD(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::EXTRACT_VECTOR_ELT.

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2i64_ri_Predicate_VectorIndexD(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(ARM64::UMOVvi64, &ARM64::GPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexD(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v2i64: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2i64_ri_Predicate_VectorIndexD(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_VectorIndexD(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::DUPLANE64: return FastEmit_ARM64ISD_DUPLANE64_ri_Predicate_VectorIndexD(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::EXTRACT_VECTOR_ELT: return FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexD(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::DUPLANE32.

unsigned FastEmit_ARM64ISD_DUPLANE32_MVT_v4i32_MVT_v2i32_ri_Predicate_VectorIndexS(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv2i32lane, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE32_MVT_v4i32_MVT_v4i32_ri_Predicate_VectorIndexS(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv4i32lane, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE32_MVT_v4i32_ri_Predicate_VectorIndexS(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ARM64ISD_DUPLANE32_MVT_v4i32_MVT_v2i32_ri_Predicate_VectorIndexS(Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_DUPLANE32_MVT_v4i32_MVT_v4i32_ri_Predicate_VectorIndexS(Op0, Op0IsKill, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_DUPLANE32_MVT_v4f32_MVT_v2f32_ri_Predicate_VectorIndexS(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv2i32lane, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE32_MVT_v4f32_MVT_v4f32_ri_Predicate_VectorIndexS(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv4i32lane, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE32_MVT_v4f32_ri_Predicate_VectorIndexS(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_DUPLANE32_MVT_v4f32_MVT_v2f32_ri_Predicate_VectorIndexS(Op0, Op0IsKill, imm1);
  case MVT::v4f32: return FastEmit_ARM64ISD_DUPLANE32_MVT_v4f32_MVT_v4f32_ri_Predicate_VectorIndexS(Op0, Op0IsKill, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_DUPLANE32_ri_Predicate_VectorIndexS(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ARM64ISD_DUPLANE32_MVT_v4i32_ri_Predicate_VectorIndexS(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4f32: return FastEmit_ARM64ISD_DUPLANE32_MVT_v4f32_ri_Predicate_VectorIndexS(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::EXTRACT_VECTOR_ELT.

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4i32_ri_Predicate_VectorIndexS(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(ARM64::UMOVvi32, &ARM64::GPR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexS(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4i32_ri_Predicate_VectorIndexS(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_VectorIndexS(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::DUPLANE32: return FastEmit_ARM64ISD_DUPLANE32_ri_Predicate_VectorIndexS(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::EXTRACT_VECTOR_ELT: return FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexS(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::DUPLANE16.

unsigned FastEmit_ARM64ISD_DUPLANE16_MVT_v8i16_MVT_v4i16_ri_Predicate_VectorIndexH(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv4i16lane, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE16_MVT_v8i16_MVT_v8i16_ri_Predicate_VectorIndexH(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv8i16lane, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE16_MVT_v8i16_ri_Predicate_VectorIndexH(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_DUPLANE16_MVT_v8i16_MVT_v4i16_ri_Predicate_VectorIndexH(Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARM64ISD_DUPLANE16_MVT_v8i16_MVT_v8i16_ri_Predicate_VectorIndexH(Op0, Op0IsKill, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_DUPLANE16_ri_Predicate_VectorIndexH(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARM64ISD_DUPLANE16_MVT_v8i16_ri_Predicate_VectorIndexH(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::EXTRACT_VECTOR_ELT.

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v8i16_ri_Predicate_VectorIndexH(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(ARM64::UMOVvi16, &ARM64::GPR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexH(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v8i16_ri_Predicate_VectorIndexH(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_VectorIndexH(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::DUPLANE16: return FastEmit_ARM64ISD_DUPLANE16_ri_Predicate_VectorIndexH(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::EXTRACT_VECTOR_ELT: return FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexH(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::DUPLANE8.

unsigned FastEmit_ARM64ISD_DUPLANE8_MVT_v16i8_MVT_v8i8_ri_Predicate_VectorIndexB(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv8i8lane, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE8_MVT_v16i8_MVT_v16i8_ri_Predicate_VectorIndexB(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM64::DUPv16i8lane, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_DUPLANE8_MVT_v16i8_ri_Predicate_VectorIndexB(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_DUPLANE8_MVT_v16i8_MVT_v8i8_ri_Predicate_VectorIndexB(Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARM64ISD_DUPLANE8_MVT_v16i8_MVT_v16i8_ri_Predicate_VectorIndexB(Op0, Op0IsKill, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_DUPLANE8_ri_Predicate_VectorIndexB(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_ARM64ISD_DUPLANE8_MVT_v16i8_ri_Predicate_VectorIndexB(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::EXTRACT_VECTOR_ELT.

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v16i8_ri_Predicate_VectorIndexB(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(ARM64::UMOVvi8, &ARM64::GPR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexB(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v16i8_ri_Predicate_VectorIndexB(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_VectorIndexB(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::DUPLANE8: return FastEmit_ARM64ISD_DUPLANE8_ri_Predicate_VectorIndexB(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::EXTRACT_VECTOR_ELT: return FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_VectorIndexB(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::BICi.

unsigned FastEmit_ARM64ISD_BICi_MVT_v4i16_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rii(ARM64::BICv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_BICi_MVT_v8i16_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rii(ARM64::BICv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_BICi_MVT_v2i32_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rii(ARM64::BICv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_BICi_MVT_v4i32_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rii(ARM64::BICv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_BICi_ri_Predicate_imm0_255i(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_BICi_MVT_v4i16_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  case MVT::v8i16: return FastEmit_ARM64ISD_BICi_MVT_v8i16_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  case MVT::v2i32: return FastEmit_ARM64ISD_BICi_MVT_v2i32_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  case MVT::v4i32: return FastEmit_ARM64ISD_BICi_MVT_v4i32_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::ORRi.

unsigned FastEmit_ARM64ISD_ORRi_MVT_v4i16_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_rii(ARM64::ORRv4i16, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_ORRi_MVT_v8i16_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_rii(ARM64::ORRv8i16, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_ORRi_MVT_v2i32_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_rii(ARM64::ORRv2i32, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_ORRi_MVT_v4i32_ri_Predicate_imm0_255i(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rii(ARM64::ORRv4i32, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_ARM64ISD_ORRi_ri_Predicate_imm0_255i(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_ORRi_MVT_v4i16_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  case MVT::v8i16: return FastEmit_ARM64ISD_ORRi_MVT_v8i16_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  case MVT::v2i32: return FastEmit_ARM64ISD_ORRi_MVT_v2i32_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  case MVT::v4i32: return FastEmit_ARM64ISD_ORRi_MVT_v4i32_ri_Predicate_imm0_255i(RetVT, Op0, Op0IsKill, imm1, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm0_255i(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  switch (Opcode) {
  case ARM64ISD::BICi: return FastEmit_ARM64ISD_BICi_ri_Predicate_imm0_255i(VT, RetVT, Op0, Op0IsKill, imm1, imm2);
  case ARM64ISD::ORRi: return FastEmit_ARM64ISD_ORRi_ri_Predicate_imm0_255i(VT, RetVT, Op0, Op0IsKill, imm1, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VSHL.

unsigned FastEmit_ARM64ISD_VSHL_MVT_v1i64_ri_Predicate_vecshiftL64(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_ri(ARM64::SHLd, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_MVT_v2i64_ri_Predicate_vecshiftL64(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_ri(ARM64::SHLv2i64_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL64(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v1i64: return FastEmit_ARM64ISD_VSHL_MVT_v1i64_ri_Predicate_vecshiftL64(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARM64ISD_VSHL_MVT_v2i64_ri_Predicate_vecshiftL64(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftL64(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VSHL: return FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL64(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VASHR.

unsigned FastEmit_ARM64ISD_VASHR_MVT_v1i64_ri_Predicate_vecshiftR64(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRd, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_MVT_v2i64_ri_Predicate_vecshiftR64(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRv2i64_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR64(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v1i64: return FastEmit_ARM64ISD_VASHR_MVT_v1i64_ri_Predicate_vecshiftR64(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARM64ISD_VASHR_MVT_v2i64_ri_Predicate_vecshiftR64(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VLSHR.

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v1i64_ri_Predicate_vecshiftR64(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  return FastEmitInst_ri(ARM64::USHRd, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v2i64_ri_Predicate_vecshiftR64(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_ri(ARM64::USHRv2i64_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR64(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v1i64: return FastEmit_ARM64ISD_VLSHR_MVT_v1i64_ri_Predicate_vecshiftR64(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARM64ISD_VLSHR_MVT_v2i64_ri_Predicate_vecshiftR64(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftR64(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VASHR: return FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR64(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARM64ISD::VLSHR: return FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR64(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VSHL.

unsigned FastEmit_ARM64ISD_VSHL_MVT_v8i8_ri_Predicate_vecshiftL8(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_ri(ARM64::SHLv8i8_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_MVT_v16i8_ri_Predicate_vecshiftL8(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_ri(ARM64::SHLv16i8_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL8(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_VSHL_MVT_v8i8_ri_Predicate_vecshiftL8(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARM64ISD_VSHL_MVT_v16i8_ri_Predicate_vecshiftL8(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftL8(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VSHL: return FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL8(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VSHL.

unsigned FastEmit_ARM64ISD_VSHL_MVT_v4i16_ri_Predicate_vecshiftL16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_ri(ARM64::SHLv4i16_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_MVT_v8i16_ri_Predicate_vecshiftL16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_ri(ARM64::SHLv8i16_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_VSHL_MVT_v4i16_ri_Predicate_vecshiftL16(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARM64ISD_VSHL_MVT_v8i16_ri_Predicate_vecshiftL16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftL16(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VSHL: return FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL16(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VSHL.

unsigned FastEmit_ARM64ISD_VSHL_MVT_v2i32_ri_Predicate_vecshiftL32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_ri(ARM64::SHLv2i32_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_MVT_v4i32_ri_Predicate_vecshiftL32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_ri(ARM64::SHLv4i32_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ARM64ISD_VSHL_MVT_v2i32_ri_Predicate_vecshiftL32(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_VSHL_MVT_v4i32_ri_Predicate_vecshiftL32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftL32(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VSHL: return FastEmit_ARM64ISD_VSHL_ri_Predicate_vecshiftL32(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VASHR.

unsigned FastEmit_ARM64ISD_VASHR_MVT_v8i8_ri_Predicate_vecshiftR8(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRv8i8_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_MVT_v16i8_ri_Predicate_vecshiftR8(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRv16i8_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR8(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_VASHR_MVT_v8i8_ri_Predicate_vecshiftR8(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARM64ISD_VASHR_MVT_v16i8_ri_Predicate_vecshiftR8(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VLSHR.

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v8i8_ri_Predicate_vecshiftR8(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  return FastEmitInst_ri(ARM64::USHRv8i8_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v16i8_ri_Predicate_vecshiftR8(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  return FastEmitInst_ri(ARM64::USHRv16i8_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR8(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_VLSHR_MVT_v8i8_ri_Predicate_vecshiftR8(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARM64ISD_VLSHR_MVT_v16i8_ri_Predicate_vecshiftR8(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftR8(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VASHR: return FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR8(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARM64ISD::VLSHR: return FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR8(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VASHR.

unsigned FastEmit_ARM64ISD_VASHR_MVT_v4i16_ri_Predicate_vecshiftR16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRv4i16_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_MVT_v8i16_ri_Predicate_vecshiftR16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRv8i16_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_VASHR_MVT_v4i16_ri_Predicate_vecshiftR16(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARM64ISD_VASHR_MVT_v8i16_ri_Predicate_vecshiftR16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VLSHR.

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v4i16_ri_Predicate_vecshiftR16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  return FastEmitInst_ri(ARM64::USHRv4i16_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v8i16_ri_Predicate_vecshiftR16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_ri(ARM64::USHRv8i16_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_VLSHR_MVT_v4i16_ri_Predicate_vecshiftR16(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARM64ISD_VLSHR_MVT_v8i16_ri_Predicate_vecshiftR16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftR16(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VASHR: return FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR16(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARM64ISD::VLSHR: return FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR16(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VASHR.

unsigned FastEmit_ARM64ISD_VASHR_MVT_v2i32_ri_Predicate_vecshiftR32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRv2i32_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_MVT_v4i32_ri_Predicate_vecshiftR32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_ri(ARM64::SSHRv4i32_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ARM64ISD_VASHR_MVT_v2i32_ri_Predicate_vecshiftR32(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_VASHR_MVT_v4i32_ri_Predicate_vecshiftR32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::VLSHR.

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v2i32_ri_Predicate_vecshiftR32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  return FastEmitInst_ri(ARM64::USHRv2i32_shift, &ARM64::FPR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_MVT_v4i32_ri_Predicate_vecshiftR32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_ri(ARM64::USHRv4i32_shift, &ARM64::FPR128RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ARM64ISD_VLSHR_MVT_v2i32_ri_Predicate_vecshiftR32(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_VLSHR_MVT_v4i32_ri_Predicate_vecshiftR32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_vecshiftR32(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::VASHR: return FastEmit_ARM64ISD_VASHR_ri_Predicate_vecshiftR32(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARM64ISD::VLSHR: return FastEmit_ARM64ISD_VLSHR_ri_Predicate_vecshiftR32(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::Constant.

unsigned FastEmit_ISD_Constant_MVT_i32_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_i(ARM64::MOVi32imm, &ARM64::GPR32RegClass, imm0);
}

unsigned FastEmit_ISD_Constant_MVT_i64_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_i(ARM64::MOVi64imm, &ARM64::GPR64RegClass, imm0);
}

unsigned FastEmit_ISD_Constant_i(MVT VT, MVT RetVT, uint64_t imm0) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_Constant_MVT_i32_i(RetVT, imm0);
  case MVT::i64: return FastEmit_ISD_Constant_MVT_i64_i(RetVT, imm0);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_i(MVT VT, MVT RetVT, unsigned Opcode, uint64_t imm0) {
  if (VT == MVT::i32 && Predicate_imm0_255(imm0))
    if (unsigned Reg = FastEmit_i_Predicate_imm0_255(VT, RetVT, Opcode, imm0))
      return Reg;

  switch (Opcode) {
  case ISD::Constant: return FastEmit_ISD_Constant_i(VT, RetVT, imm0);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::FMOV.

unsigned FastEmit_ARM64ISD_FMOV_MVT_i32_MVT_v2f32_i_Predicate_imm0_255(uint64_t imm0) {
  return FastEmitInst_i(ARM64::FMOVv2f32ns, &ARM64::FPR64RegClass, imm0);
}

unsigned FastEmit_ARM64ISD_FMOV_MVT_i32_MVT_v4f32_i_Predicate_imm0_255(uint64_t imm0) {
  return FastEmitInst_i(ARM64::FMOVv4f32ns, &ARM64::FPR128RegClass, imm0);
}

unsigned FastEmit_ARM64ISD_FMOV_MVT_i32_MVT_v2f64_i_Predicate_imm0_255(uint64_t imm0) {
  return FastEmitInst_i(ARM64::FMOVv2f64ns, &ARM64::FPR128RegClass, imm0);
}

unsigned FastEmit_ARM64ISD_FMOV_MVT_i32_i_Predicate_imm0_255(MVT RetVT, uint64_t imm0) {
switch (RetVT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARM64ISD_FMOV_MVT_i32_MVT_v2f32_i_Predicate_imm0_255(imm0);
  case MVT::v4f32: return FastEmit_ARM64ISD_FMOV_MVT_i32_MVT_v4f32_i_Predicate_imm0_255(imm0);
  case MVT::v2f64: return FastEmit_ARM64ISD_FMOV_MVT_i32_MVT_v2f64_i_Predicate_imm0_255(imm0);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_FMOV_i_Predicate_imm0_255(MVT VT, MVT RetVT, uint64_t imm0) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_FMOV_MVT_i32_i_Predicate_imm0_255(RetVT, imm0);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::MOVI.

unsigned FastEmit_ARM64ISD_MOVI_MVT_i32_MVT_v8i8_i_Predicate_imm0_255(uint64_t imm0) {
  return FastEmitInst_i(ARM64::MOVIv8bns, &ARM64::FPR64RegClass, imm0);
}

unsigned FastEmit_ARM64ISD_MOVI_MVT_i32_MVT_v16i8_i_Predicate_imm0_255(uint64_t imm0) {
  return FastEmitInst_i(ARM64::MOVIv16bns, &ARM64::FPR128RegClass, imm0);
}

unsigned FastEmit_ARM64ISD_MOVI_MVT_i32_i_Predicate_imm0_255(MVT RetVT, uint64_t imm0) {
switch (RetVT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARM64ISD_MOVI_MVT_i32_MVT_v8i8_i_Predicate_imm0_255(imm0);
  case MVT::v16i8: return FastEmit_ARM64ISD_MOVI_MVT_i32_MVT_v16i8_i_Predicate_imm0_255(imm0);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_MOVI_i_Predicate_imm0_255(MVT VT, MVT RetVT, uint64_t imm0) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_MOVI_MVT_i32_i_Predicate_imm0_255(RetVT, imm0);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::MOVIedit.

unsigned FastEmit_ARM64ISD_MOVIedit_MVT_i32_MVT_f64_i_Predicate_imm0_255(uint64_t imm0) {
  return FastEmitInst_i(ARM64::MOVID, &ARM64::FPR64RegClass, imm0);
}

unsigned FastEmit_ARM64ISD_MOVIedit_MVT_i32_MVT_v2i64_i_Predicate_imm0_255(uint64_t imm0) {
  return FastEmitInst_i(ARM64::MOVIv2dns, &ARM64::FPR128RegClass, imm0);
}

unsigned FastEmit_ARM64ISD_MOVIedit_MVT_i32_i_Predicate_imm0_255(MVT RetVT, uint64_t imm0) {
switch (RetVT.SimpleTy) {
  case MVT::f64: return FastEmit_ARM64ISD_MOVIedit_MVT_i32_MVT_f64_i_Predicate_imm0_255(imm0);
  case MVT::v2i64: return FastEmit_ARM64ISD_MOVIedit_MVT_i32_MVT_v2i64_i_Predicate_imm0_255(imm0);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_MOVIedit_i_Predicate_imm0_255(MVT VT, MVT RetVT, uint64_t imm0) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_MOVIedit_MVT_i32_i_Predicate_imm0_255(RetVT, imm0);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_i_Predicate_imm0_255(MVT VT, MVT RetVT, unsigned Opcode, uint64_t imm0) {
  switch (Opcode) {
  case ARM64ISD::FMOV: return FastEmit_ARM64ISD_FMOV_i_Predicate_imm0_255(VT, RetVT, imm0);
  case ARM64ISD::MOVI: return FastEmit_ARM64ISD_MOVI_i_Predicate_imm0_255(VT, RetVT, imm0);
  case ARM64ISD::MOVIedit: return FastEmit_ARM64ISD_MOVIedit_i_Predicate_imm0_255(VT, RetVT, imm0);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::MOVImsl.

unsigned FastEmit_ARM64ISD_MOVImsl_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MOVIv2smsl, &ARM64::FPR64RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MOVImsl_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MOVIv4smsl, &ARM64::FPR128RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MOVImsl_MVT_i32_i_Predicate_imm0_255i(MVT RetVT, uint64_t imm0, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ARM64ISD_MOVImsl_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_MOVImsl_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(imm0, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_MOVImsl_i_Predicate_imm0_255i(MVT VT, MVT RetVT, uint64_t imm0, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_MOVImsl_MVT_i32_i_Predicate_imm0_255i(RetVT, imm0, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::MOVIshift.

unsigned FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v4i16_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MOVIv4i16, &ARM64::FPR64RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v8i16_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MOVIv8i16, &ARM64::FPR128RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MOVIv2i32, &ARM64::FPR64RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MOVIv4i32, &ARM64::FPR128RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MOVIshift_MVT_i32_i_Predicate_imm0_255i(MVT RetVT, uint64_t imm0, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v4i16_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v8i16: return FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v8i16_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v2i32: return FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_MOVIshift_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(imm0, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_MOVIshift_i_Predicate_imm0_255i(MVT VT, MVT RetVT, uint64_t imm0, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_MOVIshift_MVT_i32_i_Predicate_imm0_255i(RetVT, imm0, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::MVNImsl.

unsigned FastEmit_ARM64ISD_MVNImsl_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MVNIv2smsl, &ARM64::FPR64RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MVNImsl_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MVNIv4smsl, &ARM64::FPR128RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MVNImsl_MVT_i32_i_Predicate_imm0_255i(MVT RetVT, uint64_t imm0, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ARM64ISD_MVNImsl_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_MVNImsl_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(imm0, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_MVNImsl_i_Predicate_imm0_255i(MVT VT, MVT RetVT, uint64_t imm0, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_MVNImsl_MVT_i32_i_Predicate_imm0_255i(RetVT, imm0, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARM64ISD::MVNIshift.

unsigned FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v4i16_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MVNIv4i16, &ARM64::FPR64RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v8i16_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MVNIv8i16, &ARM64::FPR128RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MVNIv2i32, &ARM64::FPR64RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(uint64_t imm0, uint64_t imm1) {
  return FastEmitInst_ii(ARM64::MVNIv4i32, &ARM64::FPR128RegClass, imm0, imm1);
}

unsigned FastEmit_ARM64ISD_MVNIshift_MVT_i32_i_Predicate_imm0_255i(MVT RetVT, uint64_t imm0, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v4i16: return FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v4i16_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v8i16: return FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v8i16_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v2i32: return FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v2i32_i_Predicate_imm0_255i(imm0, imm1);
  case MVT::v4i32: return FastEmit_ARM64ISD_MVNIshift_MVT_i32_MVT_v4i32_i_Predicate_imm0_255i(imm0, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARM64ISD_MVNIshift_i_Predicate_imm0_255i(MVT VT, MVT RetVT, uint64_t imm0, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARM64ISD_MVNIshift_MVT_i32_i_Predicate_imm0_255i(RetVT, imm0, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_i_Predicate_imm0_255i(MVT VT, MVT RetVT, unsigned Opcode, uint64_t imm0, uint64_t imm1) {
  switch (Opcode) {
  case ARM64ISD::MOVImsl: return FastEmit_ARM64ISD_MOVImsl_i_Predicate_imm0_255i(VT, RetVT, imm0, imm1);
  case ARM64ISD::MOVIshift: return FastEmit_ARM64ISD_MOVIshift_i_Predicate_imm0_255i(VT, RetVT, imm0, imm1);
  case ARM64ISD::MVNImsl: return FastEmit_ARM64ISD_MVNImsl_i_Predicate_imm0_255i(VT, RetVT, imm0, imm1);
  case ARM64ISD::MVNIshift: return FastEmit_ARM64ISD_MVNIshift_i_Predicate_imm0_255i(VT, RetVT, imm0, imm1);
  default: return 0;
  }
}

