#pragma once

#include <game_sa/CPtrList.h>

struct CSector
{
  CPtrListSingleLink m_buildingPtrListArray;
  CPtrListDoubleLink m_dummyPtrListArray;
};

struct CRepeatSector
{
  CPtrListDoubleLink m_ptrListArray[3];
};
