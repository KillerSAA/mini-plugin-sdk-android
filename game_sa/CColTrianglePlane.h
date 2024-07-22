#pragma once

#include "CVector.h"

struct CColTrianglePlane
{
  CVector m_compressedNormal;
  float m_compressedNormalOffset;
  uint8_t m_nPrincipalAxis;
  char undefined[3]; // ??
};
