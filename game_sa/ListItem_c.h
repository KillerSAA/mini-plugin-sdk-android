#pragma once

struct ListItem_c
{
  ListItem_c *m_prev;
  ListItem_c *m_next;
};

struct List_c
{
  ListItem_c *m_head;
  ListItem_c *m_tail;
  int32_t m_numItems;
};
