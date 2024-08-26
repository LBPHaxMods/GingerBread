#include "TreasureKeeper.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "BlastersTargetComponent.h"
#include "CSPHelperComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SackboySlapTargetComponent.h"
#include "SplineFollowerComponent.h"
#include "SpotShadowComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ATreasureKeeper::ATreasureKeeper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->MovementTargetComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MovementTargetComponent"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->BottomHalfCollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BottomHalfCollisionComponent"));
    this->TopHalfCollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TopHalfCollisionComponent"));
    this->HitPointsCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("HitPointsCollisionComponent"));
    this->SquashingCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SquashingCollisionComponent"));
    this->EnemyStunCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EnemyStunCollisionComponent"));
    this->BottomHalfInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("BottomHalfInteractComponent"));
    this->TopHalfInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("TopHalfInteractComponent"));
    this->HitPointsInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsInteractComponent"));
    this->SquashingInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("SquashingInteractComponent"));
    this->EnemyStunInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("RunningInteractComponent"));
    this->InnerRangeSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("InnerRangeSphereComponent"));
    this->OuterRangeSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("OuterRangeSphereComponent"));
    this->InnerRangeInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InnerRangeInteractComponent"));
    this->OuterRangeInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("OuterRangeInteractComponent"));
    this->OuterRangeOverlapManagerComponent = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OuterRangeOverlapManagerComponent"));
    this->SackboySlapTargetComponent = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTargetComponent"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTargetComponent"));
    this->BlastersTargetComponent = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTargetComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->SquashingHitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SquashingHitPointsModifierComponent"));
    this->EnemyStunHitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("EnemyStunHitPointsModifierComponent"));
    this->TopHalfGameplayComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("TopHalfGameplayComponent"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->ContentsVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ContentsVFXComponent"));
    this->TrailVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFXComponent"));
    this->SweatVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SweatVFXComponent"));
    this->CryingVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CryingVFXComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TreasureKeeper"));
    this->AlertedJumpTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("AlertedJumpTimelineComponent"));
    this->RunningBlendTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("RunningPositionBlendTimelineComponent"));
    this->MemoryOrbMovementTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("MemoryOrbMovementTimelineComponent"));
    this->EscapingOrientationJumpTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("EscapingOrientationJumpTimelineComponent"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->MemoryOrbInLevel = NULL;
    this->UseCircuitMovement = true;
    this->ActivationRadius = 40.00f;
    this->DeactivationRadius = 90.00f;
    this->SuicideDelay = 18.00f;
    this->InitialMovementSpeed = 38.00f;
    this->FinalMovementSpeed = 32.00f;
    this->MovementSpeedChangeDuration = 15.00f;
    this->IdleDelayOnceOutOfRange = 2.00f;
    this->IdleRotationInterpSpeed = 1.50f;
    this->AlertedHorizontalMovementCurve = NULL;
    this->AlertedVerticalMovementCurve = NULL;
    this->AlertedHorizontalDistance = -7.50f;
    this->AlertedVerticalDistance = 10.00f;
    this->AlertedJumpDuration = 0.35f;
    this->RunningBlendLocationCurve = NULL;
    this->RunningBlendRotationCurve = NULL;
    this->RunningBlendDuration = 0.50f;
    this->RunningSweatinessParameter = TEXT("SpawnRateScale");
    this->RunningMinimumSweatiness = 0.50f;
    this->RunningMaximumSweatiness = 3.00f;
    this->SplineSearchMaximumLength = 60.00f;
    this->SplineSearchRadiusAtCentre = 3.00f;
    this->SplineSearchRadiusAtEdge = 20.25f;
    this->SplineSearchRadiusCurve = NULL;
    this->JumpRotationInterpSpeed = 4.00f;
    this->SuicidePanicBlendTime = 1.00f;
    this->SuicideJumpHorizontalDistance = 35.00f;
    this->SuicideJumpVerticalDistance = 20.00f;
    this->SuicideDestroyDelay = 10.00f;
    this->DamagedKnockbackHorizontalDistance = 15.00f;
    this->DamagedKnockbackVerticalDistance = 30.00f;
    this->MemoryOrbMovementCurve = NULL;
    this->MemoryOrbMovementHeight = 11.00f;
    this->MemoryOrbMovementDuration = 0.50f;
    this->OpeningLidDuration = 1.65f;
    this->ClosingLidDuration = 0.60f;
    this->EscapingSearchDistanceMultiplierCurve = NULL;
    this->EscapingSearchAngleMultiplierCurve = NULL;
    this->EscapingSearchMaximumDistance = 300.00f;
    this->EscapingOrientationJumpRotationCurve = NULL;
    this->EscapingOrientationJumpHeightCurve = NULL;
    this->EscapingOrientationJumpDuration = 0.50f;
    this->EscapingOrientationJumpHeight = 10.00f;
    this->EscapingJumpApexHeight = 30.00f;
    this->EscapingDestroyDelay = 10.00f;
    this->CameraTrackingRenderTimeThreshold = 1.80f;
    this->CameraTrackingInterpSpeed = 1.00f;
    this->ShowSplineFollowerPosition = false;
    this->ShowSplineSearchDebug = false;
    this->ShowEscapeMarkerSearchDebug = false;
    this->MemoryOrbContentsParticleSystem = NULL;
    this->CollectabellsContentsParticleSystem = NULL;
    this->JumpLandMontage = NULL;
    this->DamagedAudioEvent = NULL;
    this->OpenLidAudioEvent = NULL;
    this->OpenLidParticleSystem = NULL;
    this->OpenLidForceFeedbackEffect = NULL;
    this->OpenLidForceFeedbackAttenuation = NULL;
    this->OpenLidHapticsEvent = NULL;
    this->ReplicatedTimeSpentActive = 0.00f;
    this->ReplicatedState = ETreasureKeeperState::Idle;
    this->ReplicatedHasEverBeenActivated = false;
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->ContentsVFXComponent->SetupAttachment(SkeletalMeshComponent);
    this->TrailVFXComponent->SetupAttachment(SkeletalMeshComponent);
    this->SweatVFXComponent->SetupAttachment(SkeletalMeshComponent);
    this->CryingVFXComponent->SetupAttachment(SkeletalMeshComponent);
    this->PoIComponent->SetupAttachment(SkeletalMeshComponent);
    this->SpotShadowComponent->SetupAttachment(SkeletalMeshComponent);
    this->AkComponent->SetupAttachment(SkeletalMeshComponent);
    this->ThrowTargetComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->MovementTargetComponent->SetupAttachment(SplineComponent);
    this->BottomHalfCollisionComponent->SetupAttachment(RootComponent);
    this->TopHalfCollisionComponent->SetupAttachment(SkeletalMeshComponent);
    this->HitPointsCollisionComponent->SetupAttachment(RootComponent);
    this->SquashingCollisionComponent->SetupAttachment(RootComponent);
    this->EnemyStunCollisionComponent->SetupAttachment(RootComponent);
    this->BottomHalfInteractComponent->SetupAttachment(BottomHalfCollisionComponent);
    this->TopHalfInteractComponent->SetupAttachment(TopHalfCollisionComponent);
    this->HitPointsInteractComponent->SetupAttachment(HitPointsCollisionComponent);
    this->SquashingInteractComponent->SetupAttachment(SquashingCollisionComponent);
    this->EnemyStunInteractComponent->SetupAttachment(SquashingCollisionComponent);
    this->InnerRangeSphereComponent->SetupAttachment(RootComponent);
    this->OuterRangeSphereComponent->SetupAttachment(RootComponent);
    this->InnerRangeInteractComponent->SetupAttachment(RootComponent);
    this->OuterRangeInteractComponent->SetupAttachment(RootComponent);
    this->SackboySlapTargetComponent->SetupAttachment(RootComponent);
    this->CraftCutterTargetComponent->SetupAttachment(RootComponent);
    this->BlastersTargetComponent->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->TopHalfGameplayComponent->SetupAttachment(TopHalfCollisionComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
}

void ATreasureKeeper::OnTreasureKeeperMaterialLoaded() {
}

void ATreasureKeeper::OnSplineTargetReached(USplineFollowerComponent* pSplineFollowerComponent, bool WasTravellingForward, bool WasSuccess) {
}

void ATreasureKeeper::OnSplinePositionChanged(float CurrentPositionAlongSpline, float DeltaTime) {
}

void ATreasureKeeper::OnSplineMovementStarted(USplineFollowerComponent* pSplineFollowerComponent, bool WillTravelForward) {
}

void ATreasureKeeper::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, bool WasTravellingForward) {
}

void ATreasureKeeper::OnRunningBlendRotationAlphaUpdate(float Alpha) {
}

void ATreasureKeeper::OnRunningBlendLocationAlphaUpdate(float Alpha) {
}

void ATreasureKeeper::OnRep_ReplicatedState() {
}

void ATreasureKeeper::OnRep_ReplicatedArcVariant() {
}

void ATreasureKeeper::OnOuterRangeEndOverlapLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ATreasureKeeper::OnOuterRangeEndInteractLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ATreasureKeeper::OnOuterRangeBeginOverlapFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATreasureKeeper::OnOuterRangeBeginInteractFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ATreasureKeeper::OnMemoryOrbSpawned(UPickupContainerComponent* pPickupContainerComponent, AMemoryOrb* pMemoryOrb) {
}

void ATreasureKeeper::OnMemoryOrbMovementAlphaUpdate(float Alpha) {
}

void ATreasureKeeper::OnInnerRangeBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATreasureKeeper::OnInnerRangeBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ATreasureKeeper::OnGingerbreadLevelSettingsAvailable(AActor* pManagerActor) {
}

void ATreasureKeeper::OnEscapingOrientationJumpTimelinePostUpdate() {
}

void ATreasureKeeper::OnEscapingOrientationJumpRotationAlphaUpdate(float Alpha) {
}

void ATreasureKeeper::OnEscapingOrientationJumpHeightAlphaUpdate(float Alpha) {
}

void ATreasureKeeper::OnCSPAction(uint32 ActionAsInteger) {
}

void ATreasureKeeper::OnAlertedJumpVerticalAlphaUpdate(float Alpha) {
}

void ATreasureKeeper::OnAlertedJumpTimelinePostUpdate() {
}

void ATreasureKeeper::OnAlertedJumpHorizontalAlphaUpdate(float Alpha) {
}

void ATreasureKeeper::CopyProperties(USplineComponent* InSpline, const FDataTableRowHandle& InMemoryOrbReference, bool InUseCircuitMovement, float InActivationRadius, float InDeactivationRadius) {
}

void ATreasureKeeper::AUTH_TryReturnToIdle() {
}

void ATreasureKeeper::AUTH_SetLookForSuicideMarker() {
}

void ATreasureKeeper::AUTH_OnFinishedSpawningPickupsWhileAsleep() {
}

void ATreasureKeeper::AUTH_ApplyCachedDesiredPositionAlongSpline(USplineFollowerComponent* pSplineFollowerComponent, bool WasTravellingForward) {
}

void ATreasureKeeper::AddSuicideMarker() {
}

void ATreasureKeeper::AddJumpMarkers() {
}

void ATreasureKeeper::AddEscapeMarker() {
}

void ATreasureKeeper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasureKeeper, ReplicatedArcVariant);
    DOREPLIFETIME(ATreasureKeeper, ReplicatedAlertedJumpFinalLocation);
    DOREPLIFETIME(ATreasureKeeper, ReplicatedEscapeJumpFinalLocation);
    DOREPLIFETIME(ATreasureKeeper, ReplicatedTargetMarker);
    DOREPLIFETIME(ATreasureKeeper, ReplicatedTimeSpentActive);
    DOREPLIFETIME(ATreasureKeeper, ReplicatedState);
    DOREPLIFETIME(ATreasureKeeper, ReplicatedHasEverBeenActivated);
}


