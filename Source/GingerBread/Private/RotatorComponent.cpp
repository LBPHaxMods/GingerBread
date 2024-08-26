#include "RotatorComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

URotatorComponent::URotatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Subject = NULL;
    this->ObjectIsSymmetricalAroundRotationAxis = false;
    this->StartingAlpha = 0.00f;
    this->StartOfRotationCurveTime = 0.00f;
    this->ForceShortestRoute = true;
    this->Paused = true;
    this->RotationMode = ERotationMode::OneTimeRotation;
    this->SpeedMode = ERotationSpeedMode::Constant;
    this->ResetRotationAtEnd = false;
    this->TimeToCompleteRotation = 1.00f;
    this->DelayAtStartRotation = 0.00f;
    this->DelayAtEndRotation = 0.00f;
    this->ReversedMovement = false;
    this->StartedReversed = false;
    this->SpeedCurve = NULL;
    this->ReversedCurve = NULL;
    this->UseSingleCurve = true;
    this->EndOfRotationCurveTime = 1.00f;
    this->TimeScale = 1.00f;
    this->bInitialised = false;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("RotatorCSPHelper"));
    this->UseCSP = false;
    this->CSPDelay = 0.20f;
    this->Server_CurrentRotation = 0.00f;
    this->Server_RotationTimestamp = 0.00f;
    this->Server_DelayUntilTime = 0.00f;
    this->Server_ReversedMovement = false;
    this->Server_StartedReversed = false;
    this->Server_Paused = true;
    this->Server_Enabled = true;
    this->Server_CurrentTarget = 0.00f;
    this->Server_TargetStart = 0.00f;
}

void URotatorComponent::StartTargetDirection(float Alpha, bool Reverse) {
}

void URotatorComponent::StartTarget(float Alpha) {
}

void URotatorComponent::StartIncremental(float Alpha) {
}

void URotatorComponent::StartDirection(bool Reverse) {
}

void URotatorComponent::Start() {
}

bool URotatorComponent::SetUp(USceneComponent* NewSubject, bool StartAutomatically) {
    return false;
}

void URotatorComponent::SetNormalisedInterpolationTime(float normal_time) {
}

void URotatorComponent::SetInterpolationTime(float Time, bool ForceLocally) {
}

void URotatorComponent::SetInterpolationAlpha(float Alpha) {
}

void URotatorComponent::SetEnabled(bool NewEnabled) {
}

void URotatorComponent::RESET() {
}

void URotatorComponent::PAUSE() {
}

void URotatorComponent::OnStartBroadcastRPC_Implementation(bool bForward) {
}

void URotatorComponent::OnRep_ServerTargetStart() {
}

void URotatorComponent::OnRep_ServerStartedReversed() {
}

void URotatorComponent::OnRep_ServerReversedMovement() {
}

void URotatorComponent::OnRep_ServerPaused() {
}

void URotatorComponent::OnRep_ServerEnabled() {
}

void URotatorComponent::OnRep_ServerDelayUntilTime() {
}

void URotatorComponent::OnRep_ServerCurrentTarget() {
}

void URotatorComponent::OnRep_ServerCurrentRotation() {
}

void URotatorComponent::OnRep_Initialised() {
}

bool URotatorComponent::IsRotating() const {
    return false;
}

float URotatorComponent::GetCurrentAlpha() const {
    return 0.0f;
}

void URotatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URotatorComponent, Subject);
    DOREPLIFETIME(URotatorComponent, PivotOffset);
    DOREPLIFETIME(URotatorComponent, StartRotation);
    DOREPLIFETIME(URotatorComponent, EndRotation);
    DOREPLIFETIME(URotatorComponent, ObjectIsSymmetricalAroundRotationAxis);
    DOREPLIFETIME(URotatorComponent, StartingAlpha);
    DOREPLIFETIME(URotatorComponent, StartOfRotationCurveTime);
    DOREPLIFETIME(URotatorComponent, ForceShortestRoute);
    DOREPLIFETIME(URotatorComponent, RotationMode);
    DOREPLIFETIME(URotatorComponent, SpeedMode);
    DOREPLIFETIME(URotatorComponent, ResetRotationAtEnd);
    DOREPLIFETIME(URotatorComponent, TimeToCompleteRotation);
    DOREPLIFETIME(URotatorComponent, DelayAtStartRotation);
    DOREPLIFETIME(URotatorComponent, DelayAtEndRotation);
    DOREPLIFETIME(URotatorComponent, SpeedCurve);
    DOREPLIFETIME(URotatorComponent, ReversedCurve);
    DOREPLIFETIME(URotatorComponent, UseSingleCurve);
    DOREPLIFETIME(URotatorComponent, EndOfRotationCurveTime);
    DOREPLIFETIME(URotatorComponent, TimeScale);
    DOREPLIFETIME(URotatorComponent, bInitialised);
    DOREPLIFETIME(URotatorComponent, UseCSP);
    DOREPLIFETIME(URotatorComponent, CSPDelay);
    DOREPLIFETIME(URotatorComponent, Server_CurrentRotation);
    DOREPLIFETIME(URotatorComponent, Server_RotationTimestamp);
    DOREPLIFETIME(URotatorComponent, Server_DelayUntilTime);
    DOREPLIFETIME(URotatorComponent, Server_ReversedMovement);
    DOREPLIFETIME(URotatorComponent, Server_StartedReversed);
    DOREPLIFETIME(URotatorComponent, Server_Paused);
    DOREPLIFETIME(URotatorComponent, Server_Enabled);
    DOREPLIFETIME(URotatorComponent, Server_CurrentTarget);
    DOREPLIFETIME(URotatorComponent, Server_TargetStart);
}


