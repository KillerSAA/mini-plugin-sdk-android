#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <game_sa/RsGlobal.h>

// static structs
RsGlobalType* RsGlobal = (RsGlobalType*)(GetSym("RsGlobal"));

//sRadarTrace_Type* sRadarTrace = (sRadarTrace_Type*)(GetSym("_ZN6CRadar13ms_RadarTraceE"));

uintptr_t GetSym(const char* fc){
    void* hGame = aml->GetLibHandle("libGTASA.so");
    return aml->GetSym(hGame, fc);
}

