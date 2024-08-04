#pragma once 

static uintptr_t GetSym(const char* fc) {
    static void* hGame = aml->GetLibHandle("libGTASA.so");
    return aml->GetSym(hGame, fc);
}
