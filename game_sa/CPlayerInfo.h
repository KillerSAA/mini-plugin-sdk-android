#pragma once

#include "CPlayerPedData.h"
#include "CVehicle.h" 
#include "CPlayerPed.h" 
#include "rw/RwTexture.h"
#include "CPlayerCrossHair.h" 

struct CPlayerInfo
{
  CPlayerPed *pPed;
  CPlayerPedData PlayerPedData;
  CVehicle *pRemoteVehicle;
  CVehicle *pSpecCar;
  int32_t Score;
  int32_t DisplayScore;
  int32_t CollectablesPickedUp;
  int32_t TotalNumCollectables;
  uint32_t nLastBumpPlayerCarTimer;
  uint32_t TaxiTimer;
  uint32_t vehicle_time_counter;
  bool bTaxiTimerScore;
  bool m_bTryingToExitCar;
  char undefined[2]; // ??
  CVehicle *pLastTargetVehicle;
  uint8_t PlayerState;
  bool bAfterRemoteVehicleExplosion;
  bool bCreateRemoteVehicleExplosion;
  bool bFadeAfterRemoteVehicleExplosion;
  uint32_t TimeOfRemoteVehicleExplosion;
  uint32_t LastTimeEnergyLost;
  uint32_t LastTimeArmourLost;
  uint32_t LastTimeBigGunFired;
  uint32_t TimesUpsideDownInARow;
  uint32_t TimesStuckInARow;
  uint32_t nCarTwoWheelCounter;
  float fCarTwoWheelDist;
  uint32_t nCarLess3WheelCounter;
  uint32_t nBikeRearWheelCounter;
  float fBikeRearWheelDist;
  uint32_t nBikeFrontWheelCounter;
  float fBikeFrontWheelDist;
  uint32_t nTempBufferCounter;
  uint32_t nBestCarTwoWheelsTimeMs;
  float fBestCarTwoWheelsDistM;
  uint32_t nBestBikeWheelieTimeMs;
  float fBestBikeWheelieDistM;
  uint32_t nBestBikeStoppieTimeMs;
  float fBestBikeStoppieDistM;
  uint16_t CarDensityForCurrentZone;
  char undefined1[2]; // ??
  float RoadDensityAroundPlayer;
  uint32_t TimeOfLastCarExplosionCaused;
  int32_t ExplosionMultiplier;
  int32_t HavocCaused;
  int16_t TimeLastEaten;
  char undefined2[2]; // ??
  float CurrentChaseValue;
  bool DoesNotGetTired;
  bool FastReload;
  bool FireProof;
  uint8_t MaxHealth;
  uint8_t MaxArmour;
  bool bGetOutOfJailFree;
  bool bFreeHealthCare;
  bool bCanDoDriveBy;
  uint8_t m_nBustedAudioStatus;
  int8_t undefined3; // ??
  uint16_t m_nLastBustMessageNumber;
  CPlayerCrossHair CrossHair;
  bool bGetOject;
  char m_skinName[32];
  char undefined4[3]; // ??
  RwTexture *m_pSkinTexture;
  bool m_bParachuteReferenced;
  char undefined5[3]; // ??
  uint32_t m_nRequireParachuteTimer;
};