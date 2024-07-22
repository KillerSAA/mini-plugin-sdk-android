#pragma once

#include <game_sa/CWeapon.h>
#include <game_sa/CPhysical.h>
#include <game_sa/CAEPedAudioEntity.h>
#include <game_sa/CAEPedWeaponAudioEntity.h>
#include <game_sa/CPedIntelligence.h>
#include <game_sa/rw/RwFrame.h>
#include <game_sa/CCoverPoint.h>
#include <game_sa/CPlayerPedData.h>
#include "RpClump.h"
#include "AnimBlendFrameData.h"
#include "CAcquaintance.h"
#include "CPedIK.h"
#include "CAccident.h"
#include "CPedStats.h"
#include "CEntryExit.h"

enum eMoveState : int32_t
{
  PEDMOVE_NONE = 0x0,
  PEDMOVE_STILL = 0x1,
  PEDMOVE_TURN_L = 0x2,
  PEDMOVE_TURN_R = 0x3,
  PEDMOVE_WALK = 0x4,
  PEDMOVE_JOG = 0x5,
  PEDMOVE_RUN = 0x6,
  PEDMOVE_SPRINT = 0x7,
};

enum ePedState : int32_t
{
  PED_NONE = 0x0,
  PED_IDLE = 0x1,
  PED_LOOK_ENTITY = 0x2,
  PED_LOOK_HEADING = 0x3,
  PED_WANDER_RANGE = 0x4,
  PED_WANDER_PATH = 0x5,
  PED_SEEK_POSITION = 0x6,
  PED_SEEK_ENTITY = 0x7,
  PED_FLEE_POSITION = 0x8,
  PED_FLEE_ENTITY = 0x9,
  PED_PURSUE = 0xA,
  PED_FOLLOW_PATH = 0xB,
  PED_SNIPER_MODE = 0xC,
  PED_ROCKETLAUNCHER_MODE = 0xD,
  PED_DUMMY = 0xE,
  PED_PAUSE = 0xF,
  PED_ATTACK = 0x10,
  PED_FIGHT = 0x11,
  PED_FACE_PHONE = 0x12,
  PED_MAKE_PHONECALL = 0x13,
  PED_CHAT = 0x14,
  PED_MUG = 0x15,
  PED_AIMGUN = 0x16,
  PED_AI_CONTROL = 0x17,
  PED_SEEK_CAR = 0x18,
  PED_SEEK_BOAT_POSITION = 0x19,
  PED_FOLLOW_ROUTE = 0x1A,
  PED_CPR = 0x1B,
  PED_SOLICIT = 0x1C,
  PED_BUY_ICE_CREAM = 0x1D,
  PED_INVESTIGATE_EVENT = 0x1E,
  PED_EVADE_STEP = 0x1F,
  PED_ON_FIRE = 0x20,
  PED_SUNBATHE = 0x21,
  PED_FLASH = 0x22,
  PED_JOG = 0x23,
  PED_ANSWER_MOBILE = 0x24,
  PED_HANG_OUT = 0x25,
  PED_STATES_NO_AI = 0x26,
  PED_ABSEIL_FROM_HELI = 0x27,
  PED_SIT = 0x28,
  PED_JUMP = 0x29,
  PED_FALL = 0x2A,
  PED_GETUP = 0x2B,
  PED_STAGGER = 0x2C,
  PED_EVADE_DIVE = 0x2D,
  PED_STATES_CAN_SHOOT = 0x2E,
  PED_ENTER_TRAIN = 0x2F,
  PED_EXIT_TRAIN = 0x30,
  PED_ARREST_PLAYER = 0x31,
  PED_DRIVING = 0x32,
  PED_PASSENGER = 0x33,
  PED_TAXI_PASSENGER = 0x34,
  PED_OPEN_DOOR = 0x35,
  PED_DIE = 0x36,
  PED_DEAD = 0x37,
  PED_DIE_BY_STEALTH = 0x38,
  PED_CARJACK = 0x39,
  PED_DRAGGED_FROM_CAR = 0x3A,
  PED_ENTER_CAR = 0x3B,
  PED_STEAL_CAR = 0x3C,
  PED_EXIT_CAR = 0x3D,
  PED_HANDS_UP = 0x3E,
  PED_ARRESTED = 0x3F,
  PED_DEPLOY_STINGER = 0x40,
  PED_NUM_STATES = 0x41,
};

struct CPedFlags
{
  uint32_t bIsStanding : 1;
  uint32_t bWasStanding : 1;
  uint32_t bIsLooking : 1;
  uint32_t bIsRestoringLook : 1;
  uint32_t bIsAimingGun : 1;
  uint32_t bIsRestoringGun : 1;
  uint32_t bCanPointGunAtTarget : 1;
  uint32_t bIsTalking : 1;
  uint32_t bInVehicle : 1;
  uint32_t bIsInTheAir : 1;
  uint32_t bIsLanding : 1;
  uint32_t bHitSomethingLastFrame : 1;
  uint32_t bIsNearCar : 1;
  uint32_t bRenderPedInCar : 1;
  uint32_t bUpdateAnimHeading : 1;
  uint32_t bRemoveHead : 1;
  uint32_t bFiringWeapon : 1;
  uint32_t bHasACamera : 1;
  uint32_t bPedIsBleeding : 1;
  uint32_t bStopAndShoot : 1;
  uint32_t bIsPedDieAnimPlaying : 1;
  uint32_t bStayInSamePlace : 1;
  uint32_t bKindaStayInSamePlace : 1;
  uint32_t bBeingChasedByPolice : 1;
  uint32_t bNotAllowedToDuck : 1;
  uint32_t bCrouchWhenShooting : 1;
  uint32_t bIsDucking : 1;
  uint32_t bGetUpAnimStarted : 1;
  uint32_t bDoBloodyFootprints : 1;
  uint32_t bDontDragMeOutCar : 1;
  uint32_t bStillOnValidPoly : 1;
  uint32_t bAllowMedicsToReviveMe : 1;
  uint32_t bResetWalkAnims : 1;
  uint32_t bOnBoat : 1;
  uint32_t bBusJacked : 1;
  uint32_t bFadeOut : 1;
  uint32_t bKnockedUpIntoAir : 1;
  uint32_t bHitSteepSlope : 1;
  uint32_t bCullExtraFarAway : 1;
  uint32_t bTryingToReachDryLand : 1;
  uint32_t bCollidedWithMyVehicle : 1;
  uint32_t bRichFromMugging : 1;
  uint32_t bChrisCriminal : 1;
  uint32_t bShakeFist : 1;
  uint32_t bNoCriticalHits : 1;
  uint32_t bHasAlreadyBeenRecorded : 1;
  uint32_t bUpdateMatricesRequired : 1;
  uint32_t bFleeWhenStanding : 1;
  uint32_t bMiamiViceCop : 1;
  uint32_t bMoneyHasBeenGivenByScript : 1;
  uint32_t bHasBeenPhotographed : 1;
  uint32_t bIsDrowning : 1;
  uint32_t bDrownsInWater : 1;
  uint32_t bHeadStuckInCollision : 1;
  uint32_t bDeadPedInFrontOfCar : 1;
  uint32_t bStayInCarOnJack : 1;
  uint32_t bDontFight : 1;
  uint32_t bDoomAim : 1;
  uint32_t bCanBeShotInVehicle : 1;
  uint32_t bPushedAlongByCar : 1;
  uint32_t bNeverEverTargetThisPed : 1;
  uint32_t bThisPedIsATargetPriority : 1;
  uint32_t bCrouchWhenScared : 1;
  uint32_t bKnockedOffBike : 1;
  uint32_t bDonePositionOutOfCollision : 1;
  uint32_t bDontRender : 1;
  uint32_t bHasBeenAddedToPopulation : 1;
  uint32_t bHasJustLeftCar : 1;
  uint32_t bIsInDisguise : 1;
  uint32_t bDoesntListenToPlayerGroupCommands : 1;
  uint32_t bIsBeingArrested : 1;
  uint32_t bHasJustSoughtCover : 1;
  uint32_t bKilledByStealth : 1;
  uint32_t bDoesntDropWeaponsWhenDead : 1;
  uint32_t bCalledPreRender : 1;
  uint32_t bBloodPuddleCreated : 1;
  uint32_t bPartOfAttackWave : 1;
  uint32_t bClearRadarBlipOnDeath : 1;
  uint32_t bNeverLeavesGroup : 1;
  uint32_t bTestForBlockedPositions : 1;
  uint32_t bRightArmBlocked : 1;
  uint32_t bLeftArmBlocked : 1;
  uint32_t bDuckRightArmBlocked : 1;
  uint32_t bMidriffBlockedForJump : 1;
  uint32_t bFallenDown : 1;
  uint32_t bUseAttractorInstantly : 1;
  uint32_t bDontAcceptIKLookAts : 1;
  uint32_t bHasAScriptBrain : 1;
  uint32_t bWaitingForScriptBrainToLoad : 1;
  uint32_t bHasGroupDriveTask : 1;
  uint32_t bCanExitCar : 1;
  uint32_t CantBeKnockedOffBike : 2;
  uint32_t bHasBeenRendered : 1;
  uint32_t bIsCached : 1;
  uint32_t bPushOtherPeds : 1;
  uint32_t bHasBulletProofVest : 1;
  uint32_t bUsingMobilePhone : 1;
  uint32_t bUpperBodyDamageAnimsOnly : 1;
  uint32_t bStuckUnderCar : 1;
  uint32_t bKeepTasksAfterCleanUp : 1;
  uint32_t bIsDyingStuck : 1;
  uint32_t bIgnoreHeightCheckOnGotoPointTask : 1;
  uint32_t bForceDieInCar : 1;
  uint32_t bCheckColAboveHead : 1;
  uint32_t bIgnoreWeaponRange : 1;
  uint32_t bDruggedUp : 1;
  uint32_t bWantedByPolice : 1;
  uint32_t bSignalAfterKill : 1;
  uint32_t bCanClimbOntoBoat : 1;
  uint32_t bPedHitWallLastFrame : 1;
  uint32_t bIgnoreHeightDifferenceFollowingNodes : 1;
  uint32_t bMoveAnimSpeedHasBeenSetByTask : 1;
  uint32_t bGetOutUpsideDownCar : 1;
  uint32_t bJustGotOffTrain : 1;
  uint32_t bDeathPickupsPersist : 1;
  uint32_t bTestForShotInVehicle : 1;
};

struct CPed : CPhysical
{
  CAEPedAudioEntity m_PedAudioEntity;
  CAEPedSpeechAudioEntity m_PedSpeechAudioEntity;
  CAEPedWeaponAudioEntity m_PedWeaponAudioEntity;
  CPedIntelligence *m_pPedIntelligence;
  CPlayerPedData *m_pPlayerData;
  uint8_t CharCreatedBy;
  char undefined[3]; // ??
  ePedState m_nPedState;
  eMoveState m_eMoveState;
  CStoredCollPoly m_storedCollPoly;
  float m_distTravelledSinceLastHeightCheck;
  CPedFlags m_nPedFlags;
  AnimBlendFrameData *m_aPedFrames[19];
  AssocGroupId m_motionAnimGroup;
  CVector2D m_extractedVelocity;
  CAcquaintance m_acquaintances;
  RpClump *m_pWeaponClump;
  RwFrame *m_pWeaponFlashFrame;
  RpClump *m_pGogglesClump;
  bool *m_pbGogglesEffect;
  int16_t m_nGunFlashBlendAmount;
  int16_t m_nGunFlashBlendOutRate;
  int16_t m_nGunFlashBlendAmount2;
  int16_t m_nGunFlashBlendOutRate2;
  CPedIK m_ik;
  uint32_t m_nAntiSpazTimer;
  eMoveState m_eMoveStateAnim;
  eMoveState m_eStoredMoveState;
  float m_nHealth;
  float m_nMaxHealth;
  float m_nArmour;
  uint32_t DontUseSmallerRemovalRange;
  CVector2D m_vecCurrentVelocity;
  float m_fCurrentHeading;
  float m_fDesiredHeading;
  float m_fHeadingChangeRate;
  float m_fHeadingChangeRateAccel;
  CPhysical *m_pGroundPhysical;
  CVector m_vecGroundOffset;
  CVector m_vecGroundNormal;
  CEntity *m_pEntityStandingOn;
  float m_fHitHeadHeight;
  CVehicle *m_pMyVehicle;
  CVehicle *m_pMyAccidentVehicle;
  CAccident *m_pAccident;
  int32_t m_nPedType;
  CPedStats *m_pPedStats;
  CWeapon m_WeaponSlots[13];
  eWeaponType m_eStoredWeapon;
  eWeaponType m_eDelayedWeapon;
  uint32_t m_delayedAmmo;
  int8_t m_nCurrentWeapon;
  uint8_t m_nShootRate;
  uint8_t m_nShootingAccuracy;
  CEntity *m_pEntLockOnTarget;
  CEntity *m_pEntMagnetizeTarget;
  CVector m_vecWeaponPrevPos;
  uint8_t m_nWeaponSkill;
  uint8_t m_nExtraMeleeCombo;
  uint8_t m_nExtraMeleeComboFlags;
  uint8_t BleedingFrames;
  CFire *m_pFire;
  float FireDamageMultiplier;
  CEntity *m_pEntLookEntity;
  float m_fLookHeading;
  int32_t WeaponModelInHand;
  uint32_t m_nUnconsciousTimer;
  uint32_t m_nLookTimer;
  uint32_t m_nAttackTimer;
  uint32_t m_nTimeOfDeath;
  int8_t m_nLimbRemoveIndex;
  int8_t undefined1; // ??
  uint16_t m_MoneyCarried;
  float m_wobble;
  float m_wobbleSpeed;
  int8_t LastDamagedWeaponType;
  char undefined2[3]; // ??
  CEntity *pLastDamageEntity;
  uint32_t LastDamagedTime;
  CVector m_vecAttachOffset;
  uint16_t m_nAttachLookDirn;
  char undefined3[2]; // ??
  float m_fAttachHeadingLimit;
  float m_fAttachVerticalLimit;
  int32_t m_nOriginalWeaponAmmo;
  CCoverPoint *m_pCoverPoint;
  CEntryExit *m_pLastEntryExit;
  float fRemoveRangeMultiplier;
  int16_t StreamedScriptBrainToLoad;
  char undefined4[2]; // ??
  uint32_t LastTalkSfx;
};
