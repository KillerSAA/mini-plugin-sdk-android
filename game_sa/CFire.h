#pragma once

#include <game_sa/FxSystem_c.h>
#include <game_sa/CVector.h>
#include <game_sa/CEntity.h>

struct CFire
{
  uint8_t m_bActive : 1;
  uint8_t m_bCreatedByScript : 1;
  uint8_t m_bMakesNoise : 1;
  uint8_t m_bBeingExtinguished : 1;
  uint8_t m_bFirstGeneration : 1;
  int8_t m_undefined; // ??
  uint16_t ScriptReferenceIndex;
  CVector m_vLocation;
  CEntity *m_pEntityOnFire;
  CEntity *m_pEntityStartedFire;
  uint32_t m_nTimeToBurn;
  float m_Strength;
  int8_t m_nNumGenerationsAllowed;
  uint8_t m_RemovalDist;
  char undefined1[2]; // ??
  FxSystem_c *m_fxSysPtr;
};