#pragma once 

#include <game_sa/CVector.h>

struct CStoredCollPoly
{
  CVector V1;
  CVector V2;
  CVector V3;
  bool bValidPolyStored;
  char undefined[3]; // ??
  uint32_t lighting;
};