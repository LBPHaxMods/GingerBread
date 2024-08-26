#include "CritterCarry.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

ACritterCarry::ACritterCarry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CritterCarryPhysics"));
    this->Tags.AddDefaulted(1);

    this->SphereInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SphereInteraction"));
    this->CritterCarryPhysics = (UStaticMeshComponent*)RootComponent;
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->CritterCarrySkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CritterCarrySkeleton"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->Ak_CritterCarry = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_CritterCarry"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->CurrentState = ECritterCarryState::Idle;
    this->SlapMontage = NULL;
    this->StompMontage = NULL;
    this->CritterHitSmallVFX = NULL;
    this->CritterHitLargeVFX = NULL;
    this->HitSmallVFXThreshold = 10.00f;
    this->HitLargeVFXThreshold = 80.00f;
    this->HitReactionStrength = 2.00f;
    this->IdleSpeedThreshold = 20.00f;
    this->IdleAngularDamping = 15.00f;
    this->ThrowToIdleAnimationDuration = 1.33f;
    this->TurningTorque = 800.00f;
    this->TurningAngleThreshold = 20.00f;
    this->LaunchTorqueMultiplier = -600.00f;
    this->CritterCarryLandSFX = NULL;
    this->CarriedHitImpulseMultiplier = 3.00f;
    this->CarriedForceFeedbackEffect = NULL;
    this->PlayCarriedHapticsEvent = NULL;
    this->StopCarriedHapticsEvent = NULL;
    this->OnHitLargeForceFeedbackEvent = NULL;
    this->OnHitLargeForceFeedbackAttenuation = NULL;
    this->OnHitLargeHapticsEvent = NULL;
    this->OnHitLargeCameraShake = NULL;
    this->OnHitLargeCameraShakeAttenuation = NULL;
    this->CarryingSackboy = NULL;
    this->SphereInteraction->SetupAttachment(CritterCarrySkeleton);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->CritterCarrySkeleton->SetupAttachment(RootComponent);
    this->SpotShadowComponent->SetupAttachment(CritterCarrySkeleton);
    this->SphereComponent->SetupAttachment(CritterCarrySkeleton);
    this->Ak_CritterCarry->SetupAttachment(CritterCarrySkeleton);
    this->PoIComponent->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
}

void ACritterCarry::OnRep_CurrentState() {
}

void ACritterCarry::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACritterCarry::Multicast_ApplyTorque_Implementation(const FVector Torque) {
}

void ACritterCarry::Multicast_ApplyImpulse_Implementation(const FVector Impulse) {
}

ECritterCarryState ACritterCarry::GetState() {
    return ECritterCarryState::Idle;
}

void ACritterCarry::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACritterCarry, CurrentState);
}


