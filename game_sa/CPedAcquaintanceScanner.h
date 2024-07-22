#pragma once

#include "CTaskTimer.h"

struct CPedAcquaintanceScanner
{
  CTaskTimer m_timer;
  bool m_bActivatedEverywhere;
  bool m_bActivatedInVehicle;
  bool m_bActivatedDuringScriptCommands;
  int8_t undefined; // ??
};