#include "CritterReceptacle.h"
#include "AkComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "ArcComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ACritterReceptacle::ACritterReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->Root = (USceneComponent*)RootComponent;
    this->BasketBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasketBase"));
    this->Basket = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Basket"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->NearThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("NearThrowTarget"));
    this->ActorDetector = CreateDefaultSubobject<USphereComponent>(TEXT("ActorDetector"));
    this->ArcComponent = CreateDefaultSubobject<UArcComponent>(TEXT("ArcComponent"));
    this->FoldingPaperNumber = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FoldingPaperNumber"));
    this->CompleteCelebrationSkMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CompleteCelebration"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->BasketRim = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasketRim"));
    this->GameplayTag1 = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag1"));
    this->GameplayTag2 = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag2"));
    this->AIDetector = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AIDetector"));
    this->FarThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("FarThrowTarget"));
    this->PivotTest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PivotTest"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->AIDetectorInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("AIDetectorInteractionComponent"));
    this->EnterHoleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("EnterHoleTimeline"));
    this->LightsTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightsTimeline"));
    this->PaperFoldTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PaperFoldTimeline"));
    this->PaperUnfoldTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PaperUnfoldTimeline"));
    this->RewardTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RewardTimeline"));
    this->CurrentBaseMaterial = NULL;
    this->CurrentBasketMaterial = NULL;
    this->CurrentBasketThreadMaterial = NULL;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->CurrentLightsMaterial = NULL;
    this->CurrentWorldLocation = EWorldLocation::Amazon;
    this->bEnableCaptureScoreRewards = true;
    this->UseCelebrationAnim = false;
    this->bDisableSackboyActionsWhenFired = false;
    this->RequiredCritterCount = 1;
    this->ReceptacleType = ECritterReceptacleType::Default;
    this->MinTimeBetweenNudges = 1.50f;
    this->EnterHoleTimelineLength = 0.50f;
    this->LightsTimelineLength = 2.00f;
    this->PaperFoldTimelineLength = 0.25f;
    this->PaperUnfoldTimelineLength = 0.25f;
    this->RewardTimelineLength = 4.19f;
    this->HandleCompletionDelay = 0.50f;
    this->StartPaperFoldDelay = 0.50f;
    this->PlayCelebrationAnimDelay = 0.50f;
    this->PaperFoldAnimSFX = NULL;
    this->PaperUnfoldAnimSFX = NULL;
    this->CritterCountedSFX = NULL;
    this->CompleteNoRewardSFX = NULL;
    this->CompleteWithRewardSFX = NULL;
    this->CompleteCelebrationSFX = NULL;
    this->RewardSpawnVFX = NULL;
    this->RewardTimelineBounceEventTime = 2.11f;
    this->CompleteSFX = NULL;
    this->CompleteCheerSFX = NULL;
    this->CompleteVFX = NULL;
    this->EjectedForceFeedbackEffect = NULL;
    this->EjectedHapticEvent = NULL;
    this->EjectedGamepadAudioEvent = NULL;
    this->EnterHoleTlScaleCurve = NULL;
    this->EnterHoleTlJumpCurve = NULL;
    this->EnterHoleTlAlphaCurve = NULL;
    this->LightsTlIntensityCurve = NULL;
    this->PaperFoldTlMorphTargetCurve = NULL;
    this->PaperUnfoldTlMorphTargetCurve = NULL;
    this->RewardAlphaCurve = NULL;
    this->RewardBounceCurve = NULL;
    this->RejectVFX = NULL;
    this->RejectSFX = NULL;
    this->FoldingPaperDynamicMaterialInst = NULL;
    this->FoldingPaperMaterialInst = NULL;
    this->LightsDynamicMaterialInst = NULL;
    this->LightsMaterialInst = NULL;
    this->MemoryOrbActorRef = NULL;
    this->AIDetector->SetupAttachment(Basket);
    this->FarThrowTarget->SetupAttachment(Basket);
    this->PivotTest->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->AIDetectorInteractionComponent->SetupAttachment(Basket);
    this->Basket->SetupAttachment(RootComponent);
    this->PhysicsConstraint->SetupAttachment(Basket);
    this->NearThrowTarget->SetupAttachment(Basket);
    this->ActorDetector->SetupAttachment(Basket);
    this->ArcComponent->SetupAttachment(RootComponent);
    this->FoldingPaperNumber->SetupAttachment(Basket);
    this->CompleteCelebrationSkMesh->SetupAttachment(Basket);
    this->GameplayTag->SetupAttachment(Basket);
    this->BasketRim->SetupAttachment(Basket);
    this->GameplayTag1->SetupAttachment(BasketBase);
    this->GameplayTag2->SetupAttachment(BasketRim);
}

void ACritterReceptacle::TriggerEjectRPC_Implementation(ASackboy* ThrowerSack, AActor* ActorToEject) {
}

void ACritterReceptacle::TriggerCountedRPC_Implementation(ASackboy* ThrowerSack, AActor* CountedActor) {
}

void ACritterReceptacle::StartPaperUnfoldAnim(int32 Number) {
}

void ACritterReceptacle::RewardTimeline_UpdateBounce(FVector Translation) {
}

void ACritterReceptacle::RewardTimeline_UpdateAlpha(float Alpha) {
}

void ACritterReceptacle::RewardTimeline_PostUpdate() {
}

void ACritterReceptacle::RewardTimeline_Bounce() {
}

void ACritterReceptacle::PlayCelebrationAnim() {
}

void ACritterReceptacle::PaperUnfoldTimeline_Update(float Value) {
}

void ACritterReceptacle::PaperFoldTimeline_Update(float Value) {
}

void ACritterReceptacle::PaperFoldTimeline_Finished() {
}



void ACritterReceptacle::OnRep_RequiredCritterCount() {
}

void ACritterReceptacle::OnPickupContainerOpened(UPickupContainerComponent* NewPickupContainer, bool bSucceeded, const int32 NumSpawnedPickups) {
}

void ACritterReceptacle::OnMemoryOrbSpawned(UPickupContainerComponent* NewPickupContainer, AMemoryOrb* spawnedOrb) {
}

void ACritterReceptacle::OnCelebrationAnimationFinished() {
}

void ACritterReceptacle::OnBasketHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACritterReceptacle::OnAIInteractEndOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACritterReceptacle::OnAIInteractBeginOverlap(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComponent) {
}

void ACritterReceptacle::OnAIDetectorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACritterReceptacle::OnAIDetectorBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComponent, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}

void ACritterReceptacle::OnActorInteractEndOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACritterReceptacle::OnActorInteractBeginOverlap(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComponent) {
}

void ACritterReceptacle::OnActorDetectorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACritterReceptacle::OnActorDetectorBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComponent, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}

void ACritterReceptacle::LightsTimeline_UpdateIntensity(float Intensity) {
}

bool ACritterReceptacle::IsComplete() {
    return false;
}

void ACritterReceptacle::HandleCompletion() {
}

int32 ACritterReceptacle::GetRemainingRequiredCritterCount() {
    return 0;
}

void ACritterReceptacle::EnterHoleTimeline_UpdateScale(float ScaleAlpha) {
}

void ACritterReceptacle::EnterHoleTimeline_UpdateJump(float Jump) {
}

void ACritterReceptacle::EnterHoleTimeline_UpdateAlpha(float Alpha) {
}

void ACritterReceptacle::EnterHoleTimeline_PostUpdate() {
}

void ACritterReceptacle::EnterHoleTimeline_Finished() {
}

void ACritterReceptacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACritterReceptacle, RequiredCritterCount);
}


