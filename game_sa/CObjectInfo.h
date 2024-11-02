#pragma once

#include "rw/RwVectors.h"
#include "FxSystem_c.h"

struct CObjectInfo
{
  float m_fMass;
  float m_fTurnMass;
  float m_fAirResistance;
  float m_fElasticity;
  float m_fBuoyancyConstant;
  float m_fUprootLimit;
  float m_fCollisionDamageMultiplier;
  uint8_t m_nCollisionDamageEffect;
  uint8_t m_nCollisionSpecial;
  uint8_t m_CamAvoidThis;
  bool m_causesExplosion;
  uint8_t m_fxMode;
  char undefined[3]; // ??
  RwV3d m_fxOffset;
  FxSystemBP_c *m_pFxSysBP;
  float m_smashMult;
  CVector m_vecBreakVelocity;
  float m_breakVelRand;
  int32_t m_gunBreakMode;
  bool m_produceSparks;
  char undefined1[3]; // ??
};