#include "SackboyDeathGhost.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ASackboyDeathGhost::ASackboyDeathGhost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DebugPlayback = false;
    this->GhostMaterial = NULL;
    this->GhostHairMaterial = NULL;
    this->PositionalOffsetCurve = NULL;
    this->MaterialOpacityCurve = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->BodyMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DeathGhostMesh"));
    this->HaloMeshComponent = NULL;
    this->HairComponent = NULL;
    this->BodyMeshComponent->SetupAttachment(RootComponent);
}


