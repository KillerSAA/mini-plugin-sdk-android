#pragma once 

static uintptr_t GetSym(const char* fc) {
    return aml->GetSym(aml->GetLibHandle("libGTASA.so"), fc);
}

