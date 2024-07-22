#pragma once

#include "CBox.h"
#include "CSphere.h"

struct CBoundingBox
{
  CBox m_boxBound;
  CSphere m_sphereBound;
};
