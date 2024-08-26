#include "GingerbreadCameraManager.h"
#include "Templates/SubclassOf.h"

AGingerbreadCameraManager::AGingerbreadCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveArea = NULL;
}

void AGingerbreadCameraManager::UnregisterPointOfInterest(UObject* point_of_interest) {
}

void AGingerbreadCameraManager::UnregisterGlobalConstraint(const ACameraColliderActor* Collider) {
}

void AGingerbreadCameraManager::UnregisterCameraArea(ACameraArea* Area) {
}

bool AGingerbreadCameraManager::Sumo_RemoveCameraModifier(const UObject* WorldContextObject, UGingerbreadCameraModifier* ModifierToRemove) {
    return false;
}

void AGingerbreadCameraManager::Sumo_RemoveAllCameraModifiers(const UObject* WorldContextObject) {
}

UGingerbreadCameraModifier* AGingerbreadCameraManager::Sumo_AddNewCameraModifier(const UObject* WorldContextObject, TSubclassOf<UGingerbreadCameraModifier> ModifierClass) {
    return NULL;
}

void AGingerbreadCameraManager::StartLevelTransition(float Duration, bool fade_out) {
}

void AGingerbreadCameraManager::RegisterPointOfInterest(UObject* point_of_interest) {
}

void AGingerbreadCameraManager::RegisterGlobalConstraint(const ACameraColliderActor* Collider) {
}

void AGingerbreadCameraManager::RegisterCameraArea(ACameraArea* Area) {
}

AGingerbreadCameraManager* AGingerbreadCameraManager::GetInstance(UWorld* World) {
    return NULL;
}

ACameraArea* AGingerbreadCameraManager::GetCameraArea(const FVector& FocusPoint, float& Distance, TEnumAsByte<EPriorityBehaviour::Type> Filter, ACameraColliderActor*& area_collider) {
    return NULL;
}

ASingleScreenCamera* AGingerbreadCameraManager::GetActiveCamera(const UObject* world_context) {
    return NULL;
}


