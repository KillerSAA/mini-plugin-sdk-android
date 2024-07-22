#pragma once

#include <game_sa/CVector.h>

struct ColData
{
  uint8_t m_nSurfaceType;
  uint8_t m_nPieceType;
  uint8_t m_lighting;
};

struct CColPoint
{
  CVector m_vecPosition;
  float pad;
  CVector m_vecNormal;
  float pad2;
  ColData m_dataA;
  ColData m_dataB;
  char undefined[2]; // ??
  float m_fDepth;
};
