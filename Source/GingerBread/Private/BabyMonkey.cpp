#include "BabyMonkey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

ABabyMonkey::ABabyMonkey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MonkeyCollision"));
    this->Tags.AddDefaulted(1);

    this->UniqueSpawnerActivator = NULL;
    this->MonkeyCollision = (UStaticMeshComponent*)RootComponent;
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->BabyMonkey = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BabyMonkey"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarger"));

    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->MonkeyJumpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MonkeyJumpTimeline"));
    this->HomingTransition = CreateDefaultSubobject<UTimelineComponent>(TEXT("HomingTransitionTimeline"));
    this->MonkeyClimbUpAnim = CreateDefaultSubobject<UTimelineComponent>(TEXT("ClimbUpTimeline"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->MonkeySpawnerBP = NULL;
    this->bMonkeyIsSafe = false;
    this->AUTH_MonkeyState = EMonkeyState::Idle;
    this->bRespawned = false;
    this->JumpHeightCurve = NULL;
    this->JumpRotationCurve = NULL;
    this->HomingTransitionCurve = NULL;
    this->ClimbUpRollAngleCurve = NULL;
    this->ClimbUpPositionCurve = NULL;
    this->DefaultHitReactionStrength = 2.50f;
    this->PlasmaHitReactionStrength = 7.30f;
    this->SlapHitReactionStrength = 7.30f;
    this->RollHitReactionStrength = 1.50f;
    this->MinRollSpeed = 20.00f;
    this->BabyMonkeyThrownScream = NULL;
    this->BabyMonkeyChatter = NULL;
    this->BabyMonkeyChatterStop = NULL;
    this->BabyMonkeySpatScream = NULL;
    this->BabyMonkeyFallImpactVFX = NULL;
    this->JumpTimelineLength = 1.00f;
    this->JumpTimelinePlayRate = 3.00f;
    this->HomingTransitionTimelineLength = 1.00f;
    this->bIsCelebrating = false;
    this->MinNumberOfAttachementsToSpawn = 0;
    this->MaxNumberOfAttachementsToSpawn = 4;
    this->CheckOrientationTimerInterval = 0.10f;
    this->CheckVelocityTimerInterval = 0.10f;
    this->AddForceTimerInterval = 0.10f;
    this->MonkeySpeedTimerInterval = 0.03f;
    this->OnHitTorqueStrength = 600.00f;
    this->DefaultLinearDamping = 0.85f;
    this->DefaultAngularDamping = 15.00f;
    this->PickedUpAngularDamping = 1.00f;
    this->RollingAngularDamping = 0.00f;
    this->RollingLinearDamping = 1.00f;
    this->RollingToPositionAngularDamping = 2.00f;
    this->RollingToPositionLinearDamping = 2.00f;
    this->CenterOfMassZOffset = -5.00f;
    this->DefaultOrientationTime = 1.75f;
    this->JumpHeightPerUpdate = 10.00f;
    this->DefaultMinRollSpeed = 20.00f;
    this->SlappedMinRollSpeed = 50.00f;
    this->RollingOrientationTime = 0.00f;
    this->MaxOrientationTime = 2.00f;
    this->OrientationAngle = 10.00f;
    this->JumpAfterOrientationDelay = 0.50f;
    this->HitToIdleDelay = 1.50f;
    this->CarryingSackboy = NULL;
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->BabyMonkey->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(BabyMonkey);
    this->PoIComponent->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(RootComponent);
}

void ABabyMonkey::StartRollingToPosition(FVector Position) {
}

void ABabyMonkey::OnSpawnedAtEndOfLevel() {
}

void ABabyMonkey::OnRep_PhysicsState() {
}

void ABabyMonkey::OnRep_MonkeyState() {
}

void ABabyMonkey::OnRep_Celebrating() {
}

void ABabyMonkey::OnJumpTimelineUpdated() {
}

void ABabyMonkey::OnJumpTimelineFinished() {
}

void ABabyMonkey::OnJumpRotationTrackUpdate(float JumpRotation) {
}

void ABabyMonkey::OnJumpHeightTrackUpdate(float JumpHeight) {
}

void ABabyMonkey::OnHomingTransitionTrackUpdate(float HomingTransitionAlpha) {
}

void ABabyMonkey::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ABabyMonkey::OnClimbUpTimelineUpdated() {
}

void ABabyMonkey::OnClimbUpTimelineFinished() {
}

void ABabyMonkey::OnClimbUpRollAngleTrackUpdate(float RollAngle) {
}

void ABabyMonkey::OnClimbUpPositionTrackUpdate(FVector Position) {
}

void ABabyMonkey::Multicast_ImpactVFX_Implementation(FVector Location, FVector ImpactNormal) {
}

void ABabyMonkey::Multicast_DoHitReaction_Implementation(const FVector Impulse, const FVector Torque) {
}

void ABabyMonkey::HandleMonkeyAttachements() {
}

void ABabyMonkey::AddForceToTargetLocation() {
}

void ABabyMonkey::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABabyMonkey, Settings);
    DOREPLIFETIME(ABabyMonkey, AUTH_MonkeyState);
    DOREPLIFETIME(ABabyMonkey, Server_PhsyicsState);
    DOREPLIFETIME(ABabyMonkey, bIsCelebrating);
    DOREPLIFETIME(ABabyMonkey, CarryingSackboy);
}


