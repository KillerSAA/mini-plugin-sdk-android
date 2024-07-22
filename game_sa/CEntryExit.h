#pragma once

#include "CEntryExit.h"
#include "CRect.h"

struct CEntryExit
{
  char cTitle[8];
  CRect rect;
  float pz;
  float prot;
  float spawnx;
  float spawny;
  float spawnz;
  float spawnrot;
  uint16_t flags;
  uint8_t areacode;
  uint8_t extracol;
  uint8_t openTime;
  uint8_t shutTime;
  int8_t NumRandomPedsToCreate;
  int8_t undefined; // ??
  CEntryExit *pLink;
};