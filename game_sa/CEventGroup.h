#pragma once

#include <game_sa/CEvent.h>

struct CEventGroup
{
  int (**_vptr$CEventGroup)(void);
  int *m_pPed; // CPed
  int m_iNoOfEvents;
  CEvent *m_events[16];
};
