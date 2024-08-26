#include "SlapElevator.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ASlapElevator::ASlapElevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
    this->BoltBounds = CreateDefaultSubobject<USphereComponent>(TEXT("BoltBounds"));
    this->BoltInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoltInteraction"));
    this->BlotSpinFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoltSpinFX"));
    this->BlotSparkFX1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoltSparksFX1"));
    this->BlotSparkFX2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoltSparksFX2"));
    this->BlotVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoltVisual"));
    this->KillZoneBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("KillZone"));
    this->KillZoneInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("KillZoneInteraction"));
    this->PlatformBoundingCube = CreateDefaultSubobject<UBoxComponent>(TEXT("PlatformCube"));
    this->PlatformInteractCube = CreateDefaultSubobject<UInteractionComponent>(TEXT("PlatformInteractCube"));
    this->ShaftTopMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShaftTop"));
    this->SlapElevatorBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SlapElevatorBase"));
    this->InstancedCenterShaftMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstanceCenterShaft"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->Ak_SlapElevator = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->Ak_HapticsSlapElevator = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->PlatformMotionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PlatformMotionTimeline"));
    this->PlatformBounceTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PlatformBounceTimeline"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->ElevatorHeight = 1.00f;
    this->DelayBeforeReversing = 1.00f;
    this->ReversedPlayRate = 0.70f;
    this->HeightRisePerSlap = 20.00f;
    this->GridSize = 5.00f;
    this->HeightRiseGridSnap = 5.00f;
    this->CrushDamageHeight = 7.50f;
    this->TimeToReachNewHeight = 1.00f;
    this->SlapElevatorUpCurve = NULL;
    this->SlapElevatorDownCurve = NULL;
    this->SlapElevatorBounceCurve = NULL;
    this->BounceHeight = 2.00f;
    this->BoltSpinRate = 30.00f;
    this->TargetHeight = 0.00f;
    this->StartHeight = 0.00f;
    this->ServerState = ESlapElevatorState::Idle;
    this->PoleScale = 10.00f;
    this->PoleZOffset = 1.00f;
    this->MoveUpLoopAudio = NULL;
    this->ReverseLoopAudio = NULL;
    this->ReverseLoopStopAudio = NULL;
    this->ImpactAudioTop = NULL;
    this->ImpactAudioBottom = NULL;
    this->BoltHitAudio = NULL;
    this->BoltLockAudio = NULL;
    this->BoltHitGamepadAudio = NULL;
    this->MoveUpLoopHaptics = NULL;
    this->MoveUpLoopStopHaptics = NULL;
    this->ReverseLoopHaptics = NULL;
    this->ReverseLoopStopHaptics = NULL;
    this->ImpactHapticsTop = NULL;
    this->ImpactHapticsBottom = NULL;
    this->BoltHitHaptics = NULL;
    this->BoltLockHaptics = NULL;
    this->Ak_HapticsSlapElevator->SetupAttachment(PlatformMesh);
    this->PlatformMesh->SetupAttachment(RootComponent);
    this->BoltBounds->SetupAttachment(PlatformMesh);
    this->BoltInteraction->SetupAttachment(BoltBounds);
    this->BlotSpinFX->SetupAttachment(BoltBounds);
    this->BlotSparkFX1->SetupAttachment(BoltBounds);
    this->BlotSparkFX2->SetupAttachment(BoltBounds);
    this->BlotVisualMesh->SetupAttachment(PlatformMesh);
    this->KillZoneBounds->SetupAttachment(PlatformMesh);
    this->KillZoneInteraction->SetupAttachment(KillZoneBounds);
    this->PlatformBoundingCube->SetupAttachment(PlatformMesh);
    this->PlatformInteractCube->SetupAttachment(PlatformMesh);
    this->ShaftTopMesh->SetupAttachment(RootComponent);
    this->SlapElevatorBaseMesh->SetupAttachment(RootComponent);
    this->InstancedCenterShaftMesh->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->Ak_SlapElevator->SetupAttachment(RootComponent);
}

void ASlapElevator::SetWorldMaterials(EWorldLocation WorldLocation) {
}

void ASlapElevator::PlaySlapEffectsMulticast_Implementation(ASackboy* Sackboy) {
}

void ASlapElevator::OnRep_State() {
}

void ASlapElevator::OnRep_SlapInfo() {
}

void ASlapElevator::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ASlapElevator::InitiatePlatformFalldown() {
}

void ASlapElevator::ElevatorUpdate(float platformHeight) {
}

void ASlapElevator::ElevatorMotionFinished() {
}

void ASlapElevator::ElevatorBounceUpdate(float platformHeight) {
}

void ASlapElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASlapElevator, SlapInfo);
    DOREPLIFETIME(ASlapElevator, ServerState);
}


