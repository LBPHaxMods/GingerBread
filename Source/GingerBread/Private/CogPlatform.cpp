#include "CogPlatform.h"
#include "AkComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ACogPlatform::ACogPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->RotationRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RotationRootComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_CogPlatform"));
    this->RotationCSPTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("RotationCSPTimelineComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->StartingDelay = 0.20f;
    this->RotationDuration = 1.00f;
    this->WaitingDuration = 0.30f;
    this->AnglePerRotation = 22.50f;
    this->StartsActive = true;
    this->RequiresManualMovement = false;
    this->UseOscillatingMovement = false;
    this->PreCogHitTimelineAlpha = 0.64f;
    this->CogHitTimelineAlpha = 0.80f;
    this->RotationTimelineCurve = NULL;
    this->StartRotatingAudioEvent = NULL;
    this->RotationLoopAudioPlayEvent = NULL;
    this->RotationLoopAudioStopEvent = NULL;
    this->PreCogHitAudioEvent = NULL;
    this->CogHitAudioEvent = NULL;
    this->CogHitForceFeedbackEffect = NULL;
    this->CogHitHapticsEvent = NULL;
    this->CogStartRotationHapticsEvent = NULL;
    this->InitialAngle = 0.00f;
    this->TargetAngle = 0.00f;
    this->RotationRootComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RotationRootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void ACogPlatform::OnRotationTimelineStarted() {
}

void ACogPlatform::OnRotationTimelineFinished() {
}

void ACogPlatform::OnRotationTimelineAlphaUpdate(float Alpha) {
}

void ACogPlatform::OnRotationPreCogHitEvent() {
}

void ACogPlatform::OnRotationCogHitEvent() {
}

void ACogPlatform::CopyProperties(float InStartingDelay, float InRotationDuration, float InWaitingDuration, float InAnglePerRotation, bool InStartsActive, bool InRequiresManualMovement, bool InUseOscillatingMovement) {
}

void ACogPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACogPlatform, InitialAngle);
    DOREPLIFETIME(ACogPlatform, TargetAngle);
}


