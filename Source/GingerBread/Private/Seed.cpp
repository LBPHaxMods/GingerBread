#include "Seed.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "SignalComponent.h"
#include "SpotShadowComponent.h"

ASeed::ASeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->Signal = CreateDefaultSubobject<USignalComponent>(TEXT("Signal"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->bDeactivatesAtLowSpeed = true;
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->OnHitTorqueStrength = 50.00f;
    this->SlapHitReactionStrength = 0.70f;
    this->StunHitReactionStrength = 0.20f;
    this->GrappleTarget->SetupAttachment(StaticMesh);
    this->SpotShadow->SetupAttachment(StaticMesh);
    this->InteractionComponent->SetupAttachment(StaticMesh);
}


