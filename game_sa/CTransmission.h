#pragma once

struct tGearRatio
{
  float fMaxVelocity;
  float fChangeUpVelocity;
  float fChangeDownVelocity;
};

/* 668 */
struct CTransmission
{
  tGearRatio m_GearRatio[6];
  uint8_t m_nDriveType;
  uint8_t m_nEngineType;
  uint8_t m_nNumberOfGears;
  int8_t undefined; // ??
  uint32_t m_nFlags;
  float m_fEngineAcceleration;
  float m_fEngineInertia;
  float m_fMaxVelocity;
  float m_fMaxFlatVelocity;
  float m_fMaxReverseVelocity;
  float m_fVelocity;
};
