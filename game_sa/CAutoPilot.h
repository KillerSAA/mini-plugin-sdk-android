#pragma once

struct CNodeAddress
{
  uint16_t Region;
  uint16_t Index;
};

/* 1246 */
struct CLinkAddress
{
  uint16_t Address;
};

struct CAutoPilot
{
  CNodeAddress OldNode;
  CNodeAddress NewNode;
  CNodeAddress VeryOldNode;
  int32_t TimeToLeaveLink;
  int32_t TimeToGetToNextLink;
  CLinkAddress OldLink;
  CLinkAddress NewLink;
  CLinkAddress VeryOldLink;
  char undefined[2]; // ??
  uint32_t LastTimeNotStuck;
  uint32_t LastTimeMoving;
  int8_t InvertDirVeryOldLink;
  int8_t InvertDirOldLink;
  int8_t InvertDirNewLink;
  int8_t OldLane;
  int8_t NewLane;
  int8_t DrivingMode;
  int8_t Mission;
  int8_t TempAction;
  uint32_t TempActionFinish;
  uint32_t LastTimeWeStartedTempActReverse;
  uint8_t WhatToTryForReverse;
  uint8_t NumTimesWantingToChangeNodes;
  char undefined1[2]; // ??
  float ActualSpeed;
  float MaxSpeedBuffer;
  uint8_t CruiseSpeed;
  int8_t SpeedFromNodes;
  char undefined2[2]; // ??
  float SpeedMultiplier;
  uint8_t HooverDistFromTarget;
  int8_t SpeedCheat;
  int8_t AimAheadOfTarget;
  uint8_t SlowingDownForCar : 1;
  uint8_t SlowingDownForPed : 1;
  uint8_t AvoidLevelTransitions : 1;
  uint8_t bAlwaysInFastLane : 1;
  uint8_t bAlwaysInSlowLane : 1;
  uint8_t bWarnTargetEntity : 1;
  uint8_t bDontGoAgainstTraffic : 1;
  uint8_t bLeaveAfterAWhile : 1;
  uint8_t bWaitForValidNodes : 1;
  uint8_t bCarHasToReverseFirst : 1;
  uint8_t AISwitchToStraightLineDistance;
  uint8_t FollowCarDistance;
  uint8_t TargetReachedDist;
  int8_t LaneChangeCounter;
  int8_t FramesFloating;
  int16_t ConstrainAreaMinX;
  int16_t ConstrainAreaMaxX;
  int16_t ConstrainAreaMinY;
  int16_t ConstrainAreaMaxY;
  char undefined3[2]; // ??
  CVector TargetCoors;
  CNodeAddress aPathNodeList[8];
  int16_t NumPathNodes;
  char undefined4[2]; // ??
  CEntity *pTargetEntity;
  CEntity *pObstructingEntity;
  int8_t RecordingNumber;
  int8_t Diversion;
  char undefined5[2]; // ??
};
