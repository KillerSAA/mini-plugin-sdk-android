#include <mod/amlmod.h>
#include <sdk/Call.h>
#include <game_sa/sdk.h>

#include "CWeaponInfo.h"

CWeaponInfo* aWeaponInfo = (CWeaponInfo*)(GetSym("aWeaponInfo"));
char **CWeaponInfo::ms_aWeaponNames = (char **)GetSym("_ZN11CWeaponInfo15ms_aWeaponNamesE");

void CWeaponInfo::LoadWeaponData() {
    Call::FunctionFastCall<void>(GetSym("_ZN11CWeaponInfo14LoadWeaponDataEv"));
}

CWeaponInfo *CWeaponInfo::GetWeaponInfo(eWeaponType weapon, unsigned char skill) {
    return Call::FunctionFastCall<CWeaponInfo*, eWeaponType, unsigned char>(GetSym("_ZN11CWeaponInfo13GetWeaponInfoE11eWeaponTypea"), weapon, skill);
}

eWeaponType CWeaponInfo::FindWeaponType(const char* w) {
    return Call::FunctionFastCall<eWeaponType, const char*>(GetSym("_ZN11CWeaponInfo14FindWeaponTypeEPKc"), w);
}

eFireType CWeaponInfo::FindWeaponFireType(const char* w) {
    return Call::FunctionFastCall<eFireType, const char*>(GetSym("_ZN11CWeaponInfo18FindWeaponFireTypeEPKc"), w);
}

void CWeaponInfo::Initialise() {
    Call::FunctionFastCall<void>(GetSym("_ZN11CWeaponInfo10InitialiseEv"));
}

void CWeaponInfo::Shutdown() {
    Call::FunctionFastCall<void>(GetSym("_ZN11CWeaponInfo8ShutdownEv"));
}