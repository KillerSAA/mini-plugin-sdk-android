#pragma once

#include <game_sa/CTaskTimer.h>

struct CMentalState
{
  uint8_t m_iAngerAtPlayer;
  uint8_t m_iLastAngerAtPlayer;
  char undefined[2]; // ??
  CTaskTimer m_angerTimer;
  uint16_t m_iHealth;
  uint16_t m_iLastHealth;
  uint16_t m_iCarHealth;
  uint16_t m_iLastCarHealth;
  uint8_t m_bInCarLastTime;
  char undefined1[3]; // ??
};
