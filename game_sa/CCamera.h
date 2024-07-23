#pragma once


#include <game_sa/CVector.h>
#include <game_sa/CPed.h>
#include <game_sa/CMatrix.h>
#include <game_sa/CGarage.h>
#include <game_sa/CEntity.h>
#include <game_sa/rw/RwCamera.h>
#include <game_sa/CQueuedMode.h>
#include <game_sa/CAutomobile.h>

enum eCamMode : uint16_t {
    MODE_NONE = 0x0,
    MODE_TOPDOWN = 0x1,
    MODE_CLASSIC = 0x2,
    MODE_BEHINDCAR = 0x3,
    MODE_FOLLOWPED = 0x4,
    MODE_AIMING = 0x5,
    MODE_DEBUG = 0x6,
    MODE_SNIPER = 0x7,
    MODE_ROCKETLAUNCHER = 0x8,
    MODE_MODELVIEW = 0x9,
    MODE_BILL = 0xA,
    MODE_SYPHON = 0xB,
    MODE_CIRCLE = 0xC,
    MODE_CHEESYZOOM = 0xD,
    MODE_WHEELCAM = 0xE,
    MODE_FIXED = 0xF,
    MODE_1STPERSON = 0x10,
    MODE_FLYBY = 0x11,
    MODE_CAM_ON_A_STRING = 0x12,
    MODE_REACTION = 0x13,
    MODE_FOLLOW_PED_WITH_BIND = 0x14,
    MODE_CHRIS = 0x15,
    MODE_BEHINDBOAT = 0x16,
    MODE_PLAYER_FALLEN_WATER = 0x17,
    MODE_CAM_ON_TRAIN_ROOF = 0x18,
    MODE_CAM_RUNNING_SIDE_TRAIN = 0x19,
    MODE_BLOOD_ON_THE_TRACKS = 0x1A,
    MODE_IM_THE_PASSENGER_WOOWOO = 0x1B,
    MODE_SYPHON_CRIM_IN_FRONT = 0x1C,
    MODE_PED_DEAD_BABY = 0x1D,
    MODE_PILLOWS_PAPS = 0x1E,
    MODE_LOOK_AT_CARS = 0x1F,
    MODE_ARRESTCAM_ONE = 0x20,
    MODE_ARRESTCAM_TWO = 0x21,
    MODE_M16_1STPERSON = 0x22,
    MODE_SPECIAL_FIXED_FOR_SYPHON = 0x23,
    MODE_FIGHT_CAM = 0x24,
    MODE_TOP_DOWN_PED = 0x25,
    MODE_LIGHTHOUSE = 0x26,
    MODE_SNIPER_RUNABOUT = 0x27,
    MODE_ROCKETLAUNCHER_RUNABOUT = 0x28,
    MODE_1STPERSON_RUNABOUT = 0x29,
    MODE_M16_1STPERSON_RUNABOUT = 0x2A,
    MODE_FIGHT_CAM_RUNABOUT = 0x2B,
    MODE_EDITOR = 0x2C,
    MODE_HELICANNON_1STPERSON = 0x2D,
    MODE_CAMERA = 0x2E,
    MODE_ATTACHCAM = 0x2F,
    MODE_TWOPLAYER = 0x30,
    MODE_TWOPLAYER_IN_CAR_AND_SHOOTING = 0x31,
    MODE_TWOPLAYER_SEPARATE_CARS = 0x32,
    MODE_ROCKETLAUNCHER_HS = 0x33,
    MODE_ROCKETLAUNCHER_RUNABOUT_HS = 0x34,
    MODE_AIMWEAPON = 0x35,
    MODE_TWOPLAYER_SEPARATE_CARS_TOPDOWN = 0x36,
    MODE_AIMWEAPON_FROMCAR = 0x37,
    MODE_DW_HELI_CHASE = 0x38,
    MODE_DW_CAM_MAN = 0x39,
    MODE_DW_BIRDY = 0x3A,
    MODE_DW_PLANE_SPOTTER = 0x3B,
    MODE_DW_DOG_FIGHT = 0x3C,
    MODE_DW_FISH = 0x3D,
    MODE_DW_PLANECAM1 = 0x3E,
    MODE_DW_PLANECAM2 = 0x3F,
    MODE_DW_PLANECAM3 = 0x40,
    MODE_AIMWEAPON_ATTACHED = 0x41
};

struct CCam {
  bool bBelowMinDist;
  bool bBehindPlayerDesired;
  bool m_bCamLookingAtVector;
  bool m_bCollisionChecksOn;
  bool m_bFixingBeta;
  bool m_bTheHeightFixerVehicleIsATrain;
  bool LookBehindCamWasInFront;
  bool LookingBehind;
  bool LookingLeft;
  bool LookingRight;
  bool ResetStatics;
  bool ResetKeyboardStatics;
  bool Rotating;
  int8_t m_undefined; // ??
  int16_t Mode;
  int16_t m_uiFinishTime;
  int m_iDoCollisionChecksOnFrameNum;
  int m_iDoCollisionCheckEveryNumOfFrames;
  int m_iFrameNumWereAt;
  int DirectionWasLooking;
  float m_fSyphonModeTargetZOffSet;
  float m_fAlphaSpeedOverOneFrame;
  float m_fBetaSpeedOverOneFrame;
  float m_fCamBufferedHeight;
  float m_fCamBufferedHeightSpeed;
  float m_fCloseInPedHeightOffset;
  float m_fCloseInPedHeightOffsetSpeed;
  float m_fCloseInCarHeightOffset;
  float m_fCloseInCarHeightOffsetSpeed;
  float m_fDimensionOfHighestNearCar;
  float m_fDistanceBeforeChanges;
  float m_fFovSpeedOverOneFrame;
  float m_fMinDistAwayFromCamWhenInterPolating;
  float m_fPedBetweenCameraHeightOffset;
  float m_fPlayerInFrontSyphonAngleOffSet;
  float m_fRadiusForDead;
  float m_fRealGroundDist;
  float m_fTimeElapsedFloat;
  float m_fTilt;
  float m_fTiltSpeed;
  float m_fTransitionBeta;
  float m_fTrueBeta;
  float m_fTrueAlpha;
  float m_fInitialPlayerOrientation;
  float m_fVerticalAngle;
  float AlphaSpeed;
  float FOV;
  float FOVSpeed;
  float m_fHorizontalAngle;
  float BetaSpeed;
  float Distance;
  float DistanceSpeed;
  float CA_MIN_DISTANCE;
  float CA_MAX_DISTANCE;
  float SpeedVar;
  float m_fCameraHeightMultiplier;
  float m_fTargetZoomGroundOne;
  float m_fTargetZoomGroundTwo;
  float m_fTargetZoomGroundThree;
  float m_fTargetZoomOneZExtra;
  float m_fTargetZoomTwoZExtra;
  float m_fTargetZoomTwoInteriorZExtra;
  float m_fTargetZoomThreeZExtra;
  float m_fTargetZoomZCloseIn;
  float m_fMinRealGroundDist;
  float m_fTargetCloseInDist;
  float Beta_Targeting;
  float X_Targetting;
  float Y_Targetting;
  int32_t CarWeAreFocussingOn;
  float CarWeAreFocussingOnI;
  float m_fCamBumpedHorz;
  float m_fCamBumpedVert;
  int32_t m_nCamBumpedTime;
  CVector m_cvecSourceSpeedOverOneFrame;
  CVector m_cvecTargetSpeedOverOneFrame;
  CVector m_cvecUpOverOneFrame;
  CVector m_cvecTargetCoorsForFudgeInter;
  CVector m_cvecCamFixedModeVector;
  CVector m_cvecCamFixedModeSource;
  CVector m_cvecCamFixedModeUpOffSet;
  CVector m_vecLastAboveWaterCamPosition;
  CVector m_vecBufferedPlayerBodyOffset;
  CVector Front;
  CVector Source;
  CVector SourceBeforeLookBehind;
  CVector Up;
  CVector m_arrPreviousVectors[2];
  CVector m_aTargetHistoryPos[4];
  uint32_t m_nTargetHistoryTime[4];
  int32_t m_nCurrentHistoryPoints;
  CEntity *CamTargetEntity;
  float m_fCameraDistance;
  float m_fIdealAlpha;
  float m_fPlayerVelocity;
  CAutomobile *m_pLastCarEntered;
  CPed *m_pLastPedLookedAt;
  bool m_bFirstPersonRunAboutActive;
  char undefineds[3]; // ??

  // functions 
  //CVector2D& GetCamAngle() {

  //};
};

struct CCamPathSplines
{
  float *m_arr_PathData;
};

struct CVehicleCamTweak
{
  int32_t m_ModelId;
  float m_LenMod;
  float m_TargetZMod;
  float m_PitchMod;
};

struct CCamera : CPlaceable {
  bool m_bAboveGroundTrainNodesLoaded;
  bool m_bBelowGroundTrainNodesLoaded;
  bool m_bCamDirectlyBehind;
  bool m_bCamDirectlyInFront;
  bool m_bCameraJustRestored;
  bool m_bcutsceneFinished;
  bool m_bCullZoneChecksOn;
  bool m_bIdleOn;
  bool m_bInATunnelAndABigVehicle;
  bool m_bInitialNodeFound;
  bool m_bInitialNoNodeStaticsSet;
  bool m_bIgnoreFadingStuffForMusic;
  bool m_bPlayerIsInGarage;
  bool m_bPlayerWasOnBike;
  bool m_bJustCameOutOfGarage;
  bool m_bJustInitalised;
  bool m_bJust_Switched;
  bool m_bLookingAtPlayer;
  bool m_bLookingAtVector;
  bool m_bMoveCamToAvoidGeom;
  bool m_bObbeCinematicPedCamOn;
  bool m_bObbeCinematicCarCamOn;
  bool m_bRestoreByJumpCut;
  bool m_bUseNearClipScript;
  bool m_bStartInterScript;
  bool m_bStartingSpline;
  bool m_bTargetJustBeenOnTrain;
  bool m_bTargetJustCameOffTrain;
  bool m_bUseSpecialFovTrain;
  bool m_bUseTransitionBeta;
  bool m_bUseScriptZoomValuePed;
  bool m_bUseScriptZoomValueCar;
  bool m_bWaitForInterpolToFinish;
  bool m_bItsOkToLookJustAtThePlayer;
  bool m_bWantsToSwitchWidescreenOff;
  bool m_WideScreenOn;
  bool m_1rstPersonRunCloseToAWall;
  bool m_bHeadBob;
  bool m_bVehicleSuspenHigh;
  bool m_bEnable1rstPersonCamCntrlsScript;
  bool m_bAllow1rstPersonWeaponsCamera;
  bool m_bCooperativeCamMode;
  bool m_bAllowShootingWith2PlayersInCar;
  bool m_bDisableFirstPersonInCar;
  int16_t m_ModeForTwoPlayersSeparateCars;
  int16_t m_ModeForTwoPlayersSameCarShootingAllowed;
  int16_t m_ModeForTwoPlayersSameCarShootingNotAllowed;
  int16_t m_ModeForTwoPlayersNotBothInCar;
  bool m_bGarageFixedCamPositionSet;
  bool m_vecDoingSpecialInterPolation;
  bool m_bScriptParametersSetForInterPol;
  bool m_bFading;
  bool m_bMusicFading;
  bool m_bMusicFadedOut;
  bool m_bFailedCullZoneTestPreviously;
  bool m_FadeTargetIsSplashScreen;
  bool WorldViewerBeingUsed;
  uint8_t m_uiTransitionJUSTStarted;
  uint8_t m_uiTransitionState;
  uint8_t m_ActiveCam;
  uint32_t m_uiCamShakeStart;
  uint32_t m_uiFirstPersonCamLastInputTime;
  uint32_t m_uiLongestTimeInMill;
  uint32_t m_uiNumberOfTrainCamNodes;
  uint32_t m_uiTimeLastChange;
  uint32_t m_uiTimeWeLeftIdle_StillNoInput;
  uint32_t m_uiTimeWeEnteredIdle;
  uint32_t m_uiTimeTransitionStart;
  uint32_t m_uiTransitionDuration;
  uint32_t m_uiTransitionDurationTargetCoors;
  int m_BlurBlue;
  int m_BlurGreen;
  int m_BlurRed;
  int m_BlurType;
  int m_iWorkOutSpeedThisNumFrames;
  int m_iNumFramesSoFar;
  int m_iCurrentTrainCamNode;
  int m_motionBlur;
  int m_imotionBlurAddAlpha;
  int m_iCheckCullZoneThisNumFrames;
  int m_iZoneCullFrameNumWereAt;
  int WhoIsInControlOfTheCamera;
  int32_t m_nCarZoom;
  float m_fCarZoomBase;
  float m_fCarZoomTotal;
  float m_fCarZoomSmoothed;
  float m_fCarZoomValueScript;
  int32_t m_nPedZoom;
  float m_fPedZoomBase;
  float m_fPedZoomTotal;
  float m_fPedZoomSmoothed;
  float m_fPedZoomValueScript;
  float CamFrontXNorm;
  float CamFrontYNorm;
  float DistanceToWater;
  float HeightOfNearestWater;
  float FOVDuringInter;
  float LODDistMultiplier;
  float GenerationDistMultiplier;
  float m_fAlphaSpeedAtStartInter;
  float m_fAlphaWhenInterPol;
  float m_fAlphaDuringInterPol;
  float m_fBetaDuringInterPol;
  float m_fBetaSpeedAtStartInter;
  float m_fBetaWhenInterPol;
  float m_fFOVWhenInterPol;
  float m_fFOVSpeedAtStartInter;
  float m_fStartingBetaForInterPol;
  float m_fStartingAlphaForInterPol;
  float m_PedOrientForBehindOrInFront;
  float m_CameraAverageSpeed;
  float m_CameraSpeedSoFar;
  float m_fCamShakeForce;
  float m_fFovForTrain;
  float m_fFOV_Wide_Screen;
  float m_fNearClipScript;
  float m_fOldBetaDiff;
  float m_fPositionAlongSpline;
  float m_ScreenReductionPercentage;
  float m_ScreenReductionSpeed;
  float m_AlphaForPlayerAnim1rstPerson;
  float Orientation;
  float PlayerExhaustion;
  float SoundDistUp;
  float SoundDistUpAsRead;
  float SoundDistUpAsReadOld;
  float m_fAvoidTheGeometryProbsTimer;
  int16_t m_nAvoidTheGeometryProbsDirn;
  int8_t m_undefined0; // ??
  int8_t m_undefined1; // ??
  float m_fWideScreenReductionAmount;
  float m_fStartingFOVForInterPol;
  CCam Cams[3];
  CGarage *pToGarageWeAreIn;
  CGarage *pToGarageWeAreInForHackAvoidFirstPerson;
  CQueuedMode m_PlayerMode;
  CQueuedMode PlayerWeaponMode;
  CVector m_PreviousCameraPosition;
  CVector m_RealPreviousCameraPosition;
  CVector m_cvecAimingTargetCoors;
  CVector m_vecFixedModeVector;
  CVector m_vecFixedModeSource;
  CVector m_vecFixedModeUpOffSet;
  CVector m_vecCutSceneOffset;
  CVector m_cvecStartingSourceForInterPol;
  CVector m_cvecStartingTargetForInterPol;
  CVector m_cvecStartingUpForInterPol;
  CVector m_cvecSourceSpeedAtStartInter;
  CVector m_cvecTargetSpeedAtStartInter;
  CVector m_cvecUpSpeedAtStartInter;
  CVector m_vecSourceWhenInterPol;
  CVector m_vecTargetWhenInterPol;
  CVector m_vecUpWhenInterPol;
  CVector m_vecClearGeometryVec;
  CVector m_vecGameCamPos;
  CVector SourceDuringInter;
  CVector TargetDuringInter;
  CVector UpDuringInter;
  CVector m_vecAttachedCamOffset;
  CVector m_vecAttachedCamLookAt;
  float m_fAttachedCamAngle;
  RwCamera *m_pRwCamera;
  CEntity *pTargetEntity;
  CEntity *pAttachedEntity;
  CCamPathSplines m_arrPathArray[4];
  bool m_bMirrorActive;
  bool m_bResetOldMatrix;
  int8_t m_undefined2; // ??
  int8_t m_undefined3; // ??
  float m_sphereMapRadius;
  CMatrix m_cameraMatrix;
  CMatrix m_cameraMatrixOld;
  CMatrix m_viewMatrix;
  CMatrix m_matInverse;
  CMatrix m_matMirrorInverse;
  CMatrix m_matMirror;
  CVector m_vecFrustumNormals[4];
  CVector m_vecFrustumWorldNormals[4];
  CVector m_vecFrustumWorldNormals_Mirror[4];
  float m_fFrustumPlaneOffsets[4];
  float m_fFrustumPlaneOffsets_Mirror[4];
  CVector m_vecOldSourceForInter;
  CVector m_vecOldFrontForInter;
  CVector m_vecOldUpForInter;
  float m_vecOldFOVForInter;
  float m_fFloatingFade;
  float m_fFloatingFadeMusic;
  float m_fTimeToFadeOut;
  float m_fTimeToFadeMusic;
  float m_fTimeToWaitToFadeMusic;
  float m_fFractionInterToStopMoving;
  float m_fFractionInterToStopCatchUp;
  float m_fFractionInterToStopMovingTarget;
  float m_fFractionInterToStopCatchUpTarget;
  float m_fGaitSwayBuffer;
  float m_fScriptPercentageInterToStopMoving;
  float m_fScriptPercentageInterToCatchUp;
  uint32_t m_fScriptTimeForInterPolation;
  int16_t m_iFadingDirection;
  int8_t m_undefined4; // ??
  int8_t m_undefined5; // ?? 
  int m_iModeObbeCamIsInForCar;
  int16_t m_iModeToGoTo;
  int16_t m_iMusicFadingDirection;
  int16_t m_iTypeOfSwitch;
  int8_t m_undefined6; // ??
  int8_t m_undefined7; // ??
  uint32_t m_uiFadeTimeStarted;
  uint32_t m_uiFadeTimeStartedMusic;
  int32_t m_numExtrasEntitysToIgnore;
  CEntity *m_pExtrasEntitysToIgnore[2];
  float m_duckZMod;
  float m_duckZMod_Aim;
  float m_vectorTrackStartTime;
  float m_vectorTrackEndTime;
  CVector m_vectorTrackFrom;
  CVector m_vectorTrackTo;
  bool m_bVectorTrackSmoothEnds;
  int8_t m_undefined8; // ??
  int8_t m_undefined9; // ??
  int8_t m_undefined10; // ??
  CVector m_VectorTrackScript;
  bool m_bVectorTrackScript;
  int8_t m_undefined11; // ??
  int8_t m_undefined12; // ??
  int8_t m_undefined13; // ??
  float m_DegreeHandShake;
  float m_shakeStartTime;
  float m_shakeEndTime;
  bool m_bShakeScript;
  int8_t m_undefined14; // ??
  int8_t m_undefined15; // ??
  int8_t m_undefined16; // ??
  int32_t m_CurShakeCam;
  float m_FOVLerpStartTime;
  float m_FOVLerpEndTime;
  float m_FOVLerpStart;
  float m_FOVLerpEnd;
  bool m_bFOVLerpSmoothEnds;
  bool m_bFOVScript;
  int8_t m_undefined17; // ??
  int8_t m_undefined18; // ??
  float m_MyFOV;
  float m_vectorMoveStartTime;
  float m_vectorMoveEndTime;
  CVector m_vectorMoveFrom;
  CVector m_vectorMoveTo;
  bool m_bVectorMoveSmoothEnds;
  int8_t m_undefined19; // ??
  int8_t m_undefined20; // ??
  int8_t m_undefined21; // ??
  CVector m_VectorMoveScript;
  bool m_bVectorMoveScript;
  bool m_bPersistFOV;
  bool m_bPersistCamPos;
  bool m_bPersistCamLookAt;
  bool m_bForceCinemaCam;
  int8_t m_undefined22; // ??
  int8_t m_undefined23; // ??
  int8_t m_undefined24; // ??
  CVehicleCamTweak m_VehicleTweaks[5];
  bool m_bInitedVehicleCamTweaks;
  int8_t m_undefined25; // ??
  int8_t m_undefined26; // ??
  int8_t m_undefined27; // ??
  float m_VehicleTweakLenMod;
  float m_VehicleTweakTargetZMod;
  float m_VehicleTweakPitchMod;
  int32_t m_VehicleTweakLastModelId;
  float m_TimeStartFOVLO;
  float m_TimeEndFOVLO;
  float m_FOVStartFOVLO;
  CVector m_StartPositionFOVLO;
  float m_FOVTargetFOVLO;
  bool m_bSmoothLerpFOVLO;
  bool m_bInitLockOnCam;
  int8_t m_undefined28; // ??
  int8_t m_undefined29; // ??
};

extern CCamera* TheCamera;
