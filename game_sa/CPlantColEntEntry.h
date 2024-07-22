#pragma once

#include "CEntity.h"
#include "CPlantLocTri.h"

struct CPlantColEntEntry
{
  CEntity *m_pEntity;
  CPlantLocTri **m_LocTriArray;
  uint16_t m_nNumTris;
  char undefined[2]; // ??
  CPlantColEntEntry *m_pNextEntry;
  CPlantColEntEntry *m_pPrevEntry;
};
