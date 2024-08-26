#include "GingerbreadLevelSettings.h"

AGingerbreadLevelSettings::AGingerbreadLevelSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartingSpawnPoint = NULL;
    this->MidLevelSpawnPoint = NULL;
    this->UseRideOnSpawnSequenceTimingSettings = false;
    this->EnableDarkMatterEngineMovement = false;
    this->EnableGlobalInheritedMomentum = false;
    this->EnableGlobalInheritedHorizontalMomentum = false;
    this->DisableLivesSystem = false;
    this->DisableClientSackboySpawn = false;
    this->LevelWideControlMode = EControlMode::None;
    this->WorldLocation = EWorldLocation::Amazon;
    this->EnableCopter = true;
    this->bTrackSackboyOnBouncepads = true;
    this->bApplyGlobalConstraintsAfterEvaluate = false;
    this->SackboySpotShadowInfoRowName = TEXT("Default");
}

USpawnPointComponent* AGingerbreadLevelSettings::GetStartingSpawnPoint(const UObject* WorldContextObject) {
    return NULL;
}

USpawnPointComponent* AGingerbreadLevelSettings::GetMidLevelSpawnPoint(const UObject* WorldContextObject) {
    return NULL;
}

AGingerbreadLevelSettings* AGingerbreadLevelSettings::GetGingerbreadLevelSettings(const UObject* WorldContextObject) {
    return NULL;
}

bool AGingerbreadLevelSettings::GetDisableLivesSystem(const UObject* WorldContextObject) {
    return false;
}


