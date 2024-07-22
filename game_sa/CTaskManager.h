#pragma once

#include <game_sa/CTask.h>
#include <game_sa/CPed.h>

struct CTaskManager
{
  CTask *m_tasks[5];
  CTask *m_tasksSecondary[6];
  int *m_pPed; // CPed
};