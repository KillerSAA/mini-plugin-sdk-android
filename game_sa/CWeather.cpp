#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <sdk/Call.h>

#include "CAEWeatherAudioEntity.h"
#include "CWeather.h"
#include "CVector.h"

// vars //
float &CWeather::TrafficLightsBrightness = *(float*)GetSym("_ZN8CWeather23TrafficLightsBrightnessE");
bool &CWeather::bScriptsForceRain = *(bool*)GetSym("_ZN8CWeather17bScriptsForceRainE");
float &CWeather::Earthquake = *(float*)GetSym("_ZN8CWeather10EarthquakeE");
int &CWeather::TwisterIndex = *(int*)GetSym("_ZN8CWeather12TwisterIndexE");
unsigned int &CWeather::CurrentRainParticleStrength = *(unsigned int*)GetSym("_ZN8CWeather27CurrentRainParticleStrengthE");
unsigned int &CWeather::LightningStartY = *(unsigned int*)GetSym("_ZN8CWeather15LightningStartYE");
unsigned int &CWeather::LightningStartX = *(unsigned int*)GetSym("_ZN8CWeather15LightningStartXE");
int &CWeather::LightningFlashLastChange = *(int*)GetSym("_ZN8CWeather24LightningFlashLastChangeE");
int &CWeather::WhenToPlayLightningSound = *(int*)GetSym("_ZN8CWeather24WhenToPlayLightningSoundE");
unsigned int &CWeather::LightningDuration = *(unsigned int*)GetSym("_ZN8CWeather17LightningDurationE");
unsigned int &CWeather::LightningStart = *(unsigned int*)GetSym("_ZN8CWeather14LightningStartE");
bool &CWeather::LightningFlash = *(bool*)GetSym("_ZN8CWeather14LightningFlashE");
bool &CWeather::LightningBurst = *(bool*)GetSym("_ZN8CWeather14LightningBurstE");
float &CWeather::HeadLightsSpectrum = *(float*)GetSym("_ZN8CWeather18HeadLightsSpectrumE");
float &CWeather::WaterFogFXControl = *(float*)GetSym("_ZN8CWeather17WaterFogFXControlE");
float &CWeather::WaterFog = *(float*)GetSym("_ZN8CWeather8WaterFogE");
float &CWeather::HeatHazeFXControl = *(float*)GetSym("_ZN8CWeather17HeatHazeFXControlE");
float &CWeather::HeatHaze = *(float*)GetSym("_ZN8CWeather8HeatHazeE");
float &CWeather::SunGlare = *(float*)GetSym("_ZN8CWeather8SunGlareE");
float &CWeather::Rainbow = *(float*)GetSym("_ZN8CWeather7RainbowE");
float &CWeather::Wavyness = *(float*)GetSym("_ZN8CWeather8WavynessE");
float &CWeather::WindClipped = *(float*)GetSym("_ZN8CWeather11WindClippedE");
CVector &CWeather::WindDir = *(CVector*)GetSym("_ZN8CWeather7WindDirE");
float &CWeather::Wind = *(float*)GetSym("_ZN8CWeather4WindE");
float &CWeather::Sandstorm = *(float*)GetSym("_ZN8CWeather9SandstormE");
float &CWeather::Rain = *(float*)GetSym("_ZN8CWeather4RainE");
float &CWeather::InTunnelness = *(float*)GetSym("_ZN8CWeather12InTunnelnessE");
float &CWeather::WaterDepth = *(float*)GetSym("_ZN8CWeather10WaterDepthE");
float &CWeather::UnderWaterness = *(float*)GetSym("_ZN8CWeather14UnderWaternessE");
float &CWeather::ExtraSunnyness = *(float*)GetSym("_ZN8CWeather14ExtraSunnynessE");
float &CWeather::Foggyness_SF = *(float*)GetSym("_ZN8CWeather12Foggyness_SFE");
float &CWeather::Foggyness = *(float*)GetSym("_ZN8CWeather9FoggynessE");
float &CWeather::CloudCoverage = *(float*)GetSym("_ZN8CWeather13CloudCoverageE");
float &CWeather::WetRoads = *(float*)GetSym("_ZN8CWeather8WetRoadsE");
float &CWeather::InterpolationValue = *(float*)GetSym("_ZN8CWeather18InterpolationValueE");
unsigned int &CWeather::WeatherTypeInList = *(unsigned int*)GetSym("_ZN8CWeather17WeatherTypeInListE");
short &CWeather::WeatherRegion = *(short*)GetSym("_ZN8CWeather13WeatherRegionE");
short &CWeather::ForcedWeatherType = *(short*)GetSym("_ZN8CWeather17ForcedWeatherTypeE");
short &CWeather::NewWeatherType = *(short*)GetSym("_ZN8CWeather14NewWeatherTypeE");
short &CWeather::OldWeatherType = *(short*)GetSym("_ZN8CWeather14OldWeatherTypeE");
CAEWeatherAudioEntity &CWeather::m_WeatherAudioEntity = *(CAEWeatherAudioEntity*)GetSym("_ZN8CWeather20m_WeatherAudioEntityE");

// functions //

void CWeather::AddRain() {
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather7AddRainEv"));
}

void CWeather::AddSandStormParticles(){
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather21AddSandStormParticlesEv"));
}

unsigned char* CWeather::FindWeatherTypesList() {
    return Call::FunctionFastCall<unsigned char*>(GetSym("_ZN8CWeather20FindWeatherTypesListEv"));
}

void CWeather::ForceWeather(short weatherType) {
    Call::FunctionFastCall<void, short>(GetSym("_ZN8CWeather12ForceWeatherEs"), weatherType);
}

void CWeather::ForceWeatherNow(short weatherType) {
    Call::FunctionFastCall<void, short>(GetSym("_ZN8CWeather15ForceWeatherNowEs"), weatherType);
}

bool CWeather::ForecastWeather(int weatherType, int numSteps) {
    return Call::FunctionFastCall<bool, int, int>(GetSym("_ZN8CWeather15ForecastWeatherEii"), weatherType, numSteps);
}

void CWeather::Init() {
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather4InitEv"));
}

void CWeather::ReleaseWeather() {
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather14ReleaseWeatherEv"));
}

void CWeather::RenderRainStreaks() {
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather17RenderRainStreaksEv"));
}

void CWeather::SetWeatherToAppropriateTypeNow() {
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather30SetWeatherToAppropriateTypeNowEv"));
}

void CWeather::Update() {
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather6UpdateEv"));
}
void CWeather::UpdateInTunnelness() {
    Call::FunctionFastCall<void>(GetSym("_ZN8CWeather18UpdateInTunnelnessEv"));
}

void CWeather::UpdateWeatherRegion(CVector* posn) {
    Call::FunctionFastCall<void, CVector*>(GetSym("_ZN8CWeather19UpdateWeatherRegionEP7CVector"), posn);
}
