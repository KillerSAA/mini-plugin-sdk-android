#pragma once

struct CPtrNode
{
  void *m_pVoid;
  CPtrNode *m_pNext;
};

struct CPtrNodeDoubleLink : CPtrNode
{
  CPtrNodeDoubleLink *m_pPrevious;
};
