#pragma once

#include "CPed.h"
#include "LimbOrientation.h"

struct CPedIK
{
  int *m_pPed; // CPed
  LimbOrientation m_torsoOrien;
  float m_fSlopePitch;
  float m_fSlopePitchLimitMult;
  float m_fSlopeRoll;
  float m_fBodyRoll;
  uint32_t m_flags;
};
