#include "MamapedeShockwaveManagerComponent.h"

UMamapedeShockwaveManagerComponent::UMamapedeShockwaveManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MamapedeShockwaveClass = NULL;
}

void UMamapedeShockwaveManagerComponent::SpawnShockwave(const FVector& Location, ABossArenaBoundsVolume* ArenaBoundsVolume, const TArray<AActor*>& ActorsToIgnore) {
}


