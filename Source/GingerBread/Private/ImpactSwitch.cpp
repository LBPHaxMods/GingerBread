#include "ImpactSwitch.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AImpactSwitch::AImpactSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonMesh"));
    this->ButtonInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("ButtonInteract"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->FrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrameMesh"));
    this->TimeBarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TimeBarMesh"));
    this->SackboyCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SackboyCollision"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTargetComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->PressTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PressTimeline"));
    this->ReleaseTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ReleaseTimeline"));
    this->TimerTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimerTimeline"));
    this->FailedPressTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("FailedPressTimeline"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->Timed = false;
    this->ActiveTime = 2.00f;
    this->DebugTimerVisualiser = false;
    this->BaseEmissive = 5.00f;
    this->PressedEmissiveMultiplier = 9.00f;
    this->EmissiveSwitchAlpha = 0.80f;
    this->PressTimelineCurve = NULL;
    this->ReleaseTimelineCurve = NULL;
    this->TimerTimelineCurve = NULL;
    this->FailedPressTimelineCurve = NULL;
    this->ReleaseInactiveEventTime = 0.45f;
    this->ButtonMaterialInterface = NULL;
    this->SwitchActivatedAkEvent = NULL;
    this->SwitchActivatedHapticsEvent = NULL;
    this->SwitchActivatedGamepadAudioEvent = NULL;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->ButtonMaterialInstance = NULL;
    this->CanStartAnyPress = true;
    this->ButtonMesh->SetupAttachment(RootComponent);
    this->ButtonInteract->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(ButtonMesh);
    this->FrameMesh->SetupAttachment(RootComponent);
    this->TimeBarMesh->SetupAttachment(RootComponent);
    this->SackboyCollision->SetupAttachment(RootComponent);
    this->CraftCutterTargetComponent->SetupAttachment(RootComponent);
    this->ThrowTargetComponent->SetupAttachment(ButtonMesh);
}

void AImpactSwitch::StartReleaseTimeline() {
}

void AImpactSwitch::RandomiseRotation() {
}

void AImpactSwitch::OnTimerTimelineUpdate(const float Alpha) {
}

void AImpactSwitch::OnTimerTimelineFinished() {
}

void AImpactSwitch::OnReleaseTimelineUpdate(const float ReleaseAlpha) {
}

void AImpactSwitch::OnReleaseInactiveEvent() {
}

void AImpactSwitch::OnPressTimelineUpdate(const float Alpha) {
}

void AImpactSwitch::OnPressTimelineFinished() {
}

void AImpactSwitch::OnOverlapBegin(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void AImpactSwitch::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void AImpactSwitch::OnInteractBegin(UInteractionComponent* targetPrim, AActor* SourceActor, UInteractionComponent* sourcePrim) {
}

void AImpactSwitch::OnFailedPressTimelineUpdate(const float Alpha) {
}

void AImpactSwitch::OnFailedPressTimelineFinished() {
}

float AImpactSwitch::AlphaToEmissiveIntensity(const float Alpha) {
    return 0.0f;
}

void AImpactSwitch::ActivateSwitchRPC_Implementation() {
}

void AImpactSwitch::ActivateSwitch() {
}

void AImpactSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AImpactSwitch, CanStartAnyPress);
}


