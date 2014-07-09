#ifdef GET_NEON_BUILTINS
BUILTIN(__builtin_arm64_vaddlv_s8, "sV8Sc", "n")
BUILTIN(__builtin_arm64_vaddlv_s16, "iV4s", "n")
BUILTIN(__builtin_arm64_vaddlv_s32, "LLiV2i", "n")
BUILTIN(__builtin_arm64_vaddlv_u8, "UsV8Sc", "n")
BUILTIN(__builtin_arm64_vaddlv_u16, "UiV4s", "n")
BUILTIN(__builtin_arm64_vaddlv_u32, "ULLiV2i", "n")
BUILTIN(__builtin_arm64_vaddlvq_s8, "sV16Sc", "n")
BUILTIN(__builtin_arm64_vaddlvq_s16, "iV8s", "n")
BUILTIN(__builtin_arm64_vaddlvq_s32, "LLiV4i", "n")
BUILTIN(__builtin_arm64_vaddlvq_u8, "UsV16Sc", "n")
BUILTIN(__builtin_arm64_vaddlvq_u16, "UiV8s", "n")
BUILTIN(__builtin_arm64_vaddlvq_u32, "ULLiV4i", "n")
BUILTIN(__builtin_arm64_vaddv_s8, "ScV8Sc", "n")
BUILTIN(__builtin_arm64_vaddv_s16, "sV4s", "n")
BUILTIN(__builtin_arm64_vaddv_s32, "iV2i", "n")
BUILTIN(__builtin_arm64_vaddv_u8, "UcV8Sc", "n")
BUILTIN(__builtin_arm64_vaddv_u16, "UsV4s", "n")
BUILTIN(__builtin_arm64_vaddv_u32, "UiV2i", "n")
BUILTIN(__builtin_arm64_vaddvq_s8, "ScV16Sc", "n")
BUILTIN(__builtin_arm64_vaddvq_s16, "sV8s", "n")
BUILTIN(__builtin_arm64_vaddvq_s32, "iV4i", "n")
BUILTIN(__builtin_arm64_vaddvq_u8, "UcV16Sc", "n")
BUILTIN(__builtin_arm64_vaddvq_u16, "UsV8s", "n")
BUILTIN(__builtin_arm64_vaddvq_u32, "UiV4i", "n")
BUILTIN(__builtin_arm64_vmaxnmv_f32, "fV2f", "n")
BUILTIN(__builtin_arm64_vmaxnmvq_f32, "fV4f", "n")
BUILTIN(__builtin_arm64_vmaxv_s8, "ScV8Sc", "n")
BUILTIN(__builtin_arm64_vmaxv_s16, "sV4s", "n")
BUILTIN(__builtin_arm64_vmaxv_s32, "iV2i", "n")
BUILTIN(__builtin_arm64_vmaxv_f32, "fV2f", "n")
BUILTIN(__builtin_arm64_vmaxv_u8, "UcV8Sc", "n")
BUILTIN(__builtin_arm64_vmaxv_u16, "UsV4s", "n")
BUILTIN(__builtin_arm64_vmaxv_u32, "UiV2i", "n")
BUILTIN(__builtin_arm64_vmaxvq_s8, "ScV16Sc", "n")
BUILTIN(__builtin_arm64_vmaxvq_s16, "sV8s", "n")
BUILTIN(__builtin_arm64_vmaxvq_s32, "iV4i", "n")
BUILTIN(__builtin_arm64_vmaxvq_u8, "UcV16Sc", "n")
BUILTIN(__builtin_arm64_vmaxvq_u16, "UsV8s", "n")
BUILTIN(__builtin_arm64_vmaxvq_u32, "UiV4i", "n")
BUILTIN(__builtin_arm64_vmaxvq_f32, "fV4f", "n")
BUILTIN(__builtin_arm64_vmaxvq_f64, "dV16Sc", "n")
BUILTIN(__builtin_arm64_vminnmv_f32, "fV2f", "n")
BUILTIN(__builtin_arm64_vminnmvq_f32, "fV4f", "n")
BUILTIN(__builtin_arm64_vminv_s8, "ScV8Sc", "n")
BUILTIN(__builtin_arm64_vminv_s16, "sV4s", "n")
BUILTIN(__builtin_arm64_vminv_s32, "iV2i", "n")
BUILTIN(__builtin_arm64_vminv_f32, "fV2f", "n")
BUILTIN(__builtin_arm64_vminv_u8, "UcV8Sc", "n")
BUILTIN(__builtin_arm64_vminv_u16, "UsV4s", "n")
BUILTIN(__builtin_arm64_vminv_u32, "UiV2i", "n")
BUILTIN(__builtin_arm64_vminvq_s8, "ScV16Sc", "n")
BUILTIN(__builtin_arm64_vminvq_s16, "sV8s", "n")
BUILTIN(__builtin_arm64_vminvq_s32, "iV4i", "n")
BUILTIN(__builtin_arm64_vminvq_u8, "UcV16Sc", "n")
BUILTIN(__builtin_arm64_vminvq_u16, "UsV8s", "n")
BUILTIN(__builtin_arm64_vminvq_u32, "UiV4i", "n")
BUILTIN(__builtin_arm64_vminvq_f32, "fV4f", "n")
BUILTIN(__builtin_arm64_vminvq_f64, "dV16Sc", "n")
BUILTIN(__builtin_arm64_vabal_v, "V16ScV16ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vabal_high_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vabd_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vabdq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vabdd_f64, "ddd", "n")
BUILTIN(__builtin_arm64_vabdl_v, "V16ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vabdl_high_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vabds_f32, "fff", "n")
BUILTIN(__builtin_arm64_vabs_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vabsq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vaddhn_v, "V8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vaddhn_high_v, "V16ScV8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vaddw_high_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vaesdq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vaeseq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vaesimcq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vaesmcq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcage_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcageq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcagt_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcagtq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcale_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcaleq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcalt_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcaltq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vceqzd_s64, "LLiLLi", "n")
BUILTIN(__builtin_arm64_vceqzd_u64, "ULLiULLi", "n")
BUILTIN(__builtin_arm64_vcgezd_s64, "LLiLLi", "n")
BUILTIN(__builtin_arm64_vcgezd_u64, "ULLiULLi", "n")
BUILTIN(__builtin_arm64_vcgtzd_s64, "LLiLLi", "n")
BUILTIN(__builtin_arm64_vclezd_s64, "LLiLLi", "n")
BUILTIN(__builtin_arm64_vclezd_u64, "ULLiULLi", "n")
BUILTIN(__builtin_arm64_vcls_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vclsq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcltzd_s64, "LLiLLi", "n")
BUILTIN(__builtin_arm64_vclz_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vclzq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcnt_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcntq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcopyq_lane_v, "V16ScV16SciV16Scii", "n")
BUILTIN(__builtin_arm64_vcvtad_s64_f64, "LLid", "n")
BUILTIN(__builtin_arm64_vcvtad_u64_f64, "ULLid", "n")
BUILTIN(__builtin_arm64_vcvtas_s32_f32, "if", "n")
BUILTIN(__builtin_arm64_vcvtas_u32_f32, "Uif", "n")
BUILTIN(__builtin_arm64_vcvta_s32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtaq_s32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtaq_s64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvta_u32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtaq_u32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtaq_u64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtd_f64_s64, "dLLi", "n")
BUILTIN(__builtin_arm64_vcvtd_f64_u64, "dULLi", "n")
BUILTIN(__builtin_arm64_vcvtd_n_f64_s64, "dLLii", "n")
BUILTIN(__builtin_arm64_vcvtd_n_f64_u64, "dULLii", "n")
BUILTIN(__builtin_arm64_vcvtd_n_s64_f64, "LLidi", "n")
BUILTIN(__builtin_arm64_vcvtd_n_u64_f64, "ULLidi", "n")
BUILTIN(__builtin_arm64_vcvtd_s64_f64, "LLid", "n")
BUILTIN(__builtin_arm64_vcvtd_u64_f64, "ULLid", "n")
BUILTIN(__builtin_arm64_vcvtmd_s64_f64, "LLid", "n")
BUILTIN(__builtin_arm64_vcvtmd_u64_f64, "ULLid", "n")
BUILTIN(__builtin_arm64_vcvtms_s32_f32, "if", "n")
BUILTIN(__builtin_arm64_vcvtms_u32_f32, "Uif", "n")
BUILTIN(__builtin_arm64_vcvtm_s32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtmq_s32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtmq_s64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtm_u32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtmq_u32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtmq_u64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtnd_s64_f64, "LLid", "n")
BUILTIN(__builtin_arm64_vcvtnd_u64_f64, "ULLid", "n")
BUILTIN(__builtin_arm64_vcvtns_s32_f32, "if", "n")
BUILTIN(__builtin_arm64_vcvtns_u32_f32, "Uif", "n")
BUILTIN(__builtin_arm64_vcvtn_s32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtnq_s32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtnq_s64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtn_u32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtnq_u32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtnq_u64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtpd_s64_f64, "LLid", "n")
BUILTIN(__builtin_arm64_vcvtpd_u64_f64, "ULLid", "n")
BUILTIN(__builtin_arm64_vcvtps_s32_f32, "if", "n")
BUILTIN(__builtin_arm64_vcvtps_u32_f32, "Uif", "n")
BUILTIN(__builtin_arm64_vcvtp_s32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtpq_s32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtpq_s64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtp_u32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtpq_u32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtpq_u64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvts_f32_s32, "fi", "n")
BUILTIN(__builtin_arm64_vcvts_f32_u32, "fUi", "n")
BUILTIN(__builtin_arm64_vcvts_n_f32_s32, "fii", "n")
BUILTIN(__builtin_arm64_vcvts_n_f32_u32, "fUii", "n")
BUILTIN(__builtin_arm64_vcvts_n_s32_f32, "ifi", "n")
BUILTIN(__builtin_arm64_vcvts_n_u32_f32, "Uifi", "n")
BUILTIN(__builtin_arm64_vcvts_s32_f32, "if", "n")
BUILTIN(__builtin_arm64_vcvts_u32_f32, "Uif", "n")
BUILTIN(__builtin_arm64_vcvtxd_f32_f64, "fd", "n")
BUILTIN(__builtin_arm64_vcvtx_f32_f64, "V8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtx_high_f32_f64, "V16ScV8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtzd_s64_f64, "LLid", "n")
BUILTIN(__builtin_arm64_vcvtzd_u64_f64, "ULLid", "n")
BUILTIN(__builtin_arm64_vcvtzs_s32_f32, "if", "n")
BUILTIN(__builtin_arm64_vcvtzs_u32_f32, "Uif", "n")
BUILTIN(__builtin_arm64_vcvtz_s32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtzq_s32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtzq_s64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtz_u32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtzq_u32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtzq_u64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvt_f16_v, "V8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvt_f32_v, "V2fV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtq_f32_v, "V4fV16Sci", "n")
BUILTIN(__builtin_arm64_vcvt_f32_f16, "V4fV8Sci", "n")
BUILTIN(__builtin_arm64_vcvt_f32_f64, "V8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtq_f64_v, "V4fV16Sci", "n")
BUILTIN(__builtin_arm64_vcvt_f64_f32, "V16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvt_high_f32_f64, "V16ScV8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvt_high_f64_f32, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvt_n_f32_v, "V2fV8Scii", "n")
BUILTIN(__builtin_arm64_vcvtq_n_f32_v, "V4fV16Scii", "n")
BUILTIN(__builtin_arm64_vcvtq_n_f64_v, "V4fV16Scii", "n")
BUILTIN(__builtin_arm64_vcvt_n_s32_v, "V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vcvtq_n_s32_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vcvtq_n_s64_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vcvt_n_u32_v, "V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vcvtq_n_u32_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vcvtq_n_u64_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vcvt_s32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtq_s32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtq_s64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvt_u32_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vcvtq_u32_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vcvtq_u64_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vdiv_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vdivq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vdupb_lane_s8, "ScV16Sci", "n")
BUILTIN(__builtin_arm64_vdupb_lane_u8, "UcV16Sci", "n")
BUILTIN(__builtin_arm64_vdupd_lane_s64, "LLiV2LLii", "n")
BUILTIN(__builtin_arm64_vdupd_lane_u64, "ULLiV2LLii", "n")
BUILTIN(__builtin_arm64_vdupd_lane_f64, "dV16Sci", "n")
BUILTIN(__builtin_arm64_vduph_lane_s16, "sV8si", "n")
BUILTIN(__builtin_arm64_vduph_lane_u16, "UsV8si", "n")
BUILTIN(__builtin_arm64_vdups_lane_s32, "iV4ii", "n")
BUILTIN(__builtin_arm64_vdups_lane_u32, "UiV4ii", "n")
BUILTIN(__builtin_arm64_vdups_lane_f32, "fV4fi", "n")
BUILTIN(__builtin_arm64_vdup_lane_f64, "dV16Sci", "n")
BUILTIN(__builtin_arm64_vext_v, "V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vextq_v, "V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vfma_v, "V8ScV8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vfmaq_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vfma_lane_v, "V8ScV8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vfmaq_lane_v, "V16ScV16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vfms_v, "V8ScV8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vfmsq_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vfms_lane_v, "V8ScV8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vfmsq_lane_v, "V16ScV16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vget_lane_s8, "ScV8Sci", "n")
BUILTIN(__builtin_arm64_vget_lane_s16, "sV4si", "n")
BUILTIN(__builtin_arm64_vget_lane_s32, "iV2ii", "n")
BUILTIN(__builtin_arm64_vget_lane_s64, "LLiV1LLii", "n")
BUILTIN(__builtin_arm64_vget_lane_u8, "UcV8Sci", "n")
BUILTIN(__builtin_arm64_vget_lane_u16, "UsV4si", "n")
BUILTIN(__builtin_arm64_vget_lane_u32, "UiV2ii", "n")
BUILTIN(__builtin_arm64_vget_lane_u64, "ULLiV1LLii", "n")
BUILTIN(__builtin_arm64_vget_lane_f32, "fV2fi", "n")
BUILTIN(__builtin_arm64_vget_lane_f64, "dV8Sci", "n")
BUILTIN(__builtin_arm64_vget_lane_p8, "UcV8Sci", "n")
BUILTIN(__builtin_arm64_vget_lane_p16, "UsV4si", "n")
BUILTIN(__builtin_arm64_vgetq_lane_s8, "ScV16Sci", "n")
BUILTIN(__builtin_arm64_vgetq_lane_s16, "sV8si", "n")
BUILTIN(__builtin_arm64_vgetq_lane_s32, "iV4ii", "n")
BUILTIN(__builtin_arm64_vgetq_lane_s64, "LLiV2LLii", "n")
BUILTIN(__builtin_arm64_vgetq_lane_u8, "UcV16Sci", "n")
BUILTIN(__builtin_arm64_vgetq_lane_u16, "UsV8si", "n")
BUILTIN(__builtin_arm64_vgetq_lane_u32, "UiV4ii", "n")
BUILTIN(__builtin_arm64_vgetq_lane_u64, "ULLiV2LLii", "n")
BUILTIN(__builtin_arm64_vgetq_lane_f32, "fV4fi", "n")
BUILTIN(__builtin_arm64_vgetq_lane_f64, "dV16Sci", "n")
BUILTIN(__builtin_arm64_vgetq_lane_p8, "UcV16Sci", "n")
BUILTIN(__builtin_arm64_vgetq_lane_p16, "UsV8si", "n")
BUILTIN(__builtin_arm64_vhadd_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vhaddq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vhsub_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vhsubq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vld1q_v, "V16ScvC*i", "n")
BUILTIN(__builtin_arm64_vld1_v, "V8ScvC*i", "n")
BUILTIN(__builtin_arm64_vld1q_dup_v, "V16ScvC*i", "n")
BUILTIN(__builtin_arm64_vld1_dup_v, "V8ScvC*i", "n")
BUILTIN(__builtin_arm64_vld1q_lane_v, "V16ScvC*V16Scii", "n")
BUILTIN(__builtin_arm64_vld1_lane_v, "V8ScvC*V8Scii", "n")
BUILTIN(__builtin_arm64_vld2q_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld2_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld2_dup_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld2q_lane_v, "vv*vC*V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vld2_lane_v, "vv*vC*V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vld3q_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld3_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld3_dup_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld3q_lane_v, "vv*vC*V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vld3_lane_v, "vv*vC*V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vld4q_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld4_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld4_dup_v, "vv*vC*i", "n")
BUILTIN(__builtin_arm64_vld4q_lane_v, "vv*vC*V16ScV16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vld4_lane_v, "vv*vC*V8ScV8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vmax_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vmaxq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vmaxnm_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vmaxnmq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vpmaxnm_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vpmaxnmq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vmin_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vminq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vminnm_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vminnmq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vpminnm_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vpminnmq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vmovl_v, "V16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vmovn_v, "V8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vmovn_high_v, "V16ScV8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vmull_v, "V16ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vmul_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vmulq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vmulx_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vmulxq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vmulxd_f64, "ddd", "n")
BUILTIN(__builtin_arm64_vmulxs_f32, "fff", "n")
BUILTIN(__builtin_arm64_vmulx_lane_v, "V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vmulxq_lane_v, "V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vpadal_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vpadalq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vpadd_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vpaddq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vpaddd_s64, "LLiV2LLi", "n")
BUILTIN(__builtin_arm64_vpaddd_f64, "dV16Sc", "n")
BUILTIN(__builtin_arm64_vpaddl_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vpaddlq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vpadds_f32, "fV2f", "n")
BUILTIN(__builtin_arm64_vpmax_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vpmaxq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vpmin_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vpminq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqabs_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqabsq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqabsb_s8, "ScSc", "n")
BUILTIN(__builtin_arm64_vqabsd_s64, "LLiLLi", "n")
BUILTIN(__builtin_arm64_vqabsh_s16, "ss", "n")
BUILTIN(__builtin_arm64_vqabss_s32, "ii", "n")
BUILTIN(__builtin_arm64_vqadd_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqaddq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqaddb_s8, "ScScSc", "n")
BUILTIN(__builtin_arm64_vqaddb_u8, "UcUcUc", "n")
BUILTIN(__builtin_arm64_vqaddd_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vqaddd_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vqaddh_s16, "sss", "n")
BUILTIN(__builtin_arm64_vqaddh_u16, "UsUsUs", "n")
BUILTIN(__builtin_arm64_vqadds_s32, "iii", "n")
BUILTIN(__builtin_arm64_vqadds_u32, "UiUiUi", "n")
BUILTIN(__builtin_arm64_vqdmlal_high_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqdmlsl_high_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqdmulh_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqdmulhq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqdmull_v, "V16ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqdmullh_s16, "iss", "n")
BUILTIN(__builtin_arm64_vqdmullh_lane_s16, "isV8si", "n")
BUILTIN(__builtin_arm64_vqdmulls_s32, "LLiii", "n")
BUILTIN(__builtin_arm64_vqdmulls_lane_s32, "LLiiV4ii", "n")
BUILTIN(__builtin_arm64_vqdmull_high_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqmovn_v, "V8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqmovnd_s64, "iLLi", "n")
BUILTIN(__builtin_arm64_vqmovnd_u64, "UiULLi", "n")
BUILTIN(__builtin_arm64_vqmovnh_s16, "Scs", "n")
BUILTIN(__builtin_arm64_vqmovnh_u16, "UcUs", "n")
BUILTIN(__builtin_arm64_vqmovns_s32, "si", "n")
BUILTIN(__builtin_arm64_vqmovns_u32, "UsUi", "n")
BUILTIN(__builtin_arm64_vqmovn_high_v, "V16ScV8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqmovun_v, "V8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqmovund_s64, "iLLi", "n")
BUILTIN(__builtin_arm64_vqmovunh_s16, "Scs", "n")
BUILTIN(__builtin_arm64_vqmovuns_s32, "si", "n")
BUILTIN(__builtin_arm64_vqmovun_high_v, "V16ScV8ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqneg_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqnegq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqnegb_s8, "ScSc", "n")
BUILTIN(__builtin_arm64_vqnegd_s64, "LLiLLi", "n")
BUILTIN(__builtin_arm64_vqnegh_s16, "ss", "n")
BUILTIN(__builtin_arm64_vqnegs_s32, "ii", "n")
BUILTIN(__builtin_arm64_vqrdmulh_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqrdmulhq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqrshl_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqrshlq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqrshlb_s8, "ScScSc", "n")
BUILTIN(__builtin_arm64_vqrshlb_u8, "UcUcUc", "n")
BUILTIN(__builtin_arm64_vqrshld_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vqrshld_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vqrshlh_s16, "sss", "n")
BUILTIN(__builtin_arm64_vqrshlh_u16, "UsUsUs", "n")
BUILTIN(__builtin_arm64_vqrshls_s32, "iii", "n")
BUILTIN(__builtin_arm64_vqrshls_u32, "UiUiUi", "n")
BUILTIN(__builtin_arm64_vqrshl_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vqrshl_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vqrshrn_high_n_v, "V16ScV8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqrshrn_n_v, "V8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqrshrun_high_n_v, "V16ScV8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqrshrun_n_v, "V8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqshl_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqshlq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqshlb_s8, "ScScSc", "n")
BUILTIN(__builtin_arm64_vqshlb_u8, "UcUcUc", "n")
BUILTIN(__builtin_arm64_vqshld_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vqshld_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vqshlh_s16, "sss", "n")
BUILTIN(__builtin_arm64_vqshlh_u16, "UsUsUs", "n")
BUILTIN(__builtin_arm64_vqshls_s32, "iii", "n")
BUILTIN(__builtin_arm64_vqshls_u32, "UiUiUi", "n")
BUILTIN(__builtin_arm64_vqshlu_n_v, "V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vqshluq_n_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqshl_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vqshl_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vqshl_n_v, "V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vqshlq_n_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqshrn_high_n_v, "V16ScV8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqshrn_n_v, "V8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqshrun_high_n_v, "V16ScV8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqshrun_n_v, "V8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vqsub_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vqsubq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqsubb_s8, "ScScSc", "n")
BUILTIN(__builtin_arm64_vqsubb_u8, "UcUcUc", "n")
BUILTIN(__builtin_arm64_vqsubd_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vqsubd_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vqsubh_s16, "sss", "n")
BUILTIN(__builtin_arm64_vqsubh_u16, "UsUsUs", "n")
BUILTIN(__builtin_arm64_vqsubs_s32, "iii", "n")
BUILTIN(__builtin_arm64_vqsubs_u32, "UiUiUi", "n")
BUILTIN(__builtin_arm64_vqtbl1q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqtbl2q_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqtbl3q_v, "V16ScV16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqtbl4q_v, "V16ScV16ScV16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqtbx1q_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqtbx2q_v, "V16ScV16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqtbx3q_v, "V16ScV16ScV16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vqtbx4q_v, "V16ScV16ScV16ScV16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vraddhn_v, "V8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vraddhn_high_v, "V16ScV8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrbit_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrbitq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrecpe_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrecpeq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrecps_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrecpsq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrecpsd_f64, "ddd", "n")
BUILTIN(__builtin_arm64_vrecpss_f32, "fff", "n")
BUILTIN(__builtin_arm64_vrhadd_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrhaddq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrnd_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrndq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrnda_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrndaq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrndm_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrndmq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrndn_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrndnq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrndp_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrndpq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrndx_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrndxq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrndz_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrndzq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrshl_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrshlq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrshld_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vrshld_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vrshl_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vrshl_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vrshrn_high_n_v, "V16ScV8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vrshrn_n_v, "V8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vrshr_n_v, "V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vrshrq_n_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vrsqrte_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrsqrteq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrsqrts_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vrsqrtsq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrsqrtsd_f64, "ddd", "n")
BUILTIN(__builtin_arm64_vrsqrtss_f32, "fff", "n")
BUILTIN(__builtin_arm64_vrsra_n_v, "V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vrsraq_n_v, "V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vrsubhn_v, "V8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vrsubhn_high_v, "V16ScV8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vset_lane_i8, "V8ScUcV8Sci", "n")
BUILTIN(__builtin_arm64_vset_lane_i16, "V4sUsV4si", "n")
BUILTIN(__builtin_arm64_vset_lane_i32, "V2iUiV2ii", "n")
BUILTIN(__builtin_arm64_vset_lane_f16, "V4sUsV4si", "n")
BUILTIN(__builtin_arm64_vset_lane_f32, "V2ffV2fi", "n")
BUILTIN(__builtin_arm64_vset_lane_f64, "V8ScdV8Sci", "n")
BUILTIN(__builtin_arm64_vsetq_lane_i8, "V16ScUcV16Sci", "n")
BUILTIN(__builtin_arm64_vsetq_lane_i16, "V8sUsV8si", "n")
BUILTIN(__builtin_arm64_vsetq_lane_i32, "V4iUiV4ii", "n")
BUILTIN(__builtin_arm64_vsetq_lane_f16, "V8sUsV8si", "n")
BUILTIN(__builtin_arm64_vsetq_lane_f32, "V4ffV4fi", "n")
BUILTIN(__builtin_arm64_vsetq_lane_f64, "V16ScdV16Sci", "n")
BUILTIN(__builtin_arm64_vset_lane_i64, "V1LLiULLiV1LLii", "n")
BUILTIN(__builtin_arm64_vsetq_lane_i64, "V2LLiULLiV2LLii", "n")
BUILTIN(__builtin_arm64_vsha1cq_u32, "V4iV4iUiV4i", "n")
BUILTIN(__builtin_arm64_vsha1h_u32, "UiUi", "n")
BUILTIN(__builtin_arm64_vsha1mq_u32, "V4iV4iUiV4i", "n")
BUILTIN(__builtin_arm64_vsha1pq_u32, "V4iV4iUiV4i", "n")
BUILTIN(__builtin_arm64_vsha1su0q_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsha1su1q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsha256hq_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsha256h2q_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsha256su0q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsha256su1q_v, "V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vshl_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vshlq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vshld_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vshld_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vshll_high_n_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vshll_n_v, "V16ScV8Scii", "n")
BUILTIN(__builtin_arm64_vshl_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vshl_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vshl_n_v, "V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vshlq_n_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vshrn_high_n_v, "V16ScV8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vshrn_n_v, "V8ScV16Scii", "n")
BUILTIN(__builtin_arm64_vshr_n_v, "V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vshrq_n_v, "V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vsli_n_v, "V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vsliq_n_v, "V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vsqrt_v, "V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vsqrtq_v, "V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsra_n_v, "V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vsraq_n_v, "V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vsri_n_v, "V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vsriq_n_v, "V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vst1q_v, "vv*V16Sci", "n")
BUILTIN(__builtin_arm64_vst1_v, "vv*V8Sci", "n")
BUILTIN(__builtin_arm64_vst1q_lane_v, "vv*V16Scii", "n")
BUILTIN(__builtin_arm64_vst1_lane_v, "vv*V8Scii", "n")
BUILTIN(__builtin_arm64_vst2q_v, "vv*V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vst2_v, "vv*V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vst2q_lane_v, "vv*V16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vst2_lane_v, "vv*V8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vst3q_v, "vv*V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vst3_v, "vv*V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vst3q_lane_v, "vv*V16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vst3_lane_v, "vv*V8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vst4q_v, "vv*V16ScV16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vst4_v, "vv*V8ScV8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vst4q_lane_v, "vv*V16ScV16ScV16ScV16Scii", "n")
BUILTIN(__builtin_arm64_vst4_lane_v, "vv*V8ScV8ScV8ScV8Scii", "n")
BUILTIN(__builtin_arm64_vsubhn_v, "V8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsubhn_high_v, "V16ScV8ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsubl_high_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vsubw_high_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vtbl1q_v, "V8ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtbl2q_v, "V8ScV16ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtbl3q_v, "V8ScV16ScV16ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtbl4q_v, "V8ScV16ScV16ScV16ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtbx1q_v, "V8ScV8ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtbx2q_v, "V8ScV8ScV16ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtbx3q_v, "V8ScV8ScV16ScV16ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtbx4q_v, "V8ScV8ScV16ScV16ScV16ScV16ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtrn_v, "vv*V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtrnq_v, "vv*V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vtrn1_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtrn1q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vtrn2_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtrn2q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vtst_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vtstq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vtstd_s64, "LLiLLiLLi", "n")
BUILTIN(__builtin_arm64_vtstd_u64, "ULLiULLiULLi", "n")
BUILTIN(__builtin_arm64_vusqadd_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vusqaddq_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vuzp_v, "vv*V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vuzpq_v, "vv*V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vuzp1_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vuzp1q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vuzp2_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vuzp2q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vzip_v, "vv*V8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vzipq_v, "vv*V16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vzip1_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vzip1q_v, "V16ScV16ScV16Sci", "n")
BUILTIN(__builtin_arm64_vzip2_v, "V8ScV8ScV8Sci", "n")
BUILTIN(__builtin_arm64_vzip2q_v, "V16ScV16ScV16Sci", "n")
#endif

#ifdef GET_NEON_OVERLOAD_CHECK
case ARM64::BI__builtin_arm64_vabal_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vabal_high_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vabd_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vabdq_v: mask = 0x7018700000000ULL; break;
case ARM64::BI__builtin_arm64_vabdl_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vabdl_high_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vabs_v: mask = 0x87ULL; break;
case ARM64::BI__builtin_arm64_vabsq_v: mask = 0x18F00000000ULL; break;
case ARM64::BI__builtin_arm64_vaddhn_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vaddhn_high_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vaddw_high_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vaesdq_v: mask = 0x1000000000000ULL; break;
case ARM64::BI__builtin_arm64_vaeseq_v: mask = 0x1000000000000ULL; break;
case ARM64::BI__builtin_arm64_vaesimcq_v: mask = 0x1000000000000ULL; break;
case ARM64::BI__builtin_arm64_vaesmcq_v: mask = 0x1000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcage_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcageq_v: mask = 0xC000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcagt_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcagtq_v: mask = 0xC000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcale_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcaleq_v: mask = 0xC000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcalt_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcaltq_v: mask = 0xC000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcls_v: mask = 0x7ULL; break;
case ARM64::BI__builtin_arm64_vclsq_v: mask = 0x700000000ULL; break;
case ARM64::BI__builtin_arm64_vclz_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vclzq_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vcnt_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vcntq_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vcopyq_lane_v: mask = 0xF018F00000000ULL; break;
case ARM64::BI__builtin_arm64_vcvta_s32_v: mask = 0x4ULL; break;
case ARM64::BI__builtin_arm64_vcvtaq_s32_v: mask = 0x400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtaq_s64_v: mask = 0x800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvta_u32_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcvtaq_u32_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtaq_u64_v: mask = 0x8000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtm_s32_v: mask = 0x4ULL; break;
case ARM64::BI__builtin_arm64_vcvtmq_s32_v: mask = 0x400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtmq_s64_v: mask = 0x800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtm_u32_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcvtmq_u32_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtmq_u64_v: mask = 0x8000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtn_s32_v: mask = 0x4ULL; break;
case ARM64::BI__builtin_arm64_vcvtnq_s32_v: mask = 0x400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtnq_s64_v: mask = 0x800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtn_u32_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcvtnq_u32_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtnq_u64_v: mask = 0x8000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtp_s32_v: mask = 0x4ULL; break;
case ARM64::BI__builtin_arm64_vcvtpq_s32_v: mask = 0x400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtpq_s64_v: mask = 0x800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtp_u32_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcvtpq_u32_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtpq_u64_v: mask = 0x8000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtx_f32_f64: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vcvtx_high_f32_f64: mask = 0x8000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtz_s32_v: mask = 0x4ULL; break;
case ARM64::BI__builtin_arm64_vcvtzq_s32_v: mask = 0x400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtzq_s64_v: mask = 0x800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtz_u32_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcvtzq_u32_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtzq_u64_v: mask = 0x8000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_f16_v: mask = 0x40ULL; break;
case ARM64::BI__builtin_arm64_vcvt_f32_v: mask = 0x40004ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_f32_v: mask = 0x4000400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_f32_f16: mask = 0x40ULL; break;
case ARM64::BI__builtin_arm64_vcvt_f32_f64: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_f64_v: mask = 0x8000800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_f64_f32: mask = 0x10000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_high_f32_f64: mask = 0x8000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_high_f64_f32: mask = 0x10000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_n_f32_v: mask = 0x40004ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_n_f32_v: mask = 0x4000400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_n_f64_v: mask = 0x8000800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_n_s32_v: mask = 0x4ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_n_s32_v: mask = 0x400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_n_s64_v: mask = 0x800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_n_u32_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_n_u32_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_n_u64_v: mask = 0x8000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_s32_v: mask = 0x4ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_s32_v: mask = 0x400000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_s64_v: mask = 0x800000000ULL; break;
case ARM64::BI__builtin_arm64_vcvt_u32_v: mask = 0x40000ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_u32_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vcvtq_u64_v: mask = 0x8000000000000ULL; break;
case ARM64::BI__builtin_arm64_vdiv_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vdivq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vext_v: mask = 0xF00BFULL; break;
case ARM64::BI__builtin_arm64_vextq_v: mask = 0xF01BF00000000ULL; break;
case ARM64::BI__builtin_arm64_vfma_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vfmaq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vfma_lane_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vfmaq_lane_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vfms_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vfmsq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vfms_lane_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vfmsq_lane_v: mask = 0x8000000000ULL; break;
case ARM64::BI__builtin_arm64_vhadd_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vhaddq_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vhsub_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vhsubq_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vld1_v: mask = 0xF01FFULL; PtrArgNum = 0; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld1q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld1_dup_v: mask = 0xF01FFULL; break;
case ARM64::BI__builtin_arm64_vld1q_dup_v: mask = 0xF01FF00000000ULL; break;
case ARM64::BI__builtin_arm64_vld1_lane_v: mask = 0xF01FFULL; break;
case ARM64::BI__builtin_arm64_vld1q_lane_v: mask = 0xF01FF00000000ULL; break;
case ARM64::BI__builtin_arm64_vld2_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld2q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld2_dup_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld2_lane_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld2q_lane_v: mask = 0xF01FF00000000ULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld3_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld3q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld3_dup_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld3_lane_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld3q_lane_v: mask = 0xF01FF00000000ULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld4_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld4q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld4_dup_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld4_lane_v: mask = 0xF01FFULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vld4q_lane_v: mask = 0xF01FF00000000ULL; PtrArgNum = 1; HasConstPtr = true; break;
case ARM64::BI__builtin_arm64_vmax_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vmaxq_v: mask = 0x7018700000000ULL; break;
case ARM64::BI__builtin_arm64_vmaxnm_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vmaxnmq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vpmaxnm_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vpmaxnmq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vmin_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vminq_v: mask = 0x7018700000000ULL; break;
case ARM64::BI__builtin_arm64_vminnm_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vminnmq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vpminnm_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vpminnmq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vmovl_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vmovn_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vmovn_high_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vmull_v: mask = 0xE002E00000000ULL; break;
case ARM64::BI__builtin_arm64_vmul_v: mask = 0x10ULL; break;
case ARM64::BI__builtin_arm64_vmulq_v: mask = 0x1000000000ULL; break;
case ARM64::BI__builtin_arm64_vmulx_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vmulxq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vmulx_lane_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vmulxq_lane_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vpadal_v: mask = 0xE000EULL; break;
case ARM64::BI__builtin_arm64_vpadalq_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vpadd_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vpaddq_v: mask = 0xF018F00000000ULL; break;
case ARM64::BI__builtin_arm64_vpaddl_v: mask = 0xE000EULL; break;
case ARM64::BI__builtin_arm64_vpaddlq_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vpmax_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vpmaxq_v: mask = 0x7018700000000ULL; break;
case ARM64::BI__builtin_arm64_vpmin_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vpminq_v: mask = 0x7018700000000ULL; break;
case ARM64::BI__builtin_arm64_vqabs_v: mask = 0x7ULL; break;
case ARM64::BI__builtin_arm64_vqabsq_v: mask = 0xF00000000ULL; break;
case ARM64::BI__builtin_arm64_vqadd_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vqaddq_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vqdmlal_high_v: mask = 0xC00000000ULL; break;
case ARM64::BI__builtin_arm64_vqdmlsl_high_v: mask = 0xC00000000ULL; break;
case ARM64::BI__builtin_arm64_vqdmulh_v: mask = 0x6ULL; break;
case ARM64::BI__builtin_arm64_vqdmulhq_v: mask = 0x600000000ULL; break;
case ARM64::BI__builtin_arm64_vqdmull_v: mask = 0xC00000000ULL; break;
case ARM64::BI__builtin_arm64_vqdmull_high_v: mask = 0xC00000000ULL; break;
case ARM64::BI__builtin_arm64_vqmovn_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vqmovn_high_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vqmovun_v: mask = 0x70000ULL; break;
case ARM64::BI__builtin_arm64_vqmovun_high_v: mask = 0x700000000ULL; break;
case ARM64::BI__builtin_arm64_vqneg_v: mask = 0x7ULL; break;
case ARM64::BI__builtin_arm64_vqnegq_v: mask = 0xF00000000ULL; break;
case ARM64::BI__builtin_arm64_vqrdmulh_v: mask = 0x6ULL; break;
case ARM64::BI__builtin_arm64_vqrdmulhq_v: mask = 0x600000000ULL; break;
case ARM64::BI__builtin_arm64_vqrshl_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vqrshlq_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vqrshrn_high_n_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vqrshrn_n_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vqrshrun_high_n_v: mask = 0x700000000ULL; break;
case ARM64::BI__builtin_arm64_vqrshrun_n_v: mask = 0x70000ULL; break;
case ARM64::BI__builtin_arm64_vqshl_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vqshlq_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vqshlu_n_v: mask = 0xF0000ULL; break;
case ARM64::BI__builtin_arm64_vqshluq_n_v: mask = 0xF000000000000ULL; break;
case ARM64::BI__builtin_arm64_vqshl_n_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vqshlq_n_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vqshrn_high_n_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vqshrn_n_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vqshrun_high_n_v: mask = 0x700000000ULL; break;
case ARM64::BI__builtin_arm64_vqshrun_n_v: mask = 0x70000ULL; break;
case ARM64::BI__builtin_arm64_vqsub_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vqsubq_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbl1q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbl2q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbl3q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbl4q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbx1q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbx2q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbx3q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vqtbx4q_v: mask = 0x1001100000000ULL; break;
case ARM64::BI__builtin_arm64_vraddhn_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vraddhn_high_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vrbit_v: mask = 0x10001ULL; break;
case ARM64::BI__builtin_arm64_vrbitq_v: mask = 0x1000100000000ULL; break;
case ARM64::BI__builtin_arm64_vrecpe_v: mask = 0x40080ULL; break;
case ARM64::BI__builtin_arm64_vrecpeq_v: mask = 0x4018000000000ULL; break;
case ARM64::BI__builtin_arm64_vrecps_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrecpsq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrhadd_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vrhaddq_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vrnd_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrndq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrnda_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrndaq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrndm_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrndmq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrndn_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrndnq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrndp_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrndpq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrndx_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrndxq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrndz_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrndzq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrshl_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vrshlq_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vrshrn_high_n_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vrshrn_n_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vrshr_n_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vrshrq_n_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vrsqrte_v: mask = 0x40080ULL; break;
case ARM64::BI__builtin_arm64_vrsqrteq_v: mask = 0x4018000000000ULL; break;
case ARM64::BI__builtin_arm64_vrsqrts_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vrsqrtsq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vrsra_n_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vrsraq_n_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vrsubhn_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vrsubhn_high_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vsha1su0q_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vsha1su1q_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vsha256hq_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vsha256h2q_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vsha256su0q_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vsha256su1q_v: mask = 0x4000000000000ULL; break;
case ARM64::BI__builtin_arm64_vshl_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vshlq_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vshll_high_n_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vshll_n_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vshl_n_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vshlq_n_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vshrn_high_n_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vshrn_n_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vshr_n_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vshrq_n_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vsli_n_v: mask = 0xF003FULL; break;
case ARM64::BI__builtin_arm64_vsliq_n_v: mask = 0xF003F00000000ULL; break;
case ARM64::BI__builtin_arm64_vsqrt_v: mask = 0x80ULL; break;
case ARM64::BI__builtin_arm64_vsqrtq_v: mask = 0x18000000000ULL; break;
case ARM64::BI__builtin_arm64_vsra_n_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vsraq_n_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vsri_n_v: mask = 0xF003FULL; break;
case ARM64::BI__builtin_arm64_vsriq_n_v: mask = 0xF003F00000000ULL; break;
case ARM64::BI__builtin_arm64_vst1_v: mask = 0xF01FFULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst1q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst1_lane_v: mask = 0xF00FFULL; break;
case ARM64::BI__builtin_arm64_vst1q_lane_v: mask = 0xF01FF00000000ULL; break;
case ARM64::BI__builtin_arm64_vst2_v: mask = 0xF01FFULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst2q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst2_lane_v: mask = 0x701F7ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst2q_lane_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst3_v: mask = 0xF01FFULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst3q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst3_lane_v: mask = 0x701F7ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst3q_lane_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst4_v: mask = 0xF01FFULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst4q_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst4_lane_v: mask = 0x701F7ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vst4q_lane_v: mask = 0xF01FF00000000ULL; PtrArgNum = 0; break;
case ARM64::BI__builtin_arm64_vsubhn_v: mask = 0x70007ULL; break;
case ARM64::BI__builtin_arm64_vsubhn_high_v: mask = 0x7000700000000ULL; break;
case ARM64::BI__builtin_arm64_vsubl_high_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vsubw_high_v: mask = 0xE000E00000000ULL; break;
case ARM64::BI__builtin_arm64_vtbl1q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtbl2q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtbl3q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtbl4q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtbx1q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtbx2q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtbx3q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtbx4q_v: mask = 0x10011ULL; break;
case ARM64::BI__builtin_arm64_vtrn_v: mask = 0x700B7ULL; break;
case ARM64::BI__builtin_arm64_vtrnq_v: mask = 0x700B700000000ULL; break;
case ARM64::BI__builtin_arm64_vtrn1_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vtrn1q_v: mask = 0xF018F00000000ULL; break;
case ARM64::BI__builtin_arm64_vtrn2_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vtrn2q_v: mask = 0xF018F00000000ULL; break;
case ARM64::BI__builtin_arm64_vtst_v: mask = 0x70000ULL; break;
case ARM64::BI__builtin_arm64_vtstq_v: mask = 0xF000000000000ULL; break;
case ARM64::BI__builtin_arm64_vusqadd_v: mask = 0xF000FULL; break;
case ARM64::BI__builtin_arm64_vusqaddq_v: mask = 0xF000F00000000ULL; break;
case ARM64::BI__builtin_arm64_vuzp_v: mask = 0x700B7ULL; break;
case ARM64::BI__builtin_arm64_vuzpq_v: mask = 0x700B700000000ULL; break;
case ARM64::BI__builtin_arm64_vuzp1_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vuzp1q_v: mask = 0xF018F00000000ULL; break;
case ARM64::BI__builtin_arm64_vuzp2_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vuzp2q_v: mask = 0xF018F00000000ULL; break;
case ARM64::BI__builtin_arm64_vzip_v: mask = 0x700B7ULL; break;
case ARM64::BI__builtin_arm64_vzipq_v: mask = 0x700B700000000ULL; break;
case ARM64::BI__builtin_arm64_vzip1_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vzip1q_v: mask = 0xF018F00000000ULL; break;
case ARM64::BI__builtin_arm64_vzip2_v: mask = 0x70087ULL; break;
case ARM64::BI__builtin_arm64_vzip2q_v: mask = 0xF018F00000000ULL; break;
#endif

#ifdef GET_NEON_IMMEDIATE_CHECK
static inline bool
ARM64GetNEONImmediateCheckValues(unsigned BuiltinID, unsigned TV,
                            unsigned Idx, unsigned &i, unsigned &l,
                            unsigned &u) {
  switch (BuiltinID) {
  default: return false;
  case ARM64::BI__builtin_arm64_vcopyq_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV);
    return true;
    case 1: i = 3; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtd_n_f64_s64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 63;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtd_n_f64_u64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 63;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtd_n_s64_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 63;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtd_n_u64_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 63;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvts_n_f32_s32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvts_n_f32_u32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvts_n_s32_f32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvts_n_u32_f32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvt_n_f32_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtq_n_f32_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtq_n_f64_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 63;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvt_n_s32_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtq_n_s32_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtq_n_s64_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 63;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvt_n_u32_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtq_n_u32_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 31;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vcvtq_n_u64_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = 63;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdupb_lane_s8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 15;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdupb_lane_u8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 15;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdupd_lane_s64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdupd_lane_u64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdupd_lane_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vduph_lane_s16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vduph_lane_u16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdups_lane_s32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdups_lane_u32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdups_lane_f32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vdup_lane_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vext_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vextq_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vfma_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 3; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vfmaq_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 3; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vfms_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 3; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vfmsq_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 3; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_s8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_s16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_s32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_s64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 0;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_u8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_u16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_u32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_u64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 0;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_f32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 0;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_p8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vget_lane_p16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_s8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 15;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_s16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_s32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_s64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_u8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 15;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_u16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_u32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_u64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_f32:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_p8:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 15;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vgetq_lane_p16:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld1q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld1_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld2q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 4; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld2_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 4; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld3q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 5; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld3_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 5; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld4q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 6; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vld4_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 6; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vmulx_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vmulxq_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqdmullh_lane_s16:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqdmulls_lane_s32:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqrshrn_high_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqrshrn_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqrshrun_high_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqrshrun_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshlu_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshluq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshl_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshlq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshrn_high_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshrn_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshrun_high_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vqshrun_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vrshrn_high_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vrshrn_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vrshr_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vrshrq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vrsra_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vrsraq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vset_lane_i8:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vset_lane_i16:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vset_lane_i32:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vset_lane_f16:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vset_lane_f32:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vset_lane_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 0;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsetq_lane_i8:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 15;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsetq_lane_i16:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsetq_lane_i32:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsetq_lane_f16:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 7;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsetq_lane_f32:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 3;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsetq_lane_f64:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vset_lane_i64:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 0;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsetq_lane_i64:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = 1;
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshll_high_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshll_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshl_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshlq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshrn_high_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshrn_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshr_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vshrq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 1; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsli_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsliq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsra_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsraq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsri_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vsriq_n_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; l = 1; u = RFT(TV, true);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst1q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst1_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 2; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst2q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 3; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst2_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 3; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst3q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 4; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst3_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 4; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst4q_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 5; u = RFT(TV);
    return true;
    } // End switch immediate idx
  case ARM64::BI__builtin_arm64_vst4_lane_v:
    switch (Idx) {
    default: return false;
    case 0: i = 5; u = RFT(TV);
    return true;
    } // End switch immediate idx
  } // End switch
  llvm_unreachable("Builtin not handled in switch!");
}
#endif // GET_NEON_IMMEDIATE_CHECK

