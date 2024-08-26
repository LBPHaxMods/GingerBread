#include "SpawnAttractionCollectableComponent.h"
#include "Net/UnrealNetwork.h"

USpawnAttractionCollectableComponent::USpawnAttractionCollectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnTimelineCurve = NULL;
    this->MinimumSpawnDuration = 1.00f;
    this->MaximumSpawnDuration = 1.00f;
    this->LaunchDistance = 50.00f;
    this->RandomisedSpawnDuration = 0.00f;
}

void USpawnAttractionCollectableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnAttractionCollectableComponent, LaunchTargetPosition);
    DOREPLIFETIME(USpawnAttractionCollectableComponent, RandomisedSpawnDuration);
}


