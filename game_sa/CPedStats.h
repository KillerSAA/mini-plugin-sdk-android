#pragma once

enum ePedStats : int32_t
{
  PEDSTAT_PLAYER = 0x0,
  PEDSTAT_COP = 0x1,
  PEDSTAT_MEDIC = 0x2,
  PEDSTAT_FIRE = 0x3,
  PEDSTAT_GANG1 = 0x4,
  PEDSTAT_GANG2 = 0x5,
  PEDSTAT_GANG3 = 0x6,
  PEDSTAT_GANG4 = 0x7,
  PEDSTAT_GANG5 = 0x8,
  PEDSTAT_GANG6 = 0x9,
  PEDSTAT_GANG7 = 0xA,
  PEDSTAT_GANG8 = 0xB,
  PEDSTAT_GANG9 = 0xC,
  PEDSTAT_GANG10 = 0xD,
  PEDSTAT_STREET_GUY = 0xE,
  PEDSTAT_SUIT_GUY = 0xF,
  PEDSTAT_SENSIBLE_GUY = 0x10,
  PEDSTAT_GEEK_GUY = 0x11,
  PEDSTAT_OLD_GUY = 0x12,
  PEDSTAT_TOUGH_GUY = 0x13,
  PEDSTAT_STREET_GIRL = 0x14,
  PEDSTAT_SUIT_GIRL = 0x15,
  PEDSTAT_SENSIBLE_GIRL = 0x16,
  PEDSTAT_GEEK_GIRL = 0x17,
  PEDSTAT_OLD_GIRL = 0x18,
  PEDSTAT_TOUGH_GIRL = 0x19,
  PEDSTAT_TRAMP_MALE = 0x1A,
  PEDSTAT_TRAMP_FEMALE = 0x1B,
  PEDSTAT_TOURIST = 0x1C,
  PEDSTAT_PROSTITUTE = 0x1D,
  PEDSTAT_CRIMINAL = 0x1E,
  PEDSTAT_BUSKER = 0x1F,
  PEDSTAT_TAXIDRIVER = 0x20,
  PEDSTAT_PSYCHO = 0x21,
  PEDSTAT_STEWARD = 0x22,
  PEDSTAT_SPORTSFAN = 0x23,
  PEDSTAT_SHOPPER = 0x24,
  PEDSTAT_OLDSHOPPER = 0x25,
  PEDSTAT_BEACH_GUY = 0x26,
  PEDSTAT_BEACH_GIRL = 0x27,
  PEDSTAT_SKATER = 0x28,
  PEDSTAT_STD_MISSION = 0x29,
  PEDSTAT_COWARD = 0x2A,
  PEDSTAT_NUM = 0x2B,
};

/* 462 */
struct CPedStats
{
  ePedStats m_ePedStatType;
  uint8_t m_sPedStatName[24];
  float m_fFleeDistance;
  float m_fMaxHeadingChange;
  int8_t m_nFear;
  int8_t m_nTemper;
  int8_t m_nLawfulness;
  int8_t m_nSexiness;
  float m_fAttackMult;
  float m_fDefendMult;
  uint16_t m_nStatFlags;
  int8_t m_iDefaultDecisionMaker;
  int8_t undefined; // ??
};
