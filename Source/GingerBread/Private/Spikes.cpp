#include "Spikes.h"
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

ASpikes::ASpikes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->bSpikesBeginExtended = true;
    this->bAutomaticThrustingSpikes = true;
    this->InitialDelayTime = 0.00f;
    this->UpTime = 1.00f;
    this->DownTime = 1.00f;
    this->ThrustSpeed = 5.00f;
    this->ThrustDepth = 10.00f;
    this->ExtendSFX = NULL;
    this->RetractSFX = NULL;
    this->bIsEnabled = true;
    this->CurrentSpikeState = ESpikesState::Extended;
    this->bIsActive = true;
    this->MoveRoot->SetupAttachment(RootComponent);
    this->DamageBox->SetupAttachment(MoveRoot);
    this->DamageBoxGameplayTags->SetupAttachment(DamageBox);
    this->SpikeMeshes->SetupAttachment(MoveRoot);
    this->BaseMeshes->SetupAttachment(RootComponent);
    this->Ak_Spikes->SetupAttachment(RootComponent);
    this->DamageInteraction->SetupAttachment(MoveRoot);
}

void ASpikes::Trigger_Implementation() {
}

void ASpikes::OnWake_Implementation() {
}

void ASpikes::OnSpikeMovementTimelineUpdated(const float Alpha) {
}

void ASpikes::OnSleep_Implementation() {
}

void ASpikes::OnRep_SpikesStateChanged() {
}

void ASpikes::OnRep_EnabledChanged() {
}

void ASpikes::OnRep_ActiveChanged() {
}

void ASpikes::Deactivate_Implementation() {
}

void ASpikes::Activate_Implementation(bool bAutoTrigger) {
}

void ASpikes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpikes, bIsEnabled);
    DOREPLIFETIME(ASpikes, CurrentSpikeState);
    DOREPLIFETIME(ASpikes, bIsActive);
}


