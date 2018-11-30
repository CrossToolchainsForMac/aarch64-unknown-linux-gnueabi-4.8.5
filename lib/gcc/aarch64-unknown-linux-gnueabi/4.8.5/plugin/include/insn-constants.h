/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define R13_REGNUM 13
#define R7_REGNUM 7
#define R16_REGNUM 16
#define R23_REGNUM 23
#define R19_REGNUM 19
#define R26_REGNUM 26
#define R29_REGNUM 29
#define R0_REGNUM 0
#define R3_REGNUM 3
#define SP_REGNUM 31
#define R6_REGNUM 6
#define R9_REGNUM 9
#define V0_REGNUM 32
#define R8_REGNUM 8
#define V15_REGNUM 47
#define R11_REGNUM 11
#define R21_REGNUM 21
#define R14_REGNUM 14
#define R17_REGNUM 17
#define R24_REGNUM 24
#define R27_REGNUM 27
#define R4_REGNUM 4
#define V31_REGNUM 63
#define AP_REGNUM 65
#define R20_REGNUM 20
#define R30_REGNUM 30
#define LR_REGNUM 30
#define R1_REGNUM 1
#define SFP_REGNUM 64
#define R12_REGNUM 12
#define IP0_REGNUM 16
#define R15_REGNUM 15
#define R22_REGNUM 22
#define CC_REGNUM 66
#define R18_REGNUM 18
#define R25_REGNUM 25
#define R28_REGNUM 28
#define R2_REGNUM 2
#define IP1_REGNUM 17
#define R10_REGNUM 10
#define R5_REGNUM 5

enum unspec {
  UNSPEC_CASESI = 0,
  UNSPEC_CLS = 1,
  UNSPEC_FRINTA = 2,
  UNSPEC_FRINTI = 3,
  UNSPEC_FRINTM = 4,
  UNSPEC_FRINTP = 5,
  UNSPEC_FRINTX = 6,
  UNSPEC_FRINTZ = 7,
  UNSPEC_GOTSMALLPIC = 8,
  UNSPEC_GOTSMALLTLS = 9,
  UNSPEC_LD2 = 10,
  UNSPEC_LD3 = 11,
  UNSPEC_LD4 = 12,
  UNSPEC_MB = 13,
  UNSPEC_NOP = 14,
  UNSPEC_PRLG_STK = 15,
  UNSPEC_RBIT = 16,
  UNSPEC_ST2 = 17,
  UNSPEC_ST3 = 18,
  UNSPEC_ST4 = 19,
  UNSPEC_TLS = 20,
  UNSPEC_TLSDESC = 21,
  UNSPEC_VSTRUCTDUMMY = 22,
  UNSPEC_ASHIFT_SIGNED = 23,
  UNSPEC_ASHIFT_UNSIGNED = 24,
  UNSPEC_FMAXV = 25,
  UNSPEC_FMINV = 26,
  UNSPEC_FADDV = 27,
  UNSPEC_ADDV = 28,
  UNSPEC_SMAXV = 29,
  UNSPEC_SMINV = 30,
  UNSPEC_UMAXV = 31,
  UNSPEC_UMINV = 32,
  UNSPEC_SHADD = 33,
  UNSPEC_UHADD = 34,
  UNSPEC_SRHADD = 35,
  UNSPEC_URHADD = 36,
  UNSPEC_SHSUB = 37,
  UNSPEC_UHSUB = 38,
  UNSPEC_SRHSUB = 39,
  UNSPEC_URHSUB = 40,
  UNSPEC_ADDHN = 41,
  UNSPEC_RADDHN = 42,
  UNSPEC_SUBHN = 43,
  UNSPEC_RSUBHN = 44,
  UNSPEC_ADDHN2 = 45,
  UNSPEC_RADDHN2 = 46,
  UNSPEC_SUBHN2 = 47,
  UNSPEC_RSUBHN2 = 48,
  UNSPEC_SQDMULH = 49,
  UNSPEC_SQRDMULH = 50,
  UNSPEC_PMUL = 51,
  UNSPEC_USQADD = 52,
  UNSPEC_SUQADD = 53,
  UNSPEC_SQXTUN = 54,
  UNSPEC_SQXTN = 55,
  UNSPEC_UQXTN = 56,
  UNSPEC_SSRA = 57,
  UNSPEC_USRA = 58,
  UNSPEC_SRSRA = 59,
  UNSPEC_URSRA = 60,
  UNSPEC_SRSHR = 61,
  UNSPEC_URSHR = 62,
  UNSPEC_SQSHLU = 63,
  UNSPEC_SQSHL = 64,
  UNSPEC_UQSHL = 65,
  UNSPEC_SQSHRUN = 66,
  UNSPEC_SQRSHRUN = 67,
  UNSPEC_SQSHRN = 68,
  UNSPEC_UQSHRN = 69,
  UNSPEC_SQRSHRN = 70,
  UNSPEC_UQRSHRN = 71,
  UNSPEC_SSHL = 72,
  UNSPEC_USHL = 73,
  UNSPEC_SRSHL = 74,
  UNSPEC_URSHL = 75,
  UNSPEC_SQRSHL = 76,
  UNSPEC_UQRSHL = 77,
  UNSPEC_SSLI = 78,
  UNSPEC_USLI = 79,
  UNSPEC_SSRI = 80,
  UNSPEC_USRI = 81,
  UNSPEC_SSHLL = 82,
  UNSPEC_USHLL = 83,
  UNSPEC_ADDP = 84,
  UNSPEC_FMAX = 85,
  UNSPEC_FMIN = 86,
  UNSPEC_BSL = 87,
  UNSPEC_TBL = 88,
  UNSPEC_CONCAT = 89,
  UNSPEC_ZIP1 = 90,
  UNSPEC_ZIP2 = 91,
  UNSPEC_UZP1 = 92,
  UNSPEC_UZP2 = 93,
  UNSPEC_TRN1 = 94,
  UNSPEC_TRN2 = 95
};
#define NUM_UNSPEC_VALUES 96
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_LX = 1,
  UNSPECV_SX = 2,
  UNSPECV_LDA = 3,
  UNSPECV_STL = 4,
  UNSPECV_ATOMIC_CMPSW = 5,
  UNSPECV_ATOMIC_EXCHG = 6,
  UNSPECV_ATOMIC_OP = 7
};
#define NUM_UNSPECV_VALUES 8
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
