#include "JumpPointVolumeActor.h"
#include "Components/StaticMeshComponent.h"
#include "JumpPositioningBoundVolume.h"

AJumpPointVolumeActor::AJumpPointVolumeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->PositioningVolumeComponent = CreateDefaultSubobject<UJumpPositioningBoundVolume>(TEXT("JumpPoint"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->PositioningVolumeComponent->SetupAttachment(RootComponent);
}


