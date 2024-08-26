#include "GingerbreadLevelSettingsDataAsset.h"

UGingerbreadLevelSettingsDataAsset::UGingerbreadLevelSettingsDataAsset() {
    this->UseRideOnSpawnSequenceTimingSettings = false;
    this->EnableDarkMatterEngineMovement = false;
    this->EnableGlobalInheritedMomentum = false;
    this->DisableLivesSystem = false;
    this->DisableClientSackboySpawn = false;
    this->EnableCopter = true;
    this->LevelWideControlMode = EControlMode::None;
    this->WorldLocation = EWorldLocation::Amazon;
    this->bTrackSackboyOnBouncepads = true;
    this->bApplyGlobalConstraintsAfterEvaluate = false;
    this->SackboySpotShadowDataTable = NULL;
    this->SackboySpotShadowInfoRowName = TEXT("Default");
}


