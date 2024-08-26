#include "MrCreosoteFood.h"
#include "AkComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Particles/ParticleSystemComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "InteractionComponent.h"

AMrCreosoteFood::AMrCreosoteFood(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FoodMesh"));
    this->Tags.AddDefaulted(1);
    this->FoodMesh = (UStaticMeshComponent*)RootComponent;
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->Fuse = CreateDefaultSubobject<USplineComponent>(TEXT("Fuse"));
    this->FuseFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FuseFX"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Ak_MrCreosoteFood = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_MrCreosoteFood"));
    this->HitPoints = NULL;
    this->CountdownTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CountdownTimeline"));
    this->FlashTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("FlashTimeline"));

    this->CountDownCurve = NULL;
    this->FlashCurve = NULL;
    this->ExplodeVFX = NULL;
    this->FlashMaterial = NULL;
    this->FuseStartSFX = NULL;
    this->FuseStopSFX = NULL;
    this->ExplodeSFX = NULL;
    this->SpawnSFX = NULL;
    this->ThrowSFX = NULL;
    this->FlashSFX = NULL;
    this->ExplodeHaptic = NULL;
    this->FuseStartHaptic = NULL;
    this->FuseStopHaptic = NULL;
    this->VelocityThreshold = 64.00f;
    this->ExplosionClass = NULL;
    this->ArmingTime = 3.00f;
    this->CountdownTime = 10.00f;
    this->FlashTime = 5.00f;
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(RootComponent);
    this->Fuse->SetupAttachment(RootComponent);
    this->FuseFX->SetupAttachment(Fuse);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->Ak_MrCreosoteFood->SetupAttachment(RootComponent);
}

void AMrCreosoteFood::FlashTimelineCallback(float val) {
}

void AMrCreosoteFood::CountdownTimelineFinished() {
}

void AMrCreosoteFood::CountdownTimelineCallback(float val) {
}


