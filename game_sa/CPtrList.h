#pragma once

#include <game_sa/CPtrNodes.h>

struct CPtrList
{
  CPtrNode *m_pHead;
};

struct CPtrListDoubleLink : CPtrList
{
};


struct CPtrListSingleLink : CPtrList
{
};
