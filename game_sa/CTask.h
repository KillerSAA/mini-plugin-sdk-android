#pragma once

struct CTask
{
  int (**_vptr$CTask)(void);
  CTask *m_pParent;
};

struct CTaskSimple : CTask
{
};
