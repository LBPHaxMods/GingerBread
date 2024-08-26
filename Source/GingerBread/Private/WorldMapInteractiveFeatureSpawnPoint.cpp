#include "WorldMapInteractiveFeatureSpawnPoint.h"
#include "ESpawnPointType.h"

UWorldMapInteractiveFeatureSpawnPoint::UWorldMapInteractiveFeatureSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlySpawnWhenVisible = false;
    this->OnlySpawnWhenAliveSackboyIsInRange = false;
    this->EnableCameraFocus = false;
    this->bIgnoreFocusTimer = true;
    this->SpawnPointType = ESpawnPointType::WorldMap;
}


