#include "WorldMapMultiplayerSpawnPoint.h"
#include "ESpawnPointType.h"

UWorldMapMultiplayerSpawnPoint::UWorldMapMultiplayerSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnPointType = ESpawnPointType::WorldMapMultiplayer;
}

void UWorldMapMultiplayerSpawnPoint::SetSplineTransform_Implementation(const int32 splineIndex, const FTransform& SplineTransform) {
}


