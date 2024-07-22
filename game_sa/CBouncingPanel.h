#pragma once

#include <game_sa/CVector.h>

struct CBouncingPanel
{
  int16_t m_nComponentIndex;
  int16_t m_nBounceAxis;
  float m_fBounceApplyMult;
  CVector m_vecBounceAngle;
  CVector m_vecBounceTurnSpeed;
};
