#pragma once

#include <game_sa/CVector.h>
#include <game_sa/CAEAudioEntity.h>
#include <game_sa/CEntity.h>

struct CAEAudioEntity;

typedef int tAudioEvent;
struct CAESound {
  int16_t m_BankSlotID;
  int16_t m_SoundID;
  CAEAudioEntity *m_pAudioEntity;
  CEntity *m_pPhysicalEntity;
  tAudioEvent m_AudioEvent;
  float m_ClientVariable;
  float m_EmittedVolume;
  float m_RollOffFactor;
  float m_RelativeFrequency;
  float m_FrequencyVariance;
  CVector m_Position;
  CVector m_PositionLastFrame;
  uint32_t m_FramePositionLastUpdated;
  uint32_t m_TimePositionUpdated;
  uint32_t m_TimeLastPositionUpdated;
  float m_fDistanceFromCamera;
  float m_fDistanceFromCameraLastFrame;
  float m_Doppler;
  uint8_t m_FrameDelay;
  int8_t m_undefined; // ?? 
  uint16_t m_Environment;
  bool m_bCurrentlyInUse;
  bool m_bAudioHardwareAware;
  int16_t m_nPlayTime;
  bool m_bPhysicallyPlaying;
  float m_ListenerVolume;
  float m_RelativePlaybackFrequency;
  bool m_bRequestedStopped; // antes era bool16(wtf? isso nem sequer existe)
  int8_t m_undefined1; // ??
  int8_t m_undefined2; // ?? 
  int8_t m_undefined3; // ?? 
  float m_fHeadroom;
  int16_t m_nLength;
};

