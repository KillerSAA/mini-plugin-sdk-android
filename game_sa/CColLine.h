#pragma once

#include "CVector.h"

struct CColLine
{
  CVector m_vecStart;
  uint32_t m_pad;
  CVector m_vecEnd;
  uint32_t m_pad2;
};
