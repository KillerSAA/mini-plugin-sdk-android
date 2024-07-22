#pragma once

struct CInteriorAttr
{
  uint8_t m_type;
  int8_t m_group;
  uint8_t m_width;
  uint8_t m_depth;
  uint8_t m_height;
  int8_t m_door;
  int8_t m_lDoorStart;
  int8_t m_lDoorEnd;
  int8_t m_rDoorStart;
  int8_t m_rDoorEnd;
  int8_t m_tDoorStart;
  int8_t m_tDoorEnd;
  int8_t m_lWindowStart;
  int8_t m_lWindowEnd;
  int8_t m_rWindowStart;
  int8_t m_rWindowEnd;
  int8_t m_tWindowStart;
  int8_t m_tWindowEnd;
  int8_t m_noGoLeft[3];
  int8_t m_noGoBottom[3];
  int8_t m_noGoWidth[3];
  int8_t m_noGoDepth[3];
  uint8_t m_seed;
  uint8_t m_status;
  float m_rot;
};
