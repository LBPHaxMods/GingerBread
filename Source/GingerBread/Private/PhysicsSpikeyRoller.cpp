#include "PhysicsSpikeyRoller.h"
#include "AkComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "AudioSplineComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

APhysicsSpikeyRoller::APhysicsSpikeyRoller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->RootMesh = NULL;
    this->Cylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder"));
    this->EndMesh = NULL;
    this->SpikeyMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("SpikeyMeshes"));
    this->EndMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("EndMeshes"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->PhysicsConstraint2 = NULL;
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->Ak_PhysicsSpikeyRoller = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_PhysicsSpikeyRoller"));
    this->AudioSpline = CreateDefaultSubobject<USplineComponent>(TEXT("AudioSpline"));
    this->AudioSplineComponent_Loop = CreateDefaultSubobject<UAudioSplineComponent>(TEXT("AudioSplineComponent_Loop"));
    this->AudioSplineComponent_Impact = CreateDefaultSubobject<UAudioSplineComponent>(TEXT("AudioSplineComponent_Impact"));
    this->ScaleUpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ScaleUpTimeline"));
    this->InteractMain = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractMain"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));

    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->Length = 20.00f;
    this->RollingSpeed = 10.00f;
    this->bCanRollBothWays = false;
    this->bScaleUpOnSpawn = false;
    this->ScaleUpTime = 0.50f;
    this->StartScale = 0.20f;
    this->SpawnedAtRuntime = false;
    this->SpikeScale = 0.80f;
    this->SideMeshScale = 0.67f;
    this->CylinderScale = 0.08f;
    this->kMaxLinVelDelta = 1.00f;
    this->kMaxAngVelDelta = 1.00f;
    this->TimelineCurve = NULL;
    this->TimelineVectorCurve = NULL;
    this->RollerLoopStartAudioEvent = NULL;
    this->RollerLoopStopAudioEvent = NULL;
    this->RollerImpactStartAudioEvent = NULL;
    this->RollerImpactStopAudioEvent = NULL;
    this->ZeroSpeedPhysicalMaterial = NULL;
    this->NonZeroSpeedPhysicalMaterial = NULL;
    this->bIsActive = true;
    this->bIsEnabled = true;
    this->SpikeyMeshes->SetupAttachment(Cylinder);
    this->EndMeshes->SetupAttachment(Cylinder);
    this->SpotShadow->SetupAttachment(Cylinder);
    this->Ak_PhysicsSpikeyRoller->SetupAttachment(RootComponent);
    this->AudioSpline->SetupAttachment(RootComponent);
    this->AudioSplineComponent_Loop->SetupAttachment(RootComponent);
    this->AudioSplineComponent_Impact->SetupAttachment(RootComponent);
    this->InteractMain->SetupAttachment(Cylinder);
    this->GameplayTag->SetupAttachment(Cylinder);
    this->Cylinder->SetupAttachment(RootComponent);
}

void APhysicsSpikeyRoller::Trigger_Implementation() {
}

void APhysicsSpikeyRoller::OnWake_Implementation() {
}

void APhysicsSpikeyRoller::OnSpikeScaleVectorTimelineUpdated(const FVector vAlpha) {
}

void APhysicsSpikeyRoller::OnSpikeScaleTimelineUpdated(const float Alpha) {
}

void APhysicsSpikeyRoller::OnSleep_Implementation() {
}

void APhysicsSpikeyRoller::OnRep_EnabledChanged() {
}

void APhysicsSpikeyRoller::OnRep_ActiveChanged() {
}

void APhysicsSpikeyRoller::OnCSPActionEvent(uint32 Action) {
}

void APhysicsSpikeyRoller::OnActorDestroyedInGame(AActor* DestroyedActor) {
}

void APhysicsSpikeyRoller::EDITOR_SetupFromBlutility(const float _length, const float _rollingSpeed, const bool _canRollBothWays, const bool _scaleUpOnSpawn, const float _startScale, const float _scaleUpTime) {
}

void APhysicsSpikeyRoller::Deactivate_Implementation() {
}

void APhysicsSpikeyRoller::Activate_Implementation(bool bAutoTrigger) {
}

void APhysicsSpikeyRoller::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhysicsSpikeyRoller, Length);
    DOREPLIFETIME(APhysicsSpikeyRoller, RollingSpeed);
    DOREPLIFETIME(APhysicsSpikeyRoller, bCanRollBothWays);
    DOREPLIFETIME(APhysicsSpikeyRoller, bScaleUpOnSpawn);
    DOREPLIFETIME(APhysicsSpikeyRoller, ScaleUpTime);
    DOREPLIFETIME(APhysicsSpikeyRoller, StartScale);
    DOREPLIFETIME(APhysicsSpikeyRoller, StartVectorScale);
    DOREPLIFETIME(APhysicsSpikeyRoller, StartVelocity);
    DOREPLIFETIME(APhysicsSpikeyRoller, SpawnedAtRuntime);
    DOREPLIFETIME(APhysicsSpikeyRoller, bIsActive);
    DOREPLIFETIME(APhysicsSpikeyRoller, bIsEnabled);
}


