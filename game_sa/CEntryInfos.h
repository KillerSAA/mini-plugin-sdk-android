#pragma once

#include <game_sa/CPtrNodes.h>
#include <game_sa/CSector.h>

union CEntryInfoNodeUnion
{
  CSector *m_pStandardSector;
  CRepeatSector *m_pRepeatSector;
};

struct CEntryInfoNode
{
  CPtrListDoubleLink *m_pList;
  CPtrNodeDoubleLink *m_pNode;
  CEntryInfoNodeUnion m_pSector;
  CEntryInfoNode *m_pPrevious;
  CEntryInfoNode *m_pNext;
};

struct CEntryInfoList
{
  CEntryInfoNode *m_pHead;
};
