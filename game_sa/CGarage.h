#pragma once

#include <game_sa/CAEDoorAudioEntity.h>
#include <game_sa/CAutomobile.h>

struct CGarageFlags
{
  uint8_t bClosingEmpty : 1;
  uint8_t bDeActivated : 1;
  uint8_t bResprayHappened : 1;
  uint8_t bRotatyDoor : 1;
  uint8_t bInvertRotation : 1;
  uint8_t bLeaveCameraAlone : 1;
  uint8_t bShouldDoorsHaveCollision : 1;
  uint8_t bFreeResprays : 1;
};

struct CGarage {
  float BaseX;
  float BaseY;
  float BaseZ;
  float Delta1X;
  float Delta1Y;
  float Delta2X;
  float Delta2Y;
  float CeilingZ;
  float Delta1Length;
  float Delta2Length;
  float MinX;
  float MaxX;
  float MinY;
  float MaxY;
  float Openness;
  uint32_t TimeOfNextEvent;
  CAutomobile *pCarToCollect;
  uint8_t Name[8];
  uint8_t Type;
  uint8_t State;
  CGarageFlags Flags;
  uint8_t OriginalType;
  CAEDoorAudioEntity m_DoorAudioEntity;
};
