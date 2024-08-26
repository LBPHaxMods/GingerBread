#include "PrizeBubble.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GingerbreadWidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

APrizeBubble::APrizeBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldDestroyOnCollected = false;
    this->ShouldUseSackboyTracker = false;
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->SackboySpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SackboySprintArm"));
    this->ContentsPictureMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ContentsPictureMesh"));
    this->BubbleSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("BubbleSpringArm"));
    this->FrameStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrameStaticMesh"));
    this->BubbleTextWidget = CreateDefaultSubobject<UGingerbreadWidgetComponent>(TEXT("BubbleTextWidget"));
    this->TriggerActorComp = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComp"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->IdleParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("IdleParticleComponent"));
    this->CollectTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CollectTimeline"));
    this->ShrinkDestroyTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ShrinkDestroyTimeline"));
    this->ContentsScaleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ContentsScaleTimeline"));
    this->ShouldUsePhysics = false;
    this->BubbleType = EPrizeBubbleMovementType::Static;
    this->PrizeMeshScaleMultiplier = 1.00f;
    this->PrizeMeshBallSqueezeAmount = 1.00f;
    this->ScoreToAward = 20;
    this->ShrinkDestroyCurve = NULL;
    this->CollectAnimCurve = NULL;
    this->CableBaseMaterial = NULL;
    this->EmoteMaterial = NULL;
    this->GhostedMeshMaterialParameterTable = NULL;
    this->GhostedEmoteMaterialParameterTable = NULL;
    this->GhostedPaintMaterialParameterTable = NULL;
    this->ColourTintDataTable = NULL;
    this->PlaneMesh = NULL;
    this->PickupSound = NULL;
    this->PickupGamepadSound = NULL;
    this->PickupParticle = NULL;
    this->PickupHaptics = NULL;
    this->PickupForceFeedback = NULL;
    this->CableLength = 12.00f;
    this->CableWidth = 0.50f;
    this->WidgetWorldScaleCurve = NULL;
    this->ContentsScaleCurve = NULL;
    this->ContentsScaleRate = 1.50f;
    this->InitialContentsScaleOffset = 0.00f;
    this->RandomContentsScaleOffset = 1.00f;
    this->Sackboy = NULL;
    this->CurrentState = EPrizeBubbleState::Idle;
    this->SpotShadow->SetupAttachment(StaticMeshComponent);
    this->SackboySpringArm->SetupAttachment(RootComponent);
    this->ContentsPictureMesh->SetupAttachment(FrameStaticMesh);
    this->BubbleSpringArm->SetupAttachment(FrameStaticMesh);
    this->FrameStaticMesh->SetupAttachment(RootComponent);
    this->BubbleTextWidget->SetupAttachment(FrameStaticMesh);
    this->AudioComponent->SetupAttachment(ContentsPictureMesh);
    this->IdleParticleComponent->SetupAttachment(RootComponent);
}

void APrizeBubble::SetPrizeRef(const FDataTableRowHandle& prizeRef) {
}

void APrizeBubble::PostCollectFinished() {
}

void APrizeBubble::OnWidgetReady() {
}

void APrizeBubble::OnShrinkDestroyFinished() {
}

void APrizeBubble::OnRep_Sackboy() {
}

void APrizeBubble::OnRep_DataTable() {
}

void APrizeBubble::OnRep_CurrentState() {
}

void APrizeBubble::OnPlayerJoinLeave(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& PlayerId, bool forceJoining) {
}

void APrizeBubble::OnNewBeat(ARhythmManager* RhythmManager, FName CueName, int32 CurrentBeat, int32 BeatsPerBar, int32 TotalBeatCount, float BeatDuration) {
}

void APrizeBubble::OnContentsScaleUpdated(float ScaleAlpha) {
}

void APrizeBubble::OnCollectUpdated(float ScaleAlpha) {
}

void APrizeBubble::OnCollectFinished() {
}

void APrizeBubble::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APrizeBubble, PrizeReference);
    DOREPLIFETIME(APrizeBubble, Sackboy);
    DOREPLIFETIME(APrizeBubble, CurrentState);
}


