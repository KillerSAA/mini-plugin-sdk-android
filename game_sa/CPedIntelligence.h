#pragma once 

#include <game_sa/CTaskManager.h>
#include <game_sa/CEventHandler.h>
#include <game_sa/CEventGroup.h>
#include <game_sa/CScanners.h>
#include <game_sa/CMentalState.h>
#include <game_sa/CEventScanner.h>
#include <game_sa/CPedStuckChecker.h>

struct CPedIntelligence
{
  int *m_pPed; // CPed
  CTaskManager m_taskManager;
  CEventHandler m_eventHandler;
  CEventGroup m_eventGroup;
  int m_iDecisionMakerType;
  int m_iDecisionMakerTypeInGroup;
  float m_fHearingRange;
  float m_fSeeingRange;
  int m_iMaxNumFriendsToInform;
  float m_fMaxInformFriendDistance;
  float m_fFollowNodeThresholdDistance;
  int8_t m_iNextEventResponseSequence;
  uint8_t m_iHighestPriorityEventType;
  uint8_t m_iHighestPriorityEventPriority;
  int8_t undefined; // ??
  CVehicleScanner m_vehicleScanner;
  CPedScanner m_pedScanner;
  CMentalState m_mentalState;
  CEventScanner m_eventScanner;
  CCollisionEventScanner m_collisionEventScanner;
  char undefined1[3]; // ??
  CPedStuckChecker m_stuckChecker;
  int m_iStaticCounter;
  uint32_t m_iNumFramesWithoutCollision;
  CVector m_vPedPositionAtFirstCollision;
  CEntity *m_pInterestingEntities[3];
};
