#include "ESportsSlapExtender.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "BlastersTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "ProcStaticMeshComponent.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

AESportsSlapExtender::AESportsSlapExtender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->BaseSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseSkeletalMeshComponent"));
    this->BaseBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->ButtonBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ButtonBoxComponent"));
    this->RightEyeBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RightEyeBoxComponent"));
    this->LeftEyeBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftEyeBoxComponent"));
    this->BaseInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("BaseInteraction"));
    this->ButtonInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ButtonInteraction"));
    this->RightEyeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("RightEyeInteraction"));
    this->LeftEyeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("LeftEyeInteraction"));
    this->ProcStaticMeshComponent = CreateDefaultSubobject<UProcStaticMeshComponent>(TEXT("ProcStaticMeshComponent"));
    this->EndCapMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndCapMeshComponent"));
    this->SkeletalEndComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalEndComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("MovementSplineComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->EndAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("EndAkComponent"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->ExtendingTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ExtendingTimeline"));
    this->ButtonDepressTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ButtonDepressTimeline"));
    this->RightEyeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RightEyeTimeline"));
    this->LeftEyeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LeftEyeTimeline"));
    this->RetractTellTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RetractTellTimeline"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->BlastersTargetComponent = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTargetComponent"));
    this->EndExpandAnimTrigger = 0.40f;
    this->EndRetractAnimTrigger = 0.10f;
    this->BeginRetractAnimTrigger = 0.45f;
    this->StartRetractTellTrigger = 1.00f;
    this->StopRetractTellTrigger = 0.20f;
    this->RetractingAkEventTrigger = 0.25f;
    this->FirstHitAkEventTrigger = 0.25f;
    this->ButtonDepressDuration = 0.20f;
    this->EyeBlinkDuration = 0.20f;
    this->TellPlayRate = 4.00f;
    this->SegmentStretch = 0.00f;
    this->DynamicColliders = false;
    this->ExtendDuration = 1.00f;
    this->RetractDuration = 2.00f;
    this->PauseDelay = 6.00f;
    this->Loop = false;
    this->Invert = false;
    this->AutoPlay = false;
    this->Size = ESlapExtenderSize::Slim;
    this->StartDelay = 0.00f;
    this->ExtendingTimelineCurve = NULL;
    this->RetractingTimelineCurve = NULL;
    this->ButtonDepressTimelineCurve = NULL;
    this->EyeBlinkTimelineCurve = NULL;
    this->TellMovementCurve = NULL;
    this->MoveExtendAkEvent = NULL;
    this->ExtendingAkEvent = NULL;
    this->MoveRetractAkEvent = NULL;
    this->RetractingAkEvent = NULL;
    this->FirstHitAkEvent = NULL;
    this->HitSoundsAkEvent = NULL;
    this->WobbleVoxAkEvent = NULL;
    this->ButtonDownAkEvent = NULL;
    this->ButtonUpAkEvent = NULL;
    this->ButtonImpactAkEvent = NULL;
    this->RetractedAkEvent = NULL;
    this->VibExtendingAkEvent = NULL;
    this->VibRetractingAkEvent = NULL;
    this->VibRetractedAkEvent = NULL;
    this->VibExtendedHitAkEvent = NULL;
    this->VibVoxWobbleAkEvent = NULL;
    this->VibExtendedHitFirstAkEvent = NULL;
    this->VibButtonDownAkEvent = NULL;
    this->VibButtonImpactAkEvent = NULL;
    this->ButtonDownGamepadAudioEvent = NULL;
    this->ButtonImpactGamepadAudioEvent = NULL;
    this->ExtenderMaterial = NULL;
    this->SegmentLength = 0.00f;
    this->SkeletalEndDynamicMaterialInstance = NULL;
    this->State = ESlapExtenderState::Idle;
    this->EndAkComponent->SetupAttachment(RootComponent);
    this->AkHapticsComponent->SetupAttachment(EndAkComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->BlastersTargetComponent->SetupAttachment(RootComponent);
    this->BaseSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->BaseBoxComponent->SetupAttachment(RootComponent);
    this->ButtonBoxComponent->SetupAttachment(BaseBoxComponent);
    this->RightEyeBoxComponent->SetupAttachment(RootComponent);
    this->LeftEyeBoxComponent->SetupAttachment(RootComponent);
    this->BaseInteraction->SetupAttachment(RootComponent);
    this->ButtonInteraction->SetupAttachment(BaseBoxComponent);
    this->RightEyeInteraction->SetupAttachment(RootComponent);
    this->LeftEyeInteraction->SetupAttachment(RootComponent);
    this->ProcStaticMeshComponent->SetupAttachment(SplineComponent);
    this->EndCapMeshComponent->SetupAttachment(RootComponent);
    this->SkeletalEndComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AESportsSlapExtender::WobbleVoxTimelineEvent() {
}

void AESportsSlapExtender::StopTellAnimation() {
}

void AESportsSlapExtender::StartTellAnimation() {
}

void AESportsSlapExtender::StartRetracting() {
}

void AESportsSlapExtender::StartExtending() {
}

void AESportsSlapExtender::RetractingTimelineEvent() {
}


void AESportsSlapExtender::OnSplinePositionChanged(float CurrentPositionAlongSpline, float DeltaTime) {
}

void AESportsSlapExtender::OnSplineMovementStarted(USplineFollowerComponent* pSplineFollowerComponent, const bool WillMoveForwards) {
}

void AESportsSlapExtender::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}


void AESportsSlapExtender::OnRightEyeTimelineUpdate(const float Alpha) {
}

void AESportsSlapExtender::OnRightEyeInteractEnd(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AESportsSlapExtender::OnRightEyeInteractBegin(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AESportsSlapExtender::OnRightEyeComponentOverlapEnd(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AESportsSlapExtender::OnRightEyeComponentOverlap(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void AESportsSlapExtender::OnRetractTellTimelineUpdate(const FVector Alpha) {
}



void AESportsSlapExtender::OnRep_State() {
}

void AESportsSlapExtender::OnLeftEyeTimelineUpdate(const float Alpha) {
}

void AESportsSlapExtender::OnLeftEyeInteractEnd(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AESportsSlapExtender::OnLeftEyeInteractBegin(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AESportsSlapExtender::OnLeftEyeComponentOverlapEnd(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AESportsSlapExtender::OnLeftEyeComponentOverlap(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}



void AESportsSlapExtender::OnButtonInteractEnd(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AESportsSlapExtender::OnButtonInteractBegin(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AESportsSlapExtender::OnButtonDepressTimelineUpdate(const float Alpha) {
}

void AESportsSlapExtender::OnButtonComponentOverlapEnd(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AESportsSlapExtender::OnButtonComponentOverlap(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void AESportsSlapExtender::HitSoundsTimelineEvent() {
}

void AESportsSlapExtender::FirstHitTimelineEvent() {
}

void AESportsSlapExtender::ExtendingTimelineDone() {
}

void AESportsSlapExtender::EndRetractAnimTimelineEvent() {
}

void AESportsSlapExtender::EndExpandAnimTimelineEvent() {
}

void AESportsSlapExtender::BeginRetractAnimTimelineEvent() {
}

void AESportsSlapExtender::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AESportsSlapExtender, State);
}


