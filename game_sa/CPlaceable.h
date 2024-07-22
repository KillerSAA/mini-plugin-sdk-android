#pragma once

#include <game_sa/CSimpleTransform.h>
#include <game_sa/CMatrix.h>

struct CPlaceable
{
  int (**_vptr$CPlaceable)(void);
  CSimpleTransform m_transform;
  CMatrix *m_pMat;
};
