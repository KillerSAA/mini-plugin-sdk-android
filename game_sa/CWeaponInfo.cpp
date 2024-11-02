#include <mod/amlmod.h>
#include <sdk/Call.h>
#include <game_sa/sdk.h>

#include "CWeaponInfo.h"

#define GOT_PTR(_addr) (uintptr_t)(*(uintptr_t *)(_addr + libs.pGame))

CWeaponInfo* aWeaponInfo = (CWeaponInfo*)(GetSym("aWeaponInfo"));
char **CWeaponInfo::ms_aWeaponNames = (char **)GetSym("_ZN11CWeaponInfo15ms_aWeaponNamesE");

void CWeaponInfo::LoadWeaponData() {
    Call::FunctionFastCall<void>(0x4746E0 + libs.pGame);
}

CWeaponInfo *CWeaponInfo::GetWeaponInfo(eWeaponType weapon, unsigned char skill) {
    return Call::FunctionFastCall<CWeaponInfo*, eWeaponType, unsigned char>(GOT_PTR(0x67010C), weapon, skill);
}

eWeaponType CWeaponInfo::FindWeaponType(const char* w) {
    return Call::FunctionFastCall<eWeaponType, const char*>(GOT_PTR(0x671044), w);
}

eFireType CWeaponInfo::FindWeaponFireType(const char* w) {
    return Call::FunctionFastCall<eFireType, const char*>(GOT_PTR(0x672A1C), w);
}

void CWeaponInfo::Initialise() {
    Call::FunctionFastCall<void>(GOT_PTR(0x67375C));
}

void CWeaponInfo::Shutdown() {
    Call::FunctionFastCall<void>(GOT_PTR(0x66FEE8));
}