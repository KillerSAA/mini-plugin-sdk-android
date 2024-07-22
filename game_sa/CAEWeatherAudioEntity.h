#pragma once

#include "CAEAudioEntity.h"

struct CAEWeatherAudioEntity : CAEAudioEntity
{
  int8_t m_nLastThunderFrequencyIndex;
  char undefined[3]; // ??
}; // _ZN8CWeather20m_WeatherAudioEntityE

