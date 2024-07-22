#pragma once 

#include "CVector.h"
#include "eCrimeType.h"

struct CCrimeBeingQd
{
  eCrimeType CrimeType;
  uint32_t CrimeID;
  uint32_t TimeOfQing;
  CVector Coors;
  bool bAlreadyReported;
  bool bPoliceDontReallyCare;
  char undefined[2]; // ??
};