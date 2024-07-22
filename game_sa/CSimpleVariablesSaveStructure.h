#pragma once
// it's probably static, but what's the address?

#include "CVector.h"
#include "eLevelName.h"
#include "eVisibleArea.h"
#include "eWantedLevel.h"

struct CSimpleVariablesSaveStructure
{
  uint32_t m_VersionNumber;
  char m_MissionName[100];
  uint8_t m_MissionPackGame;
  char undefined[3]; // ??
  eLevelName m_CurrLevel;
  CVector m_CameraPosition;
  uint32_t m_MillisecondsPerGameMinute;
  uint32_t m_LastClockTick;
  uint8_t m_GameClockMonths;
  uint8_t m_GameClockDays;
  uint8_t m_GameClockHours;
  uint8_t m_GameClockMinutes;
  uint8_t m_CurrentDay;
  uint8_t m_StoredGameClockMonths;
  uint8_t m_StoredGameClockDays;
  uint8_t m_StoredGameClockHours;
  uint8_t m_StoredGameClockMinutes;
  uint8_t m_ClockStored;
  uint16_t m_PadMode;
  bool m_bHasPlayerCheated;
  char undefined1[3]; // ??
  uint32_t m_TimeInMilliseconds;
  float m_TimeScale;
  float m_TimeStep;
  float m_TimeStepNonClipped;
  uint32_t m_FrameCounter;
  uint16_t m_OldWeatherType;
  uint16_t m_NewWeatherType;
  uint16_t m_ForcedWeatherType;
  char undefined2[2]; // ??
  float m_InterpolationValue;
  int32_t m_WeatherTypeInList;
  float m_Rain;
  int32_t m_CarZoom;
  int32_t m_PedZoom;
  eVisibleArea m_CurrArea;
  bool m_InvertLook4Pad;
  char undefined3[3]; // ??
  int32_t m_ExtraColour;
  bool m_ExtraColourOn;
  char undefined4[3]; // ??
  float m_ExtraColourInter;
  int32_t m_ExtraColourWeatherType;
  int32_t m_WaterConfiguration;
  bool m_bLARiots;
  bool m_bLARiots_NoPoliceCars;
  char undefined5[2]; // ??
  eWantedLevel m_MaximumWantedLevel;
  int32_t m_nMaximumWantedLevel;
  bool m_frenchGame;
  bool m_germanGame;
  bool m_nastyGame;
  int8_t undefined6; // ??
  uint32_t m_SavedRadioPosition[11];
  int8_t m_bCineyCamMessageDisplayed;
  bool m_BlurOn;
  int8_t m_PrefsMusicVolume;
  int8_t m_PrefsSfxVolume;
  bool m_PrefsUseVibration;
  int8_t m_PrefsRadioStation;
  bool m_PrefsShowSubtitles;
  int8_t m_PrefsLanguage;
  bool m_PrefsUseWideScreen;
  char undefined7[3]; // ??
  int32_t m_ScreenXOffset;
  int32_t m_ScreenYOffset;
  bool m_PrefsDisplayHud;
  char undefined8[3]; // ??
  int32_t m_PrefsRadarMode;
  bool m_PrefsUseBass;
  bool m_PrefsAutoRetune;
  int8_t m_PrefsAudioOutputMode;
  int8_t undefined9; // ??
  int32_t m_waypoint_blip;
  bool m_bHasDisplayedPlayerQuitEnterCarHelpText;
  bool m_bTaxiNitroCheat;
  bool m_bPimpCheat;
  int8_t undefined10; // ??
  int m_CPIndex;
};

