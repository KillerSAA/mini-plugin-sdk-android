#pragma once

#include <game_sa/CVehicle.h>
#include <game_sa/CDoor.h>
#include <game_sa/rw/RwFrame.h>
#include <game_sa/CEntity.h>
#include <game_sa/CPhysical.h>
#include <game_sa/CBouncingPanel.h>
#include <game_sa/CColPoint.h>
#include <game_sa/CDamageManager.h>

struct CAutomobileFlags
{
  int8_t bTaxiLight : 1;
  int8_t bShouldNotChangeColour : 1;
  int8_t bWaterTight : 1;
  int8_t bDoesNotGetDamagedUpsideDown : 1;
  uint8_t bCanBeVisiblyDamaged : 1;
  int8_t bTankExplodesCars : 1;
  int8_t bIsBoggedDownInSand : 1;
  int8_t bIsMonsterTruck : 1;
};

struct CAutomobile : CVehicle
{
  CDamageManager Damage;
  CDoor Door[6];
  RwFrame *m_aCarNodes[25];
  CBouncingPanel BouncingPanels[3];
  CDoor ChassisDoor;
  CColPoint m_aWheelColPoints[4];
  float m_aWheelRatios[4];
  float m_aRatioHistory[4];
  float m_aWheelCounts[4];
  float fBrakeCount;
  float m_fEngineRevs;
  float m_fEngineForce;
  eSkidmarkType aWheelSkidmarkType[4];
  bool bWheelBloody[4];
  bool bMoreSkidMarks[4];
  float m_aWheelPitchAngles[4];
  float m_aWheelSuspensionHeights[4];
  float m_aWheelAngularVelocity[4];
  float m_aWheelLongitudinalSlip[4];
  CAutomobileFlags m_nAutomobileFlags;
  int8_t m_undefined; // ??
  uint16_t nBrakesOn;
  uint16_t m_nSuspensionHydraulics;
  uint16_t m_nOldSuspensionHydraulics;
  uint32_t m_nBusDoorTimer;
  uint32_t m_nBusDoorStart;
  float m_fSuspensionLength[4];
  float m_fLineLength[4];
  float m_fHeightAboveRoad;
  float m_fRearHeightAboveRoad;
  float m_fExtraTractionMult;
  float m_fTyreTemp;
  float ZRot;
  float ZRotSpeed;
  float fPrevSpeed;
  CVector m_vecOldMoveSpeed;
  CVector m_vecOldTurnSpeed;
  float DoorRotation[6];
  float m_BlowUpTimer;
  CPhysical *m_aGroundPhysicalPtrs[4];
  CVector m_aGroundOffsets[4];
  CEntity *pEntityThatSetUsOnFire;
  float m_fTransformPosition;
  int16_t m_nTransformState;
  int8_t m_undefined1; // ??
  int8_t m_undefined2; // ??
  float m_fBasePositions[4];
  float LeftDoorOpenForDriveBys;
  float RightDoorOpenForDriveBys;
  float GunOrientation;
  float GunElevation;
  float HeliRequestedOrientation;
  float PropRotate;
  float CumulativeDamage;
  uint8_t nNoOfContactWheels;
  uint8_t m_nDriveWheelsOnGround;
  uint8_t m_nDriveWheelsOnGroundLastFrame;
  int8_t m_undefined3; // ??
  float m_fGasPedalAudioRevs;
  tWheelState m_aWheelState[4];
  FxSystem_c *m_pFxSysNitro1;
  FxSystem_c *m_pFxSysNitro2;
  uint8_t m_HarvesterTimer;
  uint8_t m_statusWhenEngineBlown;
  int8_t m_undefined4; // ??
  int8_t m_undefined5; // ??
  float m_heliDustRatio;
};