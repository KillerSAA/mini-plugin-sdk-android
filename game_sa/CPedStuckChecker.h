#pragma once 

#include <game_sa/CVector.h>

struct CPedStuckChecker
{
  CVector m_vecPreviousPos;
  uint16_t m_nStuckCounter;
  uint16_t m_nStuck;
};
