#include "GingerbreadSetupManager.h"

AGingerbreadSetupManager::AGingerbreadSetupManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCreateCraftingManager = true;
    this->bCreateSingleScreenCamera = true;
    this->bCreateConfigObjects = true;
    this->bCreateDefaultCameraArea = true;
    this->bCreateGreyboxFloor = false;
    this->bCreateLightStudio = false;
    this->bCreatePostProcessVolume = false;
}

void AGingerbreadSetupManager::SetSackboyOcclusionIntensityGlobal(const UObject* WorldContextObject, const float Intensity) {
}

void AGingerbreadSetupManager::SetSackboyOcclusionIntensity(const float Intensity) {
}


