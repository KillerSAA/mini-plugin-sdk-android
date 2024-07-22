#pragma once

#include <game_sa/CTask.h>
#include <game_sa/CPed.h>
#include <game_sa/CTaskTimer.h>
#include <game_sa/CEvent.h>

struct CEventHandlerHistory
{
  CTask *m_pAbortedTask;
  CEvent *m_pCurrentEventActive;
  CEvent *m_pCurrentEventPassive;
  CEvent *m_pStoredEventActive;
  CTaskTimer m_storeTimer;
};

struct CEventHandler
{
  int *m_pPed; // CPed
  CEventHandlerHistory m_history;
  CTask *m_pTaskPhysResponse;
  CTask *m_pTaskEventResponse;
  CTaskSimple *m_pTaskSecondaryAim;
  CTaskSimple *m_pTaskSecondarySay;
  CTaskSimple *m_pTaskSecondaryPartialAnim;
};
