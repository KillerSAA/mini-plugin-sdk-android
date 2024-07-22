#pragma once

#include <game_sa/CAEAudioEntity.h>
#include <game_sa/CAESound.h>
#include <game_sa/CAETwinLoopSoundEntity.h>

struct tEngineSound
{
  int16_t EngineSoundType;
  char undefined[2]; // ??
  CAESound *SoundPtr;
};

struct tVehicleAudioSettings
{
  int8_t VehicleAudioType;
  int8_t undefined; // ??
  int16_t PlayerBank;
  int16_t DummyBank;
  int8_t BassSetting;
  int8_t undefined1; // ??
  float BassFactor;
  float EnginePitch;
  int8_t HornType;
  char undefined2[3]; // ??
  float HornPitch;
  int8_t DoorType;
  int8_t EngineUpgrade;
  int8_t RadioStation;
  int8_t RadioType;
  int8_t VehicleAudioTypeForName;
  char undefined3[3]; // ??
  float EngineVolumeOffset;
};

struct CAEVehicleAudioEntity : CAEAudioEntity
{
  int16_t m_nStallCounter;
  char undefined[2]; // ??
  tVehicleAudioSettings m_VehicleAudioSetting;
  bool m_bInitialised;
  bool m_bPlayerDriven;
  bool m_bPlayerOnlyAttached;
  bool m_bPlayerDriverAboutToExit;
  bool m_bWreckedVehicle;
  int8_t m_State;
  uint8_t m_AudioGear;
  int8_t undefined1; // ??
  float m_CrzCount;
  bool m_bSingleGear;
  int8_t undefined2; // ??
  int16_t m_nRainHitCount;
  int16_t m_nStalledCount;
  char undefined3[2]; // ??
  uint32_t m_nSwapStalledTime;
  bool m_bSilentStalled;
  bool m_bHelicoptorDisabled;
  bool m_bHornOn;
  bool m_bSirenOn;
  bool m_bFastSirenOn;
  char undefined4[3]; // ??
  float m_HornVolume;
  bool m_bUsesSiren;
  char undefined5[3]; // ??
  uint32_t m_TimeSplashLastTriggered;
  uint32_t m_TimeBeforeAllowAccelerate;
  uint32_t m_TimeBeforeAllowCruise;
  float m_fEventVolume;
  int16_t m_DummyEngineBank;
  int16_t m_PlayerEngineBank;
  int16_t m_DummySlot;
  char undefined6[2]; // ??
  tEngineSound m_EngineSounds[12];
  uint32_t m_TimeLastServiced;
  int16_t m_ACPlayPositionThisFrame;
  int16_t m_ACPlayPositionLastFrame;
  int16_t m_FramesAgoACLooped;
  int16_t m_ACPlayPercentWhenStopped;
  uint32_t m_TimeACStopped;
  int16_t m_ACPlayPositionWhenStopped;
  int16_t m_SurfaceSoundID;
  CAESound *m_SurfaceSoundPtr;
  int16_t m_RoadNoiseSoundID;
  char undefined7[2]; // ??
  CAESound *m_RoadNoiseSoundPtr;
  int16_t m_FlatTyreSoundID;
  char undefined8[2]; // ??
  CAESound *m_FlatTyreSoundPtr;
  int16_t m_ReverseSoundID;
  char undefined9[2]; // ??
  CAESound *m_ReverseSoundPtr;
  int16_t m_HornSoundID;
  char undefined10[2]; // ??
  CAESound *m_HornSoundPtr;
  CAESound *m_SirenSoundPtr;
  CAESound *m_FastSirenSoundPtr;
  CAETwinLoopSoundEntity m_SkidSound;
  float m_CurrentRotorFrequency;
  float m_CurrentDummyEngineVolume;
  float m_CurrentDummyEngineFrequency;
  float m_fMovingPartSmoothedSpeed;
  float m_fFadeIn;
  float m_fFadeOut;
  bool m_bNitroOnLastFrame;
  char undefined11[3]; // ??
  float m_CurrentNitroRatio;
};
