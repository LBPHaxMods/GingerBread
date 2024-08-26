#include "SniperNeedleSpace.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"

ASniperNeedleSpace::ASniperNeedleSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionSphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExplosionSphere"));
    this->ExplosionInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ExplosionInteraction"));
    this->ExplosionHitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ExplosionHitPointsModifier"));
    this->ExplosionRadiusCM = 5.00f;
    this->ExplosionVFXTemplate = NULL;
    this->Acceleration = 0.00f;
    this->ExplosionSphereMesh->SetupAttachment(RootComponent);
    this->ExplosionInteraction->SetupAttachment(ExplosionSphereMesh);
}


