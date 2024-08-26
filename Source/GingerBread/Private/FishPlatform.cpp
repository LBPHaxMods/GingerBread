#include "FishPlatform.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/TimelineComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

AFishPlatform::AFishPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));

    this->FishRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("FishRootComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_FishPlatform"));
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->SwimmingAnimationTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("SwimmingAnimationTimelineComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->Stops.AddDefaulted(2);
    this->UseCircularLoop = false;
    this->Length = 1;
    this->Width = 1;
    this->StartsActive = true;
    this->StartingDelay = 0.00f;
    this->MinimumIndividualFishZOffset = -20.00f;
    this->MaximumIndividualFishZOffset = 20.00f;
    this->SignalingDuration = 1.50f;
    this->FishSkeletalMesh = NULL;
    this->FishAnimInstanceClass = NULL;
    this->PhysicalMaterial = NULL;
    this->SignalingAudioEvent = NULL;
    this->SignalingForceFeedbackEffect = NULL;
    this->PlaySignalingHapticsEffect = NULL;
    this->StopSignalingHapticsEffect = NULL;
    this->PlayMovementAudioEvent = NULL;
    this->StopMovementAudioEvent = NULL;
    this->SwimmingAnimationAngleCurve = NULL;
    this->SwimmingAnimationSpeedCurve = NULL;
    this->SwimmingAnimationPushApartCurve = NULL;
    this->SwimmingAnimationForceRotationCurve = NULL;
    this->FishRootComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(FishRootComponent);
}

void AFishPlatform::OnSwimmingAnimationTimelinePostUpdate() {
}

void AFishPlatform::OnSwimmingAnimationSpeedUpdate(float speedAlpha) {
}

void AFishPlatform::OnSwimmingAnimationPushApartUpdate(float PushApartAlpha) {
}

void AFishPlatform::OnSwimmingAnimationForceRotationUpdate(float ForceRotationAlpha) {
}

void AFishPlatform::OnSwimmingAnimationAngleUpdate(float AngleAlpha) {
}

void AFishPlatform::OnRep_ReplicatedState() {
}

void AFishPlatform::OnCSPAction(uint32 ActionAsInteger) {
}

int32 AFishPlatform::GetTargetStopIndex() const {
    return 0;
}

int32 AFishPlatform::GetCurrentStopIndex() const {
    return 0;
}

EFishPlatformAction AFishPlatform::GetCurrentAction() const {
    return EFishPlatformAction::Asleep;
}

void AFishPlatform::CopyProperties(USplineComponent* InSpline, const TArray<FFishPlatformStop>& InStops, bool InUseCircularLoop, int32 InLength, int32 InWidth, bool InStartsActive, float InStartingDelay) {
}

void AFishPlatform::AUTH_EnterWaitingActionWithCSP() {
}

void AFishPlatform::AUTH_EnterSignalingActionWithCSP() {
}

void AFishPlatform::AUTH_EnterMovingActionWithCSP() {
}

void AFishPlatform::AUTH_EnterAsleepActionWithCSP() {
}

void AFishPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFishPlatform, ReplicatedState);
}


