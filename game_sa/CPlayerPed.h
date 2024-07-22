#pragma once

#include "CPed.h"

struct CPlayerPed : CPed
{
  CPed *m_pMouseLockOnRecruitPed;
  int m_iMouseLockOnRecruitTimer;
};