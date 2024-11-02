#pragma once 

class librarys {
public:
    uintptr_t pGame;
    librarys(){
        pGame = aml->GetLib("libGTASA.so");
    }
};

static uintptr_t GetSym(const char* fc) {
    static void* hGame = aml->GetLibHandle("libGTASA.so");
    return aml->GetSym(hGame, fc);
}

extern librarys libs;