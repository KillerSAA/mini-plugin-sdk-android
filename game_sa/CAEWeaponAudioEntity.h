#pragma once

#include <game_sa/CAEAudioEntity.h>
#include <game_sa/CAESound.h>

struct CAEWeaponAudioEntity : CAEAudioEntity
{
  bool m_bMiniGunSpinActive;
  bool m_bMiniGunFireActive;
  int8_t m_nLastWeaponPlaneFrequencyIndex;
  int8_t m_nMiniGunState;
  int8_t m_nChainsawState;
  char undefined[3]; // ??
  uint32_t m_nLastFlameThrowerFireTimeMs;
  uint32_t m_nLastSprayCanFireTimeMs;
  uint32_t m_nLastFireExtFireTimeMs;
  uint32_t m_nLastMiniGunFireTimeMs;
  uint32_t m_nLastChainsawEventTimeMs;
  uint32_t m_nLastGunFireTimeMs;
  CAESound *m_pFlameThrowerIdleGasLoopSound;
};