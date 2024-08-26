#include "RhythmicCogPlatform.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicCogPlatform::ARhythmicCogPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->RotationRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RotationRootComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RhythmicCogPlatform"));
    this->RotationTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("RotationTimelineComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->AnglePerRotation = 22.50f;
    this->UseOscillatingMovement = false;
    this->PreCogHitTimelineAlpha = 0.50f;
    this->CogHitTimelineAlpha = 1.00f;
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
    this->ShouldRotateBackwards = false;
    this->RotationRootComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RotationRootComponent);
    this->AkComponent->SetupAttachment(RotationRootComponent);
}

void ARhythmicCogPlatform::OnRotationTimelineStarted() {
}

void ARhythmicCogPlatform::OnRotationTimelineFinished() {
}

void ARhythmicCogPlatform::OnRotationTimelineAlphaUpdate(float Alpha) {
}

void ARhythmicCogPlatform::OnRotationPreCogHitEvent() {
}

void ARhythmicCogPlatform::OnRotationCogHitEvent() {
}

void ARhythmicCogPlatform::CopyProperties(float InAnglePerRotation, bool InUseOscillatingMovement) {
}

void ARhythmicCogPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicCogPlatform, InitialAngle);
    DOREPLIFETIME(ARhythmicCogPlatform, TargetAngle);
    DOREPLIFETIME(ARhythmicCogPlatform, ShouldRotateBackwards);
}


