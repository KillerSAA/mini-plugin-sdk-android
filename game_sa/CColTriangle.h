#pragma once

struct CColTriangle
{
  int32_t m_nIndex1;
  int32_t m_nIndex2;
  int32_t m_nIndex3;
  uint8_t m_nSurfaceType;
  uint8_t m_nLighting;
  char undefined[2]; // ??
};
