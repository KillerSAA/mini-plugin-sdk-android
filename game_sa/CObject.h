#pragma once
#include "CPtrList.h"
#include "CPhysical.h"
#include "CFire.h"
#include "CWeapon.h"
#include "rw/RwTexture.h"
#include "CObjectInfo.h" 
#include "CDummyObject.h"

struct CObject : CPhysical
{
    CPtrNodeDoubleLink *m_pControlListNode;
    uint8_t ObjectCreatedBy;
    uint8_t ObjectMessage;
    uint16_t ObjectMessageAmount;
    struct { // plugin sdk does not yet have all flags documented
    uint32_t bIsPickUp : 1;
    uint32_t bNoPickUpEffects : 1;
    uint32_t bPickUpCostsMoney : 1;
    uint32_t bPickUpOutOfStock : 1;
    uint32_t bGlassShattered : 1;
    uint32_t bGlassBrokenAltogether : 1;
    uint32_t bHasExploded : 1;
    uint32_t bParentIsACar : 1;
    uint32_t bLampPostCollision : 1;
    uint32_t bCanBeTargettedByPlayer : 1;
    uint32_t bHasBeenShattered : 1;
    uint32_t bTrainNearby : 1;
    uint32_t bHasBeenPhotographed : 1;
    uint32_t bIsStealable : 1;
    uint32_t bWasDoorLocked : 1;
    uint32_t bDoorOpenedEnough : 1;
    uint32_t bReferencedCollision : 1;
    uint32_t bScaled : 1;
    uint32_t bWinchCanPickMeUp : 1;
    uint32_t bLandedOnMovingCol : 1;
    uint32_t ScriptBrainStatus : 2;
    uint32_t bFadeOut : 1;
    uint32_t bCalculateLighting : 1;
    uint32_t bEnableDisabledAttractors : 1;
    uint32_t bDoPreRenderButDontRender : 1;
    } m_nObjectFlags;
    uint8_t m_nCollisionDamageEffect;
    uint8_t m_nStoredCollisionDamageEffect;
    uint8_t KeepieUppyCounter;
    int8_t m_Garage;
    int8_t LastDamagedWeaponType;
    uint8_t m_storedCollisionLighting;
    int16_t m_nParentModelIndex;
    unsigned char m_nCarColor[4]; // this is used for detached car parts
    uint32_t m_nEndOfLifeTime; // time when this object must be deleted
    float m_fHealth;
    float m_fDoorStartAngle; // this is used for door objects
    float m_fScale;
    CObjectInfo *m_pObjectInfo;
    CFire *m_pFire;
    int16_t StreamedScriptBrainToLoad;
    char undefined[2]; // ??
    const char *m_remapTxdName;
    RwTexture *m_pRemapTexture; // this is used for detached car parts
    CDummyObject *m_pDummyObject; // used for dynamic objects like garage doors, train crossings etc.
    int32_t m_dwBurnTime; // time when particles must be stopped
    float m_burnMult;

    // funcs //
    void ProcessGarageDoorBehaviour();
    bool CanBeDeleted();
    void SetRelatedDummy(CDummyObject* relatedDummy);
    bool TryToExplode();
    void SetObjectTargettable(unsigned char targetable);
    bool CanBeTargetted();
    void RefModelInfo(int modelIndex);
    void SetRemapTexture(RwTexture* remapTexture, short txdIndex);
    float GetRopeHeight();
    void SetRopeHeight(float height);
    CEntity* GetObjectCarriedWithRope();
    void ReleaseObjectCarriedWithRope();
    void AddToControlCodeList();
    void RemoveFromControlCodeList();
    void ResetDoorAngle();
    void LockDoor();
    void Init();
    void DoBurnEffect();
    unsigned char GetLightingFromCollisionBelow();
    void ProcessSamSiteBehaviour();
    void ProcessTrainCrossingBehaviour();
    void ObjectDamage(float damage, CVector* fxOrigin, CVector* fxDirection, CEntity* damager, eWeaponType weaponType);
    void Explode();
    void ObjectFireDamage(float damage, CEntity* damager);

    void GrabObjectToCarryWithRope(CPhysical* attachTo);
    bool CanBeUsedToTakeCoverBehind();
    static class CObject* Create(int modelIndex);
    static class CObject* Create(CDummyObject* dummyObject);
    void ProcessControlLogic();

    // static functions

    static void SetMatrixForTrainCrossing(CMatrix* matrix, float arg1);
    static void TryToFreeUpTempObjects(int numObjects);
    static void DeleteAllTempObjects();
    static void DeleteAllMissionObjects();
    static void DeleteAllTempObjectsInArea(CVector point, float radius);
};