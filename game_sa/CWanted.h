#pragma once

#include <game_sa/eWantedLevel.h>
#include "CCrimeBeingQd.h"
#include "CAEPoliceScannerAudioEntity.h"

struct CWanted
{
  int32_t m_nWantedLevel;
  int32_t m_nWantedLevelBeforeParole;
  uint32_t m_LastTimeWantedDecreased;
  uint32_t m_LastTimeWantedLevelChanged;
  uint32_t m_TimeOfParole;
  float m_fMultiplier;
  uint8_t m_nCopsInPursuit;
  uint8_t m_nMaxCopsInPursuit;
  uint8_t m_nMaxCopCarsInPursuit;
  uint8_t m_nCopsBeatingSuspect;
  uint16_t m_nChanceOnRoadBlock;
  uint8_t m_PoliceBackOff : 1;
  uint8_t m_PoliceBackOffGarage : 1;
  uint8_t m_EverybodyBackOff : 1;
  uint8_t m_swatRequired : 1;
  uint8_t m_fbiRequired : 1;
  uint8_t m_armyRequired : 1;
  int8_t undefined; // ??
  uint32_t current_chase_time;
  uint32_t current_chase_time_counter;
  bool m_bTimeCounting;
  char undefined1[3]; // ??
  eWantedLevel m_WantedLevel;
  eWantedLevel m_WantedLevelBeforeParole;
  CCrimeBeingQd CrimesBeingQd[16];
  int *m_pCopsInPursuit[10]; // CCopPed
  CAEPoliceScannerAudioEntity m_PoliceScannerAudioEntity;
  bool m_bStoredPoliceBackOff;
  char undefined2[3]; // ??
};