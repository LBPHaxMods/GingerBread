#include "PullOutPlatform.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

APullOutPlatform::APullOutPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->PullOutSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PullOutSpline"));
    this->ReturnSpline = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->HapticsAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("HapticsAkComponent"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->WobbleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("WobbleTimeline"));
    this->Length = 100.00f;
    this->BasePullSpeed = 0.00f;
    this->ReturnDuration = 0.00f;
    this->ArchetypePullSpeed = 30.00f;
    this->ArchetypeReturnSpeed = 10.00f;
    this->ArchetypeReturnDuration = 1.00f;
    this->TeamworkInputMultipliers[0] = 0.00f;
    this->TeamworkInputMultipliers[1] = 0.00f;
    this->TeamworkInputMultipliers[2] = 0.00f;
    this->TeamworkInputMultipliers[3] = 0.00f;
    this->TeamworkInputMultipliers[4] = 0.00f;
    this->HinderingInputMultiplier = 0.50f;
    this->MinimumInputMagnitude = 0.20f;
    this->AllowInputWhileReturning = false;
    this->ScaleReturnDurationWithLength = false;
    this->WobbleTimelineCurve = NULL;
    this->WobbleTimelineDuration = 0.50f;
    this->PullOutSplineMovementCurve = NULL;
    this->ReturnSplineMovementCurve = NULL;
    this->StartedReturningAudioEvent = NULL;
    this->FinishedReturningAudioEvent = NULL;
    this->StartedPullingAudioEvent = NULL;
    this->FinishedPullingAudioEvent = NULL;
    this->StartedPullingGamepadAudioEvent = NULL;
    this->FinishedPullingGamepadAudioEvent = NULL;
    this->StartLoopPullingGamepadAudioEvent = NULL;
    this->StopLoopPullingGamepadAudioEvent = NULL;
    this->StartedPullingHapticsEvent = NULL;
    this->AbortedPullingHapticsEvent = NULL;
    this->FinishedPullingHapticsEvent = NULL;
    this->StartedReturningHapticsEvent = NULL;
    this->AbortedReturningHapticsEvent = NULL;
    this->FinishedReturningHapticsEvent = NULL;
    this->State = EPullOutPlatformState::Idle;
    this->PercentageAlongSplineAtStateChange = 0.00f;
    this->ArrowComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(StaticMeshComponent);
    this->PullOutSpline->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->HapticsAkComponent->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(StaticMeshComponent);
}

void APullOutPlatform::OnWobbleTimelineUpdate(const float WobbleAmount) {
}

void APullOutPlatform::OnSplineTargetReached(USplineFollowerComponent* pSplineFollowerComponent, bool WasTravellingForward, bool WasSuccess) {
}

void APullOutPlatform::OnSplinePaused(USplineFollowerComponent* pSplineFollower, bool WasTravellingForward) {
}

void APullOutPlatform::OnSplineMovementStarted(USplineFollowerComponent* pSplineFollowerComponent, const bool WillMoveForwards) {
}

void APullOutPlatform::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}

void APullOutPlatform::OnRep_State(const TEnumAsByte<EPullOutPlatformState::Type> PreviousState) {
}

void APullOutPlatform::Multicast_PlayMovementStartedEffects_Implementation() {
}

void APullOutPlatform::Multicast_PlayMovementPausedEffects_Implementation() {
}

void APullOutPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APullOutPlatform, State);
    DOREPLIFETIME(APullOutPlatform, PercentageAlongSplineAtStateChange);
    DOREPLIFETIME(APullOutPlatform, Client_StartLocation);
}


