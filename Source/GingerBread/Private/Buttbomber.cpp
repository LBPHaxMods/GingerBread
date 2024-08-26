#include "Buttbomber.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "AIHitFlashComponent.h"
#include "AttackFlashComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "PickupContainerComponent.h"
#include "SackboySlapTargetComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

AButtbomber::AButtbomber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->BodyTags = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("BodyTags"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->Dazed_FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Dazed_FX"));
    this->DamageCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SBDamageCollider"));
    this->Jetpack1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Jetpack1"));
    this->Jetpack2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Jetpack2"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->SBDetector = CreateDefaultSubobject<USphereComponent>(TEXT("SBDetector"));
    this->FlightZoneInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("FlightZoneInteraction"));
    this->SBDetectorInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SBDectectorInteraction"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->AK_ButtBomber = CreateDefaultSubobject<UAkComponent>(TEXT("AKButtBomber"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->Light = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Light"));
    this->GodRays = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GodRays"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->HitFlashComponent = CreateDefaultSubobject<UAIHitFlashComponent>(TEXT("HitFlashComponent"));
    this->AttackFlash = CreateDefaultSubobject<UAttackFlashComponent>(TEXT("AttackFlash"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->BumpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("BumpTimeline"));
    this->LightUp = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightUp"));
    this->ButtAttack = CreateDefaultSubobject<UTimelineComponent>(TEXT("ButtAttack"));
    this->SlapReact = CreateDefaultSubobject<UTimelineComponent>(TEXT("SlapReact"));
    this->MaxRange = 100.00f;
    this->ChaseMovementSpeed = 35.00f;
    this->BaseMovementSpeed = 25.00f;
    this->HoverHeight = 25.00f;
    this->DropSpeedForHeightAdjust = 10.00f;
    this->ButtDistance = 5.00f;
    this->TargettingDelay = 1.00f;
    this->StuckDelay = 3.00f;
    this->StompDelay = 0.40f;
    this->MovementSpeed = 1.00f;
    this->TargettingMovementSpeed = 25.00f;
    this->ImpulseRadius = 15.00f;
    this->ImpulseStrength = 10.00f;
    this->DetectionRadiusDefault = 60.00f;
    this->UseFlightZones = false;
    this->PostDeathMontageDelay = 0.71f;
    this->PostCelebrationMontageDelay = 1.77f;
    this->PostHitGroundTopMontageDelay = 0.73f;
    this->PostHitAirTopMontageDelay = 0.83f;
    this->PostHitGroundSlapMontageDelay = 0.60f;
    this->PostHitAirSlapMontageDelay = 0.63f;
    this->PostBumpMontageDelay = 0.57f;
    this->PostBoredMontageDelay = 2.87f;
    this->PostReturnedHomeMontageDelay = 0.83f;
    this->RadialImpactVFX = NULL;
    this->JetPackLiftOffVFX = NULL;
    this->AKJetpackStart = NULL;
    this->AKAlert = NULL;
    this->AKStomp = NULL;
    this->AKJetpackChase = NULL;
    this->AKTargetting = NULL;
    this->AKJetpackTargetting = NULL;
    this->AKJetpackAttack = NULL;
    this->AKJetpackStop = NULL;
    this->AKJetpackIdle = NULL;
    this->AKJetpackHitReact = NULL;
    this->AKJetpackBump = NULL;
    this->AKJetpackStomp = NULL;
    this->AKAttack = NULL;
    this->AKFall = NULL;
    this->AKJetpackStuck = NULL;
    this->AKDeathSpin = NULL;
    this->AKPostDeath = NULL;
    this->StompHaptics = NULL;
    this->SlapReactCurve = NULL;
    this->LightUpCurve = NULL;
    this->BumpCurve = NULL;
    this->ButtAttackCurve = NULL;
    this->CurrentState = EButtBomberState::Idle;
    this->IsDead = false;
    this->Deathmontage = NULL;
    this->DeathVFX = NULL;
    this->IdleToAlertDelayTime = 1.00f;
    this->CelebrationMontage = NULL;
    this->HitAirSlapMontage = NULL;
    this->HitAirTopMontage = NULL;
    this->HitGroundSlapMontage = NULL;
    this->HitGroundTopMontage = NULL;
    this->BumpMontage = NULL;
    this->BoredMontage = NULL;
    this->ReturnedHomeMontage = NULL;
    this->HitPoints->SetupAttachment(RootComponent);
    this->SBDetector->SetupAttachment(RootComponent);
    this->FlightZoneInteraction->SetupAttachment(RootComponent);
    this->SBDetectorInteraction->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->AK_ButtBomber->SetupAttachment(RootComponent);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->BlastersTarget->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->Light->SetupAttachment(RootComponent);
    this->GodRays->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
}

void AButtbomber::SackboyDamaged(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AButtbomber::PostTargettingEvent() {
}

void AButtbomber::PostStuckDelay() {
}

void AButtbomber::PostStompAnimEvent() {
}

void AButtbomber::PostMontageDelay() {
}

void AButtbomber::PostCelebrationAnimation() {
}

void AButtbomber::PostAlertEvent() {
}

void AButtbomber::OnStompUpdated(float stompHeight) {
}

void AButtbomber::OnRep_TargetSackboy() {
}

void AButtbomber::OnRep_Dead() {
}

void AButtbomber::OnRep_CurrentState(EButtBomberState pastState) {
}

void AButtbomber::OnLightUpUpdated(float LightValue) {
}

void AButtbomber::OnLightupFinished() {
}

void AButtbomber::OnHitReactUpdated(float ForceMultiplier) {
}

void AButtbomber::OnHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AButtbomber::OnEndOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AButtbomber::OnEndInteractAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}

void AButtbomber::OnBumpUpdated(float ImpulseMultiplier) {
}

void AButtbomber::OnBeginOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AButtbomber::OnBeginInteractAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}

void AButtbomber::Multi_OnHitReact_Implementation(const FRotator& TargetRotation, EDamageType HitType) {
}

void AButtbomber::HitReactFinished() {
}

void AButtbomber::EnableTargettingCheck() {
}

void AButtbomber::CheckSackboysInRange() {
}

void AButtbomber::BumpFinished() {
}

void AButtbomber::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AButtbomber, CurrentState);
    DOREPLIFETIME(AButtbomber, TargetSackboy);
    DOREPLIFETIME(AButtbomber, IsDead);
    DOREPLIFETIME(AButtbomber, BumpedActor);
}


