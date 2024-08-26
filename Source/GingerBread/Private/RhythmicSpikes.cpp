#include "RhythmicSpikes.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicSpikes::ARhythmicSpikes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->MoveRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MoveRoot"));
    this->DamageBox = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageBox"));
    this->DamageBoxGameplayTags = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("DamageBoxGameplayTags"));
    this->SpikeMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Spikes"));
    this->BaseMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Bases"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->TimelineCurve = NULL;
    this->SpikeMovementTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SpikeMovementTimeline"));
    this->Ak_Spikes = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Spikes"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->StartingState = ERhythmicSpikesState::Extended;
    this->Server_State = ERhythmicSpikesState::Extended;
    this->Local_State = ERhythmicSpikesState::Extended;
    this->Local_IsEnabled = true;
    this->Rows = 3;
    this->Columns = 3;
    this->VerticalAlignment = VAlign_Center;
    this->HorizontalAlignment = HAlign_Center;
    this->Spacing = 10.00f;
    this->ExtendDuration = 1.00f;
    this->RetractDuration = 1.00f;
    this->ThrustDepth = 10.00f;
    this->ExtendSFX = NULL;
    this->RetractSFX = NULL;
    this->DebugLogReturnTime = false;
    this->DamageBoxGameplayTags->SetupAttachment(DamageBox);
    this->SpikeMeshes->SetupAttachment(MoveRoot);
    this->BaseMeshes->SetupAttachment(RootComponent);
    this->Ak_Spikes->SetupAttachment(RootComponent);
    this->DamageInteraction->SetupAttachment(MoveRoot);
    this->MoveRoot->SetupAttachment(RootComponent);
    this->DamageBox->SetupAttachment(MoveRoot);
}

void ARhythmicSpikes::OnWake_Implementation() {
}

void ARhythmicSpikes::OnSpikeMovementTimelineUpdated(const float Alpha) {
}

void ARhythmicSpikes::OnSleep_Implementation() {
}

void ARhythmicSpikes::OnRhythmicBeatPostDelay() {
}

void ARhythmicSpikes::OnRep_ServerState() {
}

void ARhythmicSpikes::EDITOR_SetupFromBlutility(int32 InRows, int32 InColumns, bool InStartExtended, float InExtendTime, float InRetractTime) {
}

void ARhythmicSpikes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicSpikes, Server_State);
}


