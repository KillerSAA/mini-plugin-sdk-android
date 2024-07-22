#pragma once

#include <game_sa/CAEAudioEntity.h>
#include <game_sa/CAESound.h>

struct CAETwinLoopSoundEntity : CAEAudioEntity
{
  int16_t m_BankSlotID;
  int16_t m_FirstSoundID;
  int16_t m_SecondSoundID;
  int8_t m_undefined; // ??
  int8_t m_undefined1; // ??
  CAEAudioEntity *m_pAudioEntity;
  bool m_bCurrentlyInUse;
  int8_t m_undefined2; // ??
  int16_t m_nFirstLength;
  int16_t m_nSecondLength;
  uint16_t m_MinSwapTime;
  uint16_t m_MaxSwapTime;
  int8_t m_undefined3; // ??
  int8_t m_undefined4; // ??
  uint32_t m_SwapTime;
  bool m_bPlayingFirst;
  int8_t m_undefined5; // ??
  int16_t m_StartPercentFirst;
  int16_t m_StartPercentSecond;
  int8_t m_undefined6; // ??
  int8_t m_undefined7; // ??
  CAESound *m_pFirstSoundPtr;
  CAESound *m_pSecondSoundPtr;
};
