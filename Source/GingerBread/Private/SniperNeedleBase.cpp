#include "SniperNeedleBase.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "AIProjectileMovementComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SackboySlapTargetComponent.h"
#include "SpotShadowComponent.h"
#include "VertexAnimatedMeshComponent.h"

ASniperNeedleBase::ASniperNeedleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->BoxCollisionComponent = (UBoxComponent*)RootComponent;
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->VertexAnimMeshComponent = CreateDefaultSubobject<UVertexAnimatedMeshComponent>(TEXT("VertexAnimMesh"));
    this->DamageCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DamageCapsule"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->SlapTargetComponent = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SlapTarget"));
    this->SpearTipComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpearTip"));
    this->FlashVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlashVFX"));
    this->TrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFX"));
    this->ImpactVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ImpactVFX"));
    this->AKSniperNeedleComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AKSniperNeedle"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->AttackFlashComponent = NULL;
    this->HitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->AIProjectileMovementComponent = CreateDefaultSubobject<UAIProjectileMovementComponent>(TEXT("AIProjectileMovement"));
    this->IsHomingNeedle = false;
    this->StartHomingDelay = 0.00f;
    this->DistanceToStopHomingXY = 0.00f;
    this->DistanceToStopHomingZ = 0.00f;
    this->MaxHomingTime = 0.00f;
    this->HomingStrengthXY = 0.00f;
    this->HomingStrengthZ = 0.00f;
    this->LifespanWhenStuck = 0.00f;
    this->DissolveDuration = 0.00f;
    this->LifespanWhenDropped = 0.00f;
    this->LifespanWhenHomingFinished = 0.00f;
    this->HomingPredictAhead = 0.00f;
    this->HomingHeightOffset = 0.00f;
    this->AudioThrow = NULL;
    this->AudioImpact = NULL;
    this->AudioExplode = NULL;
    this->AudioStopFlight = NULL;
    this->GravityScale = 0.40f;
    this->IsThrown = false;
    this->IgnoreThrower = false;
    this->NotOverlappingSafeDistance = 10.00f;
    this->DissolveAmount = 0.00f;
    this->SlapTargetComponent->SetupAttachment(VertexAnimMeshComponent);
    this->SpearTipComponent->SetupAttachment(VertexAnimMeshComponent);
    this->FlashVFX->SetupAttachment(SpearTipComponent);
    this->TrailVFX->SetupAttachment(SpearTipComponent);
    this->ImpactVFX->SetupAttachment(SpearTipComponent);
    this->AKSniperNeedleComponent->SetupAttachment(VertexAnimMeshComponent);
    this->GameplayTagComponent->SetupAttachment(VertexAnimMeshComponent);
    this->SpotShadowComponent->SetupAttachment(RootComponent);
    this->VertexAnimMeshComponent->SetupAttachment(RootComponent);
    this->DamageCapsule->SetupAttachment(VertexAnimMeshComponent);
    this->DamageInteraction->SetupAttachment(DamageCapsule);
}

void ASniperNeedleBase::TriggerFlash() {
}

void ASniperNeedleBase::OnThrow_Implementation(FVector throwVelocity, AActor* TargetActor, float GravityScaleIn) {
}

void ASniperNeedleBase::OnStuck_Implementation(const FHitResult& ImpactResult) {
}

void ASniperNeedleBase::OnRep_DissolveAmount() {
}

void ASniperNeedleBase::OnProjectileStop(const FHitResult& ImpactResult) {
}

void ASniperNeedleBase::OnHitMobileObject_Implementation(AActor* HitActor) {
}

void ASniperNeedleBase::OnDropped_Implementation() {
}

void ASniperNeedleBase::Multicast_OnThrow_Implementation(FVector throwVelocity, AActor* TargetActor, float GravityScaleIn) {
}

void ASniperNeedleBase::LoadFromConfig_Implementation() {
}

void ASniperNeedleBase::BeginHoming() {
}

void ASniperNeedleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASniperNeedleBase, DissolveAmount);
}


