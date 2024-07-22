#pragma once

#include "CVector.h"

struct CPlantLocTri
{
  CVector m_V1;
  CVector m_V2;
  CVector m_V3;
  CVector m_Center;
  float m_SphereRadius;
  float m_Seed[3];
  uint16_t m_nMaxNumPlants[3];
  uint8_t m_nSurfaceType;
  uint8_t m_nLighting;
  uint8_t m_createsPlants : 1;
  uint8_t m_createsObjects : 1;
  uint8_t m_createdObjects : 1;
  uint8_t m_pad : 5;
  char undefined[3]; // ??
  CPlantLocTri *m_pNextTri;
  CPlantLocTri *m_pPrevTri;
};

