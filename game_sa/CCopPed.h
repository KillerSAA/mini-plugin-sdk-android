#pragma once

#include <game_sa/CPed.h>

enum eCopType : int32_t
{
  COPTYPE_NORMAL = 0x0,
  COPTYPE_MOTORCYCLE = 0x1,
  COPTYPE_SWAT = 0x2,
  COPTYPE_HELI_SWAT = 0x3,
  COPTYPE_FBI = 0x4,
  COPTYPE_ARMY = 0x5,
  COPTYPE_MIAMIVICE = 0x6,
  COPTYPE_RURAL = 0x7,
};

struct CCopPed : CPed
{
  bool m_bRoadBlockCop;
  bool m_bRemoveIfNonVisible;
  char undefined[2]; // ??
  eCopType m_CopType;
  int32_t m_nStuckCounter;
  CCopPed *m_pPartner;
  int *m_aCriminalsImAfter[5]; // CPed
  bool m_bIAmDriver;
  char undefined1[3]; // ??
};
