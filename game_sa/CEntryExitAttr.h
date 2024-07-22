#pragma once 

struct CEntryExitAttr
{
  float prot;
  float wx;
  float wy;
  float spawnx;
  float spawny;
  float spawnz;
  float spawnrot;
  int16_t areacode;
  uint8_t flags;
  uint8_t extracol;
  char cTitle[8];
  uint8_t openTime;
  uint8_t shutTime;
  uint8_t extraFlags;
  int8_t undefined; // ??
};
