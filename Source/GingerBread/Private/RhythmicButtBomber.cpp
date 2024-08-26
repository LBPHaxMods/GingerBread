#include "RhythmicButtBomber.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SackboySlapTargetComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

ARhythmicButtBomber::ARhythmicButtBomber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    this->CollisionInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("CollisionInteract"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->SquashCollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SquashCollisionComponent"));
    this->SquashInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("SquashInteractComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->Jetpack1ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Jetpack1ParticleSystemComponent"));
    this->Jetpack2ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Jetpack2ParticleSystemComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RhythmicButtBomber"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->SackboySlapTargetComponent = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTargetComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->SquashHitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SquashHitPointsModifierComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->FallingTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("FallingTimelineComponent"));
    this->ReturningTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("ReturningTimelineComponent"));
    this->InitialHeight = 25.00f;
    this->AnticipationDuration = 1.00f;
    this->FallingDuration = 0.50f;
    this->ReturningDuration = 1.00f;
    this->MinimumHeight = 3.00f;
    this->ReturnToIdleAlpha = 0.50f;
    this->FallingMovementCurve = NULL;
    this->ReturningMovementCurve = NULL;
    this->FallingAudioEvent = NULL;
    this->ImpactAudioEvent = NULL;
    this->ImpactForceFeedbackEffect = NULL;
    this->ImpactForceFeedbackAttenuation = NULL;
    this->ImpactHapticsEvent = NULL;
    this->ImpactParticleSystem = NULL;
    this->HitReactionAudioEvent = NULL;
    this->DeathAudioEvent = NULL;
    this->DeathParticleSystem = NULL;
    this->IsDying = false;
    this->CollisionComponent->SetupAttachment(RootComponent);
    this->CollisionInteract->SetupAttachment(CollisionComponent);
    this->HitPointsComponent->SetupAttachment(CollisionComponent);
    this->SquashCollisionComponent->SetupAttachment(CollisionComponent);
    this->SquashInteractComponent->SetupAttachment(SquashCollisionComponent);
    this->SkeletalMeshComponent->SetupAttachment(CollisionComponent);
    this->Jetpack1ParticleSystemComponent->SetupAttachment(SkeletalMeshComponent);
    this->Jetpack2ParticleSystemComponent->SetupAttachment(SkeletalMeshComponent);
    this->AkComponent->SetupAttachment(SkeletalMeshComponent);
    this->SpotShadowComponent->SetupAttachment(SkeletalMeshComponent);
    this->SackboySlapTargetComponent->SetupAttachment(CollisionComponent);
    this->PoIComponent->SetupAttachment(CollisionComponent);
    this->GameplayTagComponent->SetupAttachment(CollisionComponent);
    this->PickupContainerComponent->SetupAttachment(CollisionComponent);
}

void ARhythmicButtBomber::SetInitialHeight(float InInitialHeight) {
}

void ARhythmicButtBomber::PlayDeathHitReaction_Implementation(ERhythmicButtBomberHitReaction HitReaction, const FVector& HitNormal) {
}

void ARhythmicButtBomber::OnReturnToIdleEvent() {
}

void ARhythmicButtBomber::OnMovementTimelineAlphaUpdate(float MovementAlpha) {
}

void ARhythmicButtBomber::OnHitReactionFinished() {
}

void ARhythmicButtBomber::OnFallingTimelineFinished() {
}

void ARhythmicButtBomber::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicButtBomber, IsDying);
}


