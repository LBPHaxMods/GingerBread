#include "MamapedeVineSpawner.h"

UMamapedeVineSpawner::UMamapedeVineSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceBetweenDrops = 10.00f;
    this->MinimumDistanceBetweenDrops = 9.00f;
    this->ArenaZHeight = 0.00f;
    this->PlaceInArenaVolume = true;
    this->BurrowVFX = NULL;
}

void UMamapedeVineSpawner::VineVisibilityAltered(ASpikeyVineSingleStandaloneMamapede* SpikeyVine, bool NewVisibility) {
}

void UMamapedeVineSpawner::VineFullyDown(ASpikeyVineSingleStandaloneMamapede* SpikeyVine) {
}

void UMamapedeVineSpawner::SetVinePool(UActorPoolComponent* PoolComponent) {
}

void UMamapedeVineSpawner::SetSpawningActor(AMamapede* TargetActor) {
}

void UMamapedeVineSpawner::SetArenaBoundsVolume(ABossArenaBoundsVolume* ArenaBoundsVolumeIn) {
}

bool UMamapedeVineSpawner::IsBurrowActive() const {
    return false;
}

void UMamapedeVineSpawner::DoBurrowingVFX_Implementation(const FVector& burrowLocation) {
}

void UMamapedeVineSpawner::DeactivateVineDropping() {
}

void UMamapedeVineSpawner::ActivateVineDropping(EMamapedeVineSpawningSource NewVineSpawningSource) {
}


