#pragma once

#include "CVector.h"
#include "CColSphere.h"

struct CColDisk : CColSphere
{
  CVector m_vecThickness;
  float m_fThickness;
};