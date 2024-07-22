#pragma once

struct CDamageManager {
  float fWheelDamageEffect;
  uint8_t m_Engine;
  uint8_t m_Wheel[4];
  uint8_t m_Door[6];
  int8_t undefined; // ??
  uint32_t m_Lights;
  uint32_t m_Panels;
};