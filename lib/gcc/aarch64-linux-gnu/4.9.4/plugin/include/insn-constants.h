/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SFP_REGNUM 64
#define R12_REGNUM 12
#define CC_REGNUM 66
#define R29_REGNUM 29
#define R15_REGNUM 15
#define V15_REGNUM 47
#define R2_REGNUM 2
#define R22_REGNUM 22
#define R18_REGNUM 18
#define IP0_REGNUM 16
#define R5_REGNUM 5
#define R25_REGNUM 25
#define R11_REGNUM 11
#define V31_REGNUM 63
#define R9_REGNUM 9
#define V0_REGNUM 32
#define R14_REGNUM 14
#define SP_REGNUM 31
#define R10_REGNUM 10
#define R1_REGNUM 1
#define R21_REGNUM 21
#define R17_REGNUM 17
#define R20_REGNUM 20
#define R4_REGNUM 4
#define R24_REGNUM 24
#define R30_REGNUM 30
#define R8_REGNUM 8
#define R27_REGNUM 27
#define R13_REGNUM 13
#define AP_REGNUM 65
#define R0_REGNUM 0
#define R6_REGNUM 6
#define LR_REGNUM 30
#define R28_REGNUM 28
#define R16_REGNUM 16
#define R3_REGNUM 3
#define R23_REGNUM 23
#define R19_REGNUM 19
#define IP1_REGNUM 17
#define R7_REGNUM 7
#define R26_REGNUM 26

enum unspec {
  UNSPEC_CASESI = 0,
  UNSPEC_CRC32B = 1,
  UNSPEC_CRC32CB = 2,
  UNSPEC_CRC32CH = 3,
  UNSPEC_CRC32CW = 4,
  UNSPEC_CRC32CX = 5,
  UNSPEC_CRC32H = 6,
  UNSPEC_CRC32W = 7,
  UNSPEC_CRC32X = 8,
  UNSPEC_FRECPE = 9,
  UNSPEC_FRECPS = 10,
  UNSPEC_FRECPX = 11,
  UNSPEC_FRINTA = 12,
  UNSPEC_FRINTI = 13,
  UNSPEC_FRINTM = 14,
  UNSPEC_FRINTN = 15,
  UNSPEC_FRINTP = 16,
  UNSPEC_FRINTX = 17,
  UNSPEC_FRINTZ = 18,
  UNSPEC_GOTSMALLPIC = 19,
  UNSPEC_GOTSMALLTLS = 20,
  UNSPEC_GOTTINYPIC = 21,
  UNSPEC_LD1 = 22,
  UNSPEC_LD2 = 23,
  UNSPEC_LD2_DUP = 24,
  UNSPEC_LD3 = 25,
  UNSPEC_LD3_DUP = 26,
  UNSPEC_LD4 = 27,
  UNSPEC_LD4_DUP = 28,
  UNSPEC_LD2_LANE = 29,
  UNSPEC_LD3_LANE = 30,
  UNSPEC_LD4_LANE = 31,
  UNSPEC_MB = 32,
  UNSPEC_NOP = 33,
  UNSPEC_PRLG_STK = 34,
  UNSPEC_RBIT = 35,
  UNSPEC_SISD_NEG = 36,
  UNSPEC_SISD_SSHL = 37,
  UNSPEC_SISD_USHL = 38,
  UNSPEC_SSHL_2S = 39,
  UNSPEC_ST1 = 40,
  UNSPEC_ST2 = 41,
  UNSPEC_ST3 = 42,
  UNSPEC_ST4 = 43,
  UNSPEC_ST2_LANE = 44,
  UNSPEC_ST3_LANE = 45,
  UNSPEC_ST4_LANE = 46,
  UNSPEC_TLS = 47,
  UNSPEC_TLSDESC = 48,
  UNSPEC_USHL_2S = 49,
  UNSPEC_VSTRUCTDUMMY = 50,
  UNSPEC_SP_SET = 51,
  UNSPEC_SP_TEST = 52,
  UNSPEC_ASHIFT_SIGNED = 53,
  UNSPEC_ASHIFT_UNSIGNED = 54,
  UNSPEC_FMAX = 55,
  UNSPEC_FMAXNMV = 56,
  UNSPEC_FMAXV = 57,
  UNSPEC_FMIN = 58,
  UNSPEC_FMINNMV = 59,
  UNSPEC_FMINV = 60,
  UNSPEC_FADDV = 61,
  UNSPEC_ADDV = 62,
  UNSPEC_SMAXV = 63,
  UNSPEC_SMINV = 64,
  UNSPEC_UMAXV = 65,
  UNSPEC_UMINV = 66,
  UNSPEC_SHADD = 67,
  UNSPEC_UHADD = 68,
  UNSPEC_SRHADD = 69,
  UNSPEC_URHADD = 70,
  UNSPEC_SHSUB = 71,
  UNSPEC_UHSUB = 72,
  UNSPEC_SRHSUB = 73,
  UNSPEC_URHSUB = 74,
  UNSPEC_ADDHN = 75,
  UNSPEC_RADDHN = 76,
  UNSPEC_SUBHN = 77,
  UNSPEC_RSUBHN = 78,
  UNSPEC_ADDHN2 = 79,
  UNSPEC_RADDHN2 = 80,
  UNSPEC_SUBHN2 = 81,
  UNSPEC_RSUBHN2 = 82,
  UNSPEC_SQDMULH = 83,
  UNSPEC_SQRDMULH = 84,
  UNSPEC_PMUL = 85,
  UNSPEC_USQADD = 86,
  UNSPEC_SUQADD = 87,
  UNSPEC_SQXTUN = 88,
  UNSPEC_SQXTN = 89,
  UNSPEC_UQXTN = 90,
  UNSPEC_SSRA = 91,
  UNSPEC_USRA = 92,
  UNSPEC_SRSRA = 93,
  UNSPEC_URSRA = 94,
  UNSPEC_SRSHR = 95,
  UNSPEC_URSHR = 96,
  UNSPEC_SQSHLU = 97,
  UNSPEC_SQSHL = 98,
  UNSPEC_UQSHL = 99,
  UNSPEC_SQSHRUN = 100,
  UNSPEC_SQRSHRUN = 101,
  UNSPEC_SQSHRN = 102,
  UNSPEC_UQSHRN = 103,
  UNSPEC_SQRSHRN = 104,
  UNSPEC_UQRSHRN = 105,
  UNSPEC_SSHL = 106,
  UNSPEC_USHL = 107,
  UNSPEC_SRSHL = 108,
  UNSPEC_URSHL = 109,
  UNSPEC_SQRSHL = 110,
  UNSPEC_UQRSHL = 111,
  UNSPEC_SSLI = 112,
  UNSPEC_USLI = 113,
  UNSPEC_SSRI = 114,
  UNSPEC_USRI = 115,
  UNSPEC_SSHLL = 116,
  UNSPEC_USHLL = 117,
  UNSPEC_ADDP = 118,
  UNSPEC_TBL = 119,
  UNSPEC_CONCAT = 120,
  UNSPEC_ZIP1 = 121,
  UNSPEC_ZIP2 = 122,
  UNSPEC_UZP1 = 123,
  UNSPEC_UZP2 = 124,
  UNSPEC_TRN1 = 125,
  UNSPEC_TRN2 = 126,
  UNSPEC_EXT = 127,
  UNSPEC_REV64 = 128,
  UNSPEC_REV32 = 129,
  UNSPEC_REV16 = 130,
  UNSPEC_AESE = 131,
  UNSPEC_AESD = 132,
  UNSPEC_AESMC = 133,
  UNSPEC_AESIMC = 134,
  UNSPEC_SHA1C = 135,
  UNSPEC_SHA1M = 136,
  UNSPEC_SHA1P = 137,
  UNSPEC_SHA1H = 138,
  UNSPEC_SHA1SU0 = 139,
  UNSPEC_SHA1SU1 = 140,
  UNSPEC_SHA256H = 141,
  UNSPEC_SHA256H2 = 142,
  UNSPEC_SHA256SU0 = 143,
  UNSPEC_SHA256SU1 = 144,
  UNSPEC_PMULL = 145,
  UNSPEC_PMULL2 = 146
};
#define NUM_UNSPEC_VALUES 147
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_LX = 5,
  UNSPECV_SX = 6,
  UNSPECV_LDA = 7,
  UNSPECV_STL = 8,
  UNSPECV_ATOMIC_CMPSW = 9,
  UNSPECV_ATOMIC_EXCHG = 10,
  UNSPECV_ATOMIC_OP = 11
};
#define NUM_UNSPECV_VALUES 12
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
