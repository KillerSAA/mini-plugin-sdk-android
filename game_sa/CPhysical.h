#pragma once

#include <game_sa/CVector.h>
#include <game_sa/CEntity.h>
#include <game_sa/CPtrNodes.h>
#include <game_sa/CEntryInfos.h>
#include <game_sa/RtQuat.h>

struct CPhysicalFlags
{
  uint32_t bExtraHeavy : 1;
  uint32_t bDoGravity : 1;
  uint32_t bInfiniteMass : 1;
  uint32_t bInfiniteMassFixed : 1;
  uint32_t bPedPhysics : 1;
  uint32_t bDoorPhysics : 1;
  uint32_t bHangingPhysics : 1;
  uint32_t bPoolBallPhysics : 1;
  uint32_t bIsInWater : 1;
  uint32_t bCollidedThisFrame : 1;
  uint32_t bUnFreezable : 1;
  uint32_t bTrainForceCol : 1;
  uint32_t bSkipLineCol : 1;
  uint32_t bCoorsFrozenByScript : 1;
  uint32_t bDontLoadCollision : 1;
  uint32_t bHalfSpeedCollision : 1;
  uint32_t bForceHitReturnFalse : 1;
  uint32_t bDontProcessCollisionOurSelves : 1;
  uint32_t bNotDamagedByBullets : 1;
  uint32_t bNotDamagedByFlames : 1;
  uint32_t bNotDamagedByCollisions : 1;
  uint32_t bNotDamagedByMelee : 1;
  uint32_t bOnlyDamagedByPlayer : 1;
  uint32_t bIgnoresExplosions : 1;
  uint32_t bFlyer : 1;
  uint32_t bNeverGoStatic : 1;
  uint32_t bUsingSpecialColModel : 1;
  uint32_t bForceFullWaterCheck : 1;
  uint32_t bUsesCollisionRecords : 1;
  uint32_t bRenderScorched : 1;
  uint32_t bDoorHitEndStop : 1;
  uint32_t bCarriedByRope : 1;
};

struct CPhysical : CEntity
{
  float m_fPrevDistFromCam;
  uint32_t m_LastCollisionTime;
  CPhysicalFlags m_nPhysicalFlags;
  CVector m_vecMoveSpeed;
  CVector m_vecTurnSpeed;
  CVector m_vecMoveFriction;
  CVector m_vecTurnFriction;
  CVector m_vecAverageMoveSpeed;
  CVector m_vecAverageTurnSpeed;
  float m_fMass;
  float m_fTurnMass;
  float m_fMassMultiplier;
  float m_fAirResistance;
  float m_fElasticity;
  float m_fBuoyancyConstant;
  CVector m_vecCOM;
  CEntryInfoList m_listEntryInfo;
  CPtrNodeDoubleLink *m_pMovingListNode;
  uint8_t m_nNoOfStaticFrames;
  uint8_t m_nNoOfCollisionRecords;
  uint8_t m_LastMaterialToHaveBeenStandingOn;
  int8_t undefined; // ??
  CEntity *m_aCollisionRecordPtrs[6];
  float m_fTrueDistanceTravelled;
  float m_fDamageImpulseMagnitude;
  CEntity *m_pDamageEntity;
  CVector m_vecDamageNormal;
  CVector m_vecDamagePos;
  uint16_t m_nDamagedPieceType;
  char undefined1[2]; // ??
  CEntity *m_pAttachToEntity;
  CVector m_vecAttachPosnOffset;
  CVector m_vecAttachTiltOffset;
  RtQuat m_AttachQuat;
  CEntity *m_pNOCollisionVehicle;
  float m_lightingFromCollision;
  float m_lightingFromPointLights;
  int *m_pRealTimeShadow; // CRealTimeShadow
};
