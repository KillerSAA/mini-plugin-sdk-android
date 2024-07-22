#pragma once

#include <game_sa/CAutomobile.h>
#include <game_sa/CEntity.h>
#include <game_sa/CVector.h>
#include <game_sa/AssocGroupId.h>
#include <game_sa/RpAtomic.h>
#include <game_sa/CWanted.h>
#include <game_sa/CPedClothesDesc.h>

struct CPlayerPedData
{
  CWanted *m_Wanted;
  CPedClothesDesc *m_pClothes;
  int *m_ArrestingOfficer; // CCopPed
  CVector2D m_vecFightMovement;
  float m_moveBlendRatio;
  float m_fSprintEnergy;
  float m_fSprintControlCounter;
  int8_t m_nChosenWeapon;
  uint8_t m_nCarDangerCounter;
  char undefined[2]; // ??
  int32_t m_nStandStillTimer;
  uint32_t m_nHitAnimDelayTimer;
  float m_fAttackButtonCounter;
  CAutomobile *m_pDangerCar;
  uint32_t m_bStoppedMoving : 1;
  uint32_t m_bAdrenaline : 1;
  uint32_t m_bHaveTargetSelected : 1;
  uint32_t m_bFreeAiming : 1;
  uint32_t bCanBeDamaged : 1;
  uint32_t bAllMeleeAttackPtsBlocked : 1;
  uint32_t m_JustBeenSnacking : 1;
  uint32_t m_bRequireHandleBreath : 1;
  uint32_t m_GroupStuffDisabled : 1;
  uint32_t m_GroupAlwaysFollow : 1;
  uint32_t m_GroupNeverFollow : 1;
  uint32_t m_bInVehicleDontAllowWeaponChange : 1;
  uint32_t m_bRenderWeapon : 1;
  char undefined1[2]; // ??
  int32_t m_PlayerGroup;
  uint32_t m_AdrenalineEndTime;
  uint8_t m_nDrunkenness;
  bool m_bFadeDrunkenness;
  uint8_t m_nDrugLevel;
  uint8_t m_nScriptLimitToGangSize;
  float m_fBreath;
  AssocGroupId m_MeleeWeaponAnimReferenced;
  AssocGroupId m_MeleeWeaponAnimReferencedExtra;
  float m_fFPSMoveHeading;
  float m_fLookPitch;
  float m_fSkateBoardSpeed;
  float m_fSkateBoardLean;
  RpAtomic *m_pSpecialAtomic;
  float m_fGunSpinSpeed;
  float m_fGunSpinAngle;
  uint32_t m_LastTimeFiring;
  uint32_t m_nTargetBone;
  CVector m_vecTargetBoneOffset;
  uint32_t m_busFaresCollected;
  bool m_bPlayerSprintDisabled;
  bool m_bDontAllowWeaponChange;
  bool m_bForceInteriorLighting;
  int8_t undefined2; // ??
  uint16_t m_DPadDownPressedInMilliseconds;
  uint16_t m_DPadUpPressedInMilliseconds;
  int8_t m_wetness;
  bool m_playersGangActive;
  uint8_t m_waterCoverPerc;
  int8_t undefined3; // ??
  float m_waterHeight;
  uint32_t m_FireHSMissilePressedTime;
  CEntity *m_LastHSMissileTarget;
  int32_t m_nModelIndexOfLastBuildingShot;
  uint32_t m_LastHSMissileLOSTime : 31;
  uint32_t m_bLastHSMissileLOS : 1;
  int *m_pCurrentProstitutePed; // CPed
  int *m_pLastProstituteShagged; // CPed
};
