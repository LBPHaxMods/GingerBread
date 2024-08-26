#include "SpikeyRoller.h"
#include "AkComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "AudioSplineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RotatorComponent.h"
#include "TriggerActorComponent.h"

ASpikeyRoller::ASpikeyRoller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));

    this->RootMesh = (UStaticMeshComponent*)RootComponent;
    this->Cylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder"));
    this->EndMesh = NULL;
    this->SpikeyMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("SpikeyMeshes"));
    this->EndMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("EndMeshes"));
    this->SplineFollowerComponent = NULL;
    this->Rotator = CreateDefaultSubobject<URotatorComponent>(TEXT("Rotator"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->Ak_SpikeyRoller = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_SpikeyRoller"));
    this->AudioSpline = CreateDefaultSubobject<USplineComponent>(TEXT("AudioSpline"));
    this->AudioSplineComponent_Loop = CreateDefaultSubobject<UAudioSplineComponent>(TEXT("AudioSplineComponent_Loop"));
    this->AudioSplineComponent_Impact = CreateDefaultSubobject<UAudioSplineComponent>(TEXT("AudioSplineComponent_Impact"));
    this->ScaleUpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ScaleUpTimeline"));
    this->InteractMain = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractMain"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));

    this->Length = 20.00f;
    this->bMatchesMoverToolMotion = false;
    this->RollingSpeed = 10.00f;
    this->SynchronisedMoverTool = NULL;
    this->bInvertRotation = false;
    this->bScaleUpOnSpawn = false;
    this->ScaleUpTime = 0.50f;
    this->StartScale = 0.20f;
    this->AudioType = ESpikeyRollerAudioType::Static_Ground;
    this->SpikeScale = 0.80f;
    this->SideMeshScale = 0.67f;
    this->CylinderScale = 0.08f;
    this->TimelineCurve = NULL;
    this->TimelineVectorCurve = NULL;
    this->RollerLoopStartAudioEvent = NULL;
    this->RollerLoopStopAudioEvent = NULL;
    this->RollerImpactStartAudioEvent = NULL;
    this->RollerImpactStopAudioEvent = NULL;
    this->ImpactAudioEventTime = 1.20f;
    this->bIsActive = true;
    this->bIsEnabled = true;
    this->InteractMain->SetupAttachment(Cylinder);
    this->GameplayTag->SetupAttachment(Cylinder);
    this->Cylinder->SetupAttachment(RootComponent);
    this->SpikeyMeshes->SetupAttachment(Cylinder);
    this->EndMeshes->SetupAttachment(Cylinder);
    this->Ak_SpikeyRoller->SetupAttachment(Cylinder);
    this->AudioSpline->SetupAttachment(Cylinder);
    this->AudioSplineComponent_Loop->SetupAttachment(Cylinder);
    this->AudioSplineComponent_Impact->SetupAttachment(Cylinder);
}

void ASpikeyRoller::Trigger_Implementation() {
}

void ASpikeyRoller::PlayStopImpactAudio() {
}

void ASpikeyRoller::OnWake_Implementation() {
}

void ASpikeyRoller::OnSpikeScaleVectorTimelineUpdated(const FVector vAlpha) {
}

void ASpikeyRoller::OnSpikeScaleTimelineUpdated(const float Alpha) {
}

void ASpikeyRoller::OnSleep_Implementation() {
}

void ASpikeyRoller::OnRep_EnabledChanged() {
}

void ASpikeyRoller::OnRep_ActiveChanged() {
}

void ASpikeyRoller::OnActorDestroyedInGame(AActor* DestroyedActor) {
}

void ASpikeyRoller::EDITOR_SetupFromBlutility(const float _length, const bool _matchesMoverToolMotion, const float _rollingSpeed, const AMoverTool2* _synchronisedMoverTool, const bool _invertRotation, const bool _scaleUpOnSpawn, const float _startScale, const float _scaleUpTime) {
}

void ASpikeyRoller::Deactivate_Implementation() {
}

void ASpikeyRoller::Activate_Implementation(bool bAutoTrigger) {
}

void ASpikeyRoller::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpikeyRoller, bIsActive);
    DOREPLIFETIME(ASpikeyRoller, bIsEnabled);
}


