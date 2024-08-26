#include "ESportsPhysicsSpikeyRoller.h"
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

AESportsPhysicsSpikeyRoller::AESportsPhysicsSpikeyRoller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->Cylinder->SetupAttachment(RootComponent);
    this->SpikeyMeshes->SetupAttachment(Cylinder);
    this->EndMeshes->SetupAttachment(Cylinder);
    this->SpotShadow->SetupAttachment(Cylinder);
    this->Ak_PhysicsSpikeyRoller->SetupAttachment(RootComponent);
    this->AudioSpline->SetupAttachment(RootComponent);
    this->AudioSplineComponent_Loop->SetupAttachment(RootComponent);
    this->AudioSplineComponent_Impact->SetupAttachment(RootComponent);
    this->InteractMain->SetupAttachment(Cylinder);
    this->GameplayTag->SetupAttachment(Cylinder);
}

void AESportsPhysicsSpikeyRoller::Trigger_Implementation() {
}

void AESportsPhysicsSpikeyRoller::OnWake_Implementation() {
}

void AESportsPhysicsSpikeyRoller::OnSpikeScaleVectorTimelineUpdated(const FVector vAlpha) {
}

void AESportsPhysicsSpikeyRoller::OnSpikeScaleTimelineUpdated(const float Alpha) {
}

void AESportsPhysicsSpikeyRoller::OnSleep_Implementation() {
}

void AESportsPhysicsSpikeyRoller::OnRep_EnabledChanged() {
}

void AESportsPhysicsSpikeyRoller::OnRep_ActiveChanged() {
}

void AESportsPhysicsSpikeyRoller::OnCSPActionEvent(uint32 Action) {
}

void AESportsPhysicsSpikeyRoller::OnActorDestroyedInGame(AActor* DestroyedActor) {
}

void AESportsPhysicsSpikeyRoller::EDITOR_SetupFromBlutility(const float _length, const float _rollingSpeed, const bool _canRollBothWays, const bool _scaleUpOnSpawn, const float _startScale, const float _scaleUpTime) {
}

void AESportsPhysicsSpikeyRoller::Deactivate_Implementation() {
}

void AESportsPhysicsSpikeyRoller::Activate_Implementation(bool bAutoTrigger) {
}

void AESportsPhysicsSpikeyRoller::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, Length);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, RollingSpeed);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, bCanRollBothWays);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, bScaleUpOnSpawn);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, ScaleUpTime);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, StartScale);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, StartVectorScale);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, StartVelocity);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, SpawnedAtRuntime);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, bIsActive);
    DOREPLIFETIME(AESportsPhysicsSpikeyRoller, bIsEnabled);
}


