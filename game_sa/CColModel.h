#pragma once

#include "CCollisionData.h"
#include "CBoundingBox.h"

struct CColModel : CBoundingBox
{
  uint8_t m_level;
  uint8_t m_hasCollisionVolumes : 1;
  uint8_t m_useSingleAlloc : 1;
  uint8_t m_deleteUncompressed : 1;
  char undefined[2]; // ??
  CCollisionData *m_pColData;
};