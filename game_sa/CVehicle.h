#pragma once 

#include <game_sa/CPhysical.h>
#include <game_sa/CVector.h>
#include <game_sa/FxSystem_c.h>
#include <game_sa/CTransmission.h>
#include <game_sa/CAEVehicleAudioEntity.h>
#include <game_sa/CDoor.h>
#include <game_sa/rw/RwFrame.h>
#include <game_sa/CColPoint.h>
#include <game_sa/CBouncingPanel.h>
#include <game_sa/CFire.h>
#include <game_sa/CStoredCollPoly.h>
#include <game_sa/CAutoPilot.h>

// enums

enum eSkidmarkType
{
  SKIDMARKTYPE_DEFAULT = 0x0,
  SKIDMARKTYPE_MUDDY = 0x1,
  SKIDMARKTYPE_SANDY = 0x2,
  SKIDMARKTYPE_BLOODY = 0x3,
};

enum tWheelState
{
  WS_ROLLING = 0x0,
  WS_SPINNING = 0x1,
  WS_SKIDDING = 0x2,
  WS_LOCKED = 0x3,
};

enum tVehicleType : int32_t
{
  VT_LANDSTAL = 0x0,
  VT_BRAVURA = 0x1,
  VT_BUFFALO = 0x2,
  VT_LINERUN = 0x3,
  VT_PEREN = 0x4,
  VT_SENTINEL = 0x5,
  VT_DUMPER = 0x6,
  VT_FIRETRUK = 0x7,
  VT_TRASH = 0x8,
  VT_STRETCH = 0x9,
  VT_MANANA = 0xA,
  VT_INFERNUS = 0xB,
  VT_VOODOO = 0xC,
  VT_PONY = 0xD,
  VT_MULE = 0xE,
  VT_CHEETAH = 0xF,
  VT_AMBULAN = 0x10,
  VT_MOONBEAM = 0x11,
  VT_ESPERANT = 0x12,
  VT_TAXI = 0x13,
  VT_WASHINGTON = 0x14,
  VT_BOBCAT = 0x15,
  VT_MRWHOOP = 0x16,
  VT_BFINJECT = 0x17,
  VT_PREMIER = 0x18,
  VT_ENFORCER = 0x19,
  VT_SECURICA = 0x1A,
  VT_BANSHEE = 0x1B,
  VT_BUS = 0x1C,
  VT_RHINO = 0x1D,
  VT_BARRACKS = 0x1E,
  VT_HOTKNIFE = 0x1F,
  VT_ARTICT1 = 0x20,
  VT_PREVION = 0x21,
  VT_COACH = 0x22,
  VT_CABBIE = 0x23,
  VT_STALLION = 0x24,
  VT_RUMPO = 0x25,
  VT_RCBANDIT = 0x26,
  VT_ROMERO = 0x27,
  VT_PACKER = 0x28,
  VT_MONSTER = 0x29,
  VT_ADMIRAL = 0x2A,
  VT_TRAM = 0x2B,
  VT_AIRTRAIN = 0x2C,
  VT_ARTICT2 = 0x2D,
  VT_TURISMO = 0x2E,
  VT_FLATBED = 0x2F,
  VT_YANKEE = 0x30,
  VT_GOLFCART = 0x31,
  VT_SOLAIR = 0x32,
  VT_TOPFUN = 0x33,
  VT_GLENDALE = 0x34,
  VT_OCEANIC = 0x35,
  VT_PATRIOT = 0x36,
  VT_HERMES = 0x37,
  VT_SABRE = 0x38,
  VT_ZR350 = 0x39,
  VT_WALTON = 0x3A,
  VT_REGINA = 0x3B,
  VT_COMET = 0x3C,
  VT_BURRITO = 0x3D,
  VT_CAMPER = 0x3E,
  VT_BAGGAGE = 0x3F,
  VT_DOZER = 0x40,
  VT_RANCHER = 0x41,
  VT_FBIRANCHER = 0x42,
  VT_VIRGO = 0x43,
  VT_GREENWOOD = 0x44,
  VT_HOTRING = 0x45,
  VT_SANDKING = 0x46,
  VT_BLISTAC = 0x47,
  VT_BOXVILLE = 0x48,
  VT_BENSON = 0x49,
  VT_MESA = 0x4A,
  VT_BLOODRA = 0x4B,
  VT_BLOODRB = 0x4C,
  VT_SUPERGT = 0x4D,
  VT_ELEGANT = 0x4E,
  VT_JOURNEY = 0x4F,
  VT_PETROL = 0x50,
  VT_RDTRAIN = 0x51,
  VT_NEBULA = 0x52,
  VT_MAJESTIC = 0x53,
  VT_BUCCANEE = 0x54,
  VT_CEMENT = 0x55,
  VT_TOWTRUCK = 0x56,
  VT_FORTUNE = 0x57,
  VT_CADRONA = 0x58,
  VT_FBITRUCK = 0x59,
  VT_WILLARD = 0x5A,
  VT_FORKLIFT = 0x5B,
  VT_TRACTOR = 0x5C,
  VT_COMBINE = 0x5D,
  VT_FELTZER = 0x5E,
  VT_REMINGTON = 0x5F,
  VT_SLAMVAN = 0x60,
  VT_BLADE = 0x61,
  VT_FREIGHT = 0x62,
  VT_STREAK = 0x63,
  VT_VINCENT = 0x64,
  VT_BULLET = 0x65,
  VT_CLOVER = 0x66,
  VT_SADLER = 0x67,
  VT_RANGER = 0x68,
  VT_HUSTLER = 0x69,
  VT_INTRUDER = 0x6A,
  VT_PRIMO = 0x6B,
  VT_TAMPA = 0x6C,
  VT_SUNRISE = 0x6D,
  VT_MERIT = 0x6E,
  VT_UTILITY = 0x6F,
  VT_YOSEMITE = 0x70,
  VT_WINDSOR = 0x71,
  VT_MONSTER_A = 0x72,
  VT_MONSTER_B = 0x73,
  VT_URANUS = 0x74,
  VT_JESTER = 0x75,
  VT_SULTAN = 0x76,
  VT_STRATUM = 0x77,
  VT_ELEGY = 0x78,
  VT_TIGER = 0x79,
  VT_FLASH = 0x7A,
  VT_TAHOMA = 0x7B,
  VT_SAVANNA = 0x7C,
  VT_BANDITO = 0x7D,
  VT_FREIFLAT = 0x7E,
  VT_STREAKC = 0x7F,
  VT_KART = 0x80,
  VT_MOWER = 0x81,
  VT_DUNE = 0x82,
  VT_SWEEPER = 0x83,
  VT_BROADWAY = 0x84,
  VT_TORNADO = 0x85,
  VT_DFT30 = 0x86,
  VT_HUNTLEY = 0x87,
  VT_STAFFORD = 0x88,
  VT_NEWSVAN = 0x89,
  VT_TUG = 0x8A,
  VT_PETROTR = 0x8B,
  VT_EMPEROR = 0x8C,
  VT_FLOAT = 0x8D,
  VT_EUROS = 0x8E,
  VT_HOTDOG = 0x8F,
  VT_CLUB = 0x90,
  VT_ARTICT3 = 0x91,
  VT_RCCAM = 0x92,
  VT_POLICE_SF = 0x93,
  VT_POLICE_LS = 0x94,
  VT_POLICE_VG = 0x95,
  VT_POLRANGER = 0x96,
  VT_PICADOR = 0x97,
  VT_SWATVAN = 0x98,
  VT_ALPHA = 0x99,
  VT_PHEONIX = 0x9A,
  VT_BAGBOXA = 0x9B,
  VT_BAGBOXB = 0x9C,
  VT_TUGSTAIR = 0x9D,
  VT_BOXBURG = 0x9E,
  VT_FARMTR1 = 0x9F,
  VT_UTILTR1 = 0xA0,
  VT_ROLLER = 0xA1,
  VT_BIKE = 0xA2,
  VT_MOPED = 0xA3,
  VT_DIRTBIKE = 0xA4,
  VT_FCR900 = 0xA5,
  VT_NRG500 = 0xA6,
  VT_HPV1000 = 0xA7,
  VT_BF400 = 0xA8,
  VT_WAYFARER = 0xA9,
  VT_QUADBIKE = 0xAA,
  VT_BMX = 0xAB,
  VT_CHOPPERBIKE = 0xAC,
  VT_MTB = 0xAD,
  VT_FREEWAY = 0xAE,
  VT_PREDATOR = 0xAF,
  VT_SPEEDER = 0xB0,
  VT_REEFER = 0xB1,
  VT_RIO = 0xB2,
  VT_SQUALO = 0xB3,
  VT_TROPIC = 0xB4,
  VT_COASTGUARD = 0xB5,
  VT_DINGHY = 0xB6,
  VT_MARQUIS = 0xB7,
  VT_CUPBOAT = 0xB8,
  VT_LAUNCH = 0xB9,
  VT_SEAPLANE = 0xBA,
  VT_VORTEX = 0xBB,
  VT_RUSTLER = 0xBC,
  VT_BEAGLE = 0xBD,
  VT_CROPDUST = 0xBE,
  VT_STUNT = 0xBF,
  VT_SHAMAL = 0xC0,
  VT_HYDRA = 0xC1,
  VT_NEVADA = 0xC2,
  VT_AT400 = 0xC3,
  VT_ANDROM = 0xC4,
  VT_DODO = 0xC5,
  VT_SPARROW = 0xC6,
  VT_SEASPARROW = 0xC7,
  VT_MAVERICK = 0xC8,
  VT_COASTMAV = 0xC9,
  VT_POLICEMAV = 0xCA,
  VT_HUNTER = 0xCB,
  VT_LEVIATHN = 0xCC,
  VT_CARGOBOB = 0xCD,
  VT_RAINDANC = 0xCE,
  VT_RCBARON = 0xCF,
  VT_RCGOBLIN = 0xD0,
  VT_RCRAIDER = 0xD1,
  VT_MAX = 0xD2,
};

struct tHandlingData
{
  tVehicleType nVehicleID;
  float fMass;
  float fOneOverMass;
  float fTurnMass;
  float fDragCoeff;
  CVector CentreOfMass;
  uint8_t nPercentSubmerged;
  char undefined[3]; // ?? 
  float fBuoyancyConstant;
  float fTractionMultiplier;
  CTransmission Transmission;
  float fBrakeDeceleration;
  float fBrakeBias;
  bool bABS;
  char undefined1[3]; // ??
  float fSteeringLock;
  float fTractionLoss;
  float fTractionBias;
  float fSuspensionForce;
  float fSuspensionDamping;
  float fSuspensionHighSpdComDamp;
  float fSuspensionUpperLimit;
  float fSuspensionLowerLimit;
  float fSuspensionBias;
  float fSuspensionAntiDive;
  float fCollisionDamageMultiplier;
  uint32_t mFlags;
  uint32_t hFlags;
  float fSeatOffsetDist;
  uint32_t nMonetaryValue;
  uint8_t HeadLightType;
  uint8_t RearLightType;
  uint8_t AnimGroup;
  int8_t undefined2; // ??
};

struct tFlyingHandlingData
{
  tVehicleType nVehicleID;
  float fThrust;
  float fThrustFallOff;
  float fYawMult;
  float fYawStabilise;
  float fSideSlipMult;
  float fRollMult;
  float fRollStabilise;
  float fPitchMult;
  float fPitchStabilise;
  float fFormLiftMult;
  float fAttackLiftMult;
  float fGearUpResMult;
  float fGearDownLiftMult;
  float fWindMult;
  float fMoveRes;
  CVector vecTurnRes;
  CVector vecSpeedRes;
};

struct CVehicleFlags
{
  uint8_t bIsLawEnforcer : 1;
  uint8_t bIsAmbulanceOnDuty : 1;
  uint8_t bIsFireTruckOnDuty : 1;
  uint8_t bIsLocked : 1;
  uint8_t bEngineOn : 1;
  uint8_t bIsHandbrakeOn : 1;
  uint8_t bLightsOn : 1;
  uint8_t bFreebies : 1;
  uint8_t bIsVan : 1;
  uint8_t bIsBus : 1;
  uint8_t bIsBig : 1;
  uint8_t bLowVehicle : 1;
  uint8_t bComedyControls : 1;
  uint8_t bWarnedPeds : 1;
  uint8_t bCraneMessageDone : 1;
  uint8_t bTakeLessDamage : 1;
  uint8_t bIsDamaged : 1;
  uint8_t bHasBeenOwnedByPlayer : 1;
  uint8_t bFadeOut : 1;
  uint8_t bIsBeingCarJacked : 1;
  uint8_t bCreateRoadBlockPeds : 1;
  uint8_t bCanBeDamaged : 1;
  uint8_t bOccupantsHaveBeenGenerated : 1;
  uint8_t bGunSwitchedOff : 1;
  uint8_t bVehicleColProcessed : 1;
  uint8_t bIsCarParkVehicle : 1;
  uint8_t bHasAlreadyBeenRecorded : 1;
  uint8_t bPartOfConvoy : 1;
  uint8_t bHeliMinimumTilt : 1;
  uint8_t bAudioChangingGear : 1;
  uint8_t bIsDrowning : 1;
  uint8_t bTyresDontBurst : 1;
  uint8_t bCreatedAsPoliceVehicle : 1;
  uint8_t bRestingOnPhysical : 1;
  uint8_t bParking : 1;
  uint8_t bCanPark : 1;
  uint8_t bFireGun : 1;
  uint8_t bDriverLastFrame : 1;
  uint8_t bNeverUseSmallerRemovalRange : 1;
  uint8_t bIsRCVehicle : 1;
  uint8_t bAlwaysSkidMarks : 1;
  uint8_t bEngineBroken : 1;
  uint8_t bVehicleCanBeTargetted : 1;
  uint8_t bPartOfAttackWave : 1;
  uint8_t bWinchCanPickMeUp : 1;
  uint8_t bImpounded : 1;
  uint8_t bVehicleCanBeTargettedByHS : 1;
  uint8_t bSirenOrAlarm : 1;
  uint8_t bHasGangLeaningOn : 1;
  uint8_t bGangMembersForRoadBlock : 1;
  uint8_t bDoesProvideCover : 1;
  uint8_t bMadDriver : 1;
  uint8_t bUpgradedStereo : 1;
  uint8_t bConsideredByPlayer : 1;
  uint8_t bPetrolTankIsWeakPoint : 1;
  uint8_t bDisableParticles : 1;
  uint8_t bHasBeenResprayed : 1;
  uint8_t bUseCarCheats : 1;
  uint8_t bDontSetColourWhenRemapping : 1;
};

enum eCarLockState : int32_t
{
  CARLOCK_NONE = 0x0,
  CARLOCK_UNLOCKED = 0x1,
  CARLOCK_LOCKED = 0x2,
  CARLOCK_LOCKOUT_PLAYER_ONLY = 0x3,
  CARLOCK_LOCKED_PLAYER_INSIDE = 0x4,
  CARLOCK_LOCKED_INITIALLY = 0x5,
  CARLOCK_FORCE_SHUT_DOORS = 0x6,
  CARLOCK_LOCKED_BUT_CAN_BE_DAMAGED = 0x7,
};

struct CVehicle : CPhysical
{
  CAEVehicleAudioEntity m_VehicleAudioEntity;
  tHandlingData *pHandling;
  tFlyingHandlingData *pFlyingHandling;
  uint32_t hFlagsLocal;
  CAutoPilot AutoPilot;
  CVehicleFlags m_nVehicleFlags;
  uint32_t m_TimeOfCreation;
  uint8_t m_colour1;
  uint8_t m_colour2;
  uint8_t m_colour3;
  uint8_t m_colour4;
  int8_t m_comp1;
  int8_t m_comp2;
  int16_t m_upgrades[15];
  float m_wheelScale;
  uint16_t CarAlarmState;
  uint16_t ForcedRandomSeed;
  int *pDriver; // CPed
  int *pPassengers[8]; // CPed
  uint8_t m_nNumPassengers;
  uint8_t m_nNumGettingIn;
  uint8_t m_nGettingInFlags;
  uint8_t m_nGettingOutFlags;
  uint8_t m_nMaxPassengers;
  uint8_t m_windowsOpenFlags;
  int8_t m_nNitroBoosts;
  int8_t m_nSpecialColModel;
  CEntity *pEntityWeAreOnForVisibilityCheck;
  CFire *m_pFire;
  float m_fSteerAngle;
  float m_f2ndSteerAngle;
  float m_fGasPedal;
  float m_fBrakePedal;
  uint8_t VehicleCreatedBy;
  float cachedTotalSteer;
  int16_t ExtendedRemovalRange;
  uint8_t BombOnBoard : 3;
  uint8_t OverrideLights : 2;
  uint8_t WinchType : 2;
  uint8_t m_GunsCycleIndex : 2;
  uint8_t m_OrdnanceCycleIndex : 2;
  uint8_t nUsedForCover;
  uint8_t AmmoInClip;
  uint8_t PacMansCollected;
  uint8_t PedsPositionForRoadBlock;
  uint8_t NumPedsForRoadBlock;
  float nBodyDirtLevel;
  uint8_t m_nCurrentGear;
  float m_fGearChangeCount;
  float m_fWheelSpinForAudio;
  float m_nHealth;
  CVehicle *m_pTowingVehicle;
  CVehicle *m_pVehicleBeingTowed;
  bool m_bFireAutoFlare;
  CEntity *pBombOwner;
  uint32_t DontUseSmallerRemovalRange;
  uint32_t TimeOfLastShotFired;
  uint32_t m_nTimeOfDeath;
  uint16_t GetOutOfCarTimer;
  uint16_t DelayedExplosion;
  CEntity *pDelayedExplosionInflictor;
  float LastFrontHeight;
  float LastRearHeight;
  uint8_t NumOilSpillsToDo;
  float OilSpillLastX;
  float OilSpillLastY;
  eCarLockState m_eDoorLockState;
  uint32_t m_LastTimePrimaryFired;
  uint32_t m_LastTimeSecondaryFired;
  uint32_t m_LastTimeGunFired;
  int8_t LastDamagedWeaponType;
  CEntity *pLastDamageEntity;
  uint8_t m_nRadioStation;
  uint8_t m_nRainHitCount;
  uint8_t m_nSoundIndex;
  uint8_t m_SelectedWeapon;
  uint32_t m_cHorn;
  uint8_t m_nHornPattern;
  uint8_t m_NoHornCount;
  uint8_t ComedyControlsState;
  uint8_t m_hassleStatus;
  CStoredCollPoly StoredCollPolys[2];
  uint8_t m_storedCollisionLighting[4];
  FxSystem_c *m_fxSysEngOverheat;
  FxSystem_c *m_fxSysEngFire;
  FxSystem_c *m_fxSysHeliDust;
  uint8_t m_bLightOnFR : 1;
  uint8_t m_bLightOnFL : 1;
  uint8_t m_bLightOnRR : 1;
  uint8_t m_bLightOnRL : 1;
  RwTexture *pCustomPlateTexture;
  float fSteer;
  int32_t m_baseVehicleType;
  int32_t m_vehicleType;
  const uint8_t *m_remapTxdName;
  const uint8_t *m_newRemapTxdName;
  RwTexture *m_pRemapTexture;
};

