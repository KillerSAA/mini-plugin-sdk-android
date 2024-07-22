#pragma once

#include <game_sa/CVector.h>
#include <game_sa/CEntity.h>

struct CCoverPoint
{
  int8_t m_Type;
  int8_t m_Usage;
  uint8_t m_CoverDirection;
  int8_t undefined; // ??
  CVector m_Coors;
  CEntity *m_pEntity;
  int *m_pPedsUsingThisCover[2]; // CPed
};
