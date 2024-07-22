#pragma once

#include "CPed.h"

struct CAccident
{
  int *m_pInjuredPed; // CPed
  bool m_bBeingDealtWith;
  bool m_bHealed;
  char undefined[2]; // ??
};