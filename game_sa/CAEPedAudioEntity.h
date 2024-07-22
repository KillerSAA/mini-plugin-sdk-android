#pragma once

#include <game_sa/CPed.h>
#include <game_sa/CAESound.h>
#include <game_sa/CAETwinLoopSoundEntity.h>
#include <game_sa/CAEAudioEntity.h>

struct CAEPedSpeechAudioEntity : CAEAudioEntity
{
  CAESound *SoundPtrs[5];
  bool b_Initialised;
  int8_t undefined; // ??
  int16_t m_PedType;
  int16_t m_VoiceID;
  int16_t m_bFemale;
  bool m_bPlayingSpeech;
  bool m_bSpeechDisabled;
  bool m_bSpeechDisabledForScriptSpeech;
  bool m_bFrontEnd;
  bool m_bForceAudible;
  char undefined1[3]; // ??
  CAESound *m_pSound;
  int16_t m_SoundID;
  int16_t m_BankID;
  int16_t m_PedSpeechSlotID;
  char undefined2[2]; // ??
  float m_fEventVolume;
  int16_t m_LastUsedGlobalSpeechContext;
  char undefined3[2]; // ??
  uint32_t m_NextTimeCanSayPain[19];
};

struct CAEPedAudioEntity : CAEAudioEntity
{
  bool m_bInitialised;
  int8_t undefined; // ??
  int16_t m_nLastSwimSplashSoundID;
  uint32_t m_nLastSwimWakeTriggerTimeMs;
  float m_fCurrentJetPackThrustVolume;
  float m_fCurrentJetPackGasVolume;
  float m_fCurrentJetPackRoarVolume;
  float m_fCurrentJetPackRoarFrequency;
  int *m_pParentPed; // CPed
  bool m_bJetPackOn;
  char undefined1[3]; // ??
  CAESound *m_pJetPackThrustSound;
  CAESound *m_pJetPackGasSound;
  CAESound *m_pJetPackRoarSound;
  CAETwinLoopSoundEntity m_ShirtFlapTwinLoopSound;
  CAESound *m_pWindRushSound;
  float m_fCurrentWindRushVolume;
  float m_fCurrentShirtFlapVolume;
};
