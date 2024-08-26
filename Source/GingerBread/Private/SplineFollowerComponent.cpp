#include "SplineFollowerComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

USplineFollowerComponent::USplineFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Subject = NULL;
    this->Spline = NULL;
    this->StartingPositionAlongSpline = 0.00f;
    this->StartingTimeAlongSpline = 0.00f;
    this->CurrentPositionAlongSpline = 0.00f;
    this->MovementMode = ESplineFollowerMovementMode::ConstantTime;
    this->ResetPositionAtEnd = false;
    this->DelayAtStartLocation = 0.00f;
    this->DelayAtEndLocation = 0.00f;
    this->ReversedMovement = false;
    this->StartedReversed = false;
    this->TimeToTraverseSpline = 1.00f;
    this->MovementCurve = NULL;
    this->ReversedCurve = NULL;
    this->EndOfSplineCurveTime = 1.00f;
    this->TimeScale = 1.00f;
    this->EndOfSplineBehaviour = ESplineFollowerEndOfSplineBehaviour::StopAtEnd;
    this->Paused = true;
    this->AlignPitchRotation = false;
    this->AlignRollRotation = false;
    this->AlignYawRotation = false;
    this->MatchRotationToMovement = false;
    this->SynchronisedMovement = true;
    this->VirtualLengthExtension = 0.00f;
    this->Client_IsLateJoin = false;
    this->bInitialised = false;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("SplineFollowerCSPHelper"));
    this->UseCSP = false;
    this->CSPDelay = 0.20f;
    this->Server_CurrentPosition = 0.00f;
    this->Server_PositionTimestamp = 0.00f;
    this->Server_DelayUntilTime = 0.00f;
    this->Server_ReversedMovement = false;
    this->Server_StartedReversed = false;
    this->Server_Paused = true;
    this->Server_Enabled = true;
    this->Server_CurrentTarget = 0.00f;
    this->Server_TargetStart = 0.00f;
}

void USplineFollowerComponent::StartTargetTimed(float Distance, float TravelTime, bool Normalised) {
}

void USplineFollowerComponent::StartTargetSplinePointTimed(int32 SplinePointIndex, float TravelTime) {
}

void USplineFollowerComponent::StartTargetSplinePointDirectionTimed(int32 SplinePointIndex, bool Reverse, float TravelTime) {
}

void USplineFollowerComponent::StartTargetSplinePointDirection(int32 SplinePointIndex, bool Reverse) {
}

void USplineFollowerComponent::StartTargetSplinePoint(int32 SplinePointIndex) {
}

void USplineFollowerComponent::StartTargetDirectionTimed(float Distance, bool Reverse, float TravelTime, bool Normalised) {
}

void USplineFollowerComponent::StartTargetDirection(float Distance, bool Reverse, bool Normalised) {
}

void USplineFollowerComponent::StartTarget(float Distance, bool Normalised) {
}

void USplineFollowerComponent::StartIncrementalTimed(float Distance, float TravelTime, bool Normalised) {
}

void USplineFollowerComponent::StartIncremental(float Distance, bool Normalised) {
}

void USplineFollowerComponent::StartDirectionTimed(bool Reverse, float TravelTime) {
}

void USplineFollowerComponent::StartDirection(bool Reverse) {
}

void USplineFollowerComponent::Start() {
}

bool USplineFollowerComponent::SetupWithActor(AActor* NewSubjectActor, USplineComponent* newspline, bool StartAutomatically) {
    return false;
}

bool USplineFollowerComponent::SetUp(USceneComponent* NewSubject, USplineComponent* newspline, bool StartAutomatically) {
    return false;
}

void USplineFollowerComponent::SetTimeAlongSpline(float Time) {
}

void USplineFollowerComponent::SetNormalisedTimeAlongSpline(float normal_time) {
}

void USplineFollowerComponent::SetNormalisedDistanceAlongSpline(float normal_distance) {
}

void USplineFollowerComponent::SetEnabled(bool NewEnabled) {
}

void USplineFollowerComponent::SetDistanceAlongSpline(float Distance, bool ForceLocally) {
}

void USplineFollowerComponent::RESET() {
}

void USplineFollowerComponent::PAUSE() {
}

void USplineFollowerComponent::OnStartBroadcastRPC_Implementation(bool bForward) {
}

void USplineFollowerComponent::OnRep_SplineChanged() {
}

void USplineFollowerComponent::OnRep_ServerTargetStart() {
}

void USplineFollowerComponent::OnRep_ServerStartedReversed() {
}

void USplineFollowerComponent::OnRep_ServerReversedMovement() {
}

void USplineFollowerComponent::OnRep_ServerPaused() {
}

void USplineFollowerComponent::OnRep_ServerEnabled() {
}

void USplineFollowerComponent::OnRep_ServerDelayUntilTime() {
}

void USplineFollowerComponent::OnRep_ServerCurrentTarget() {
}

void USplineFollowerComponent::OnRep_ServerCurrentPosition() {
}

bool USplineFollowerComponent::IsMoving() const {
    return false;
}

float USplineFollowerComponent::GetSplineLength(bool WithVirtualExtension) const {
    return 0.0f;
}

void USplineFollowerComponent::ChangeSpline(USplineComponent* newspline, bool StartAutomatically) {
}

void USplineFollowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineFollowerComponent, Subject);
    DOREPLIFETIME(USplineFollowerComponent, Spline);
    DOREPLIFETIME(USplineFollowerComponent, StartingPositionAlongSpline);
    DOREPLIFETIME(USplineFollowerComponent, StartingTimeAlongSpline);
    DOREPLIFETIME(USplineFollowerComponent, MovementMode);
    DOREPLIFETIME(USplineFollowerComponent, ResetPositionAtEnd);
    DOREPLIFETIME(USplineFollowerComponent, DelayAtStartLocation);
    DOREPLIFETIME(USplineFollowerComponent, DelayAtEndLocation);
    DOREPLIFETIME(USplineFollowerComponent, TimeToTraverseSpline);
    DOREPLIFETIME(USplineFollowerComponent, MovementCurve);
    DOREPLIFETIME(USplineFollowerComponent, ReversedCurve);
    DOREPLIFETIME(USplineFollowerComponent, EndOfSplineCurveTime);
    DOREPLIFETIME(USplineFollowerComponent, TimeScale);
    DOREPLIFETIME(USplineFollowerComponent, EndOfSplineBehaviour);
    DOREPLIFETIME(USplineFollowerComponent, RelativePositionOffset);
    DOREPLIFETIME(USplineFollowerComponent, WorldPositionOffset);
    DOREPLIFETIME(USplineFollowerComponent, RotationOffset);
    DOREPLIFETIME(USplineFollowerComponent, AlignPitchRotation);
    DOREPLIFETIME(USplineFollowerComponent, AlignRollRotation);
    DOREPLIFETIME(USplineFollowerComponent, AlignYawRotation);
    DOREPLIFETIME(USplineFollowerComponent, MatchRotationToMovement);
    DOREPLIFETIME(USplineFollowerComponent, SynchronisedMovement);
    DOREPLIFETIME(USplineFollowerComponent, VirtualLengthExtension);
    DOREPLIFETIME(USplineFollowerComponent, bInitialised);
    DOREPLIFETIME(USplineFollowerComponent, UseCSP);
    DOREPLIFETIME(USplineFollowerComponent, CSPDelay);
    DOREPLIFETIME(USplineFollowerComponent, Server_CurrentPosition);
    DOREPLIFETIME(USplineFollowerComponent, Server_PositionTimestamp);
    DOREPLIFETIME(USplineFollowerComponent, Server_DelayUntilTime);
    DOREPLIFETIME(USplineFollowerComponent, Server_ReversedMovement);
    DOREPLIFETIME(USplineFollowerComponent, Server_StartedReversed);
    DOREPLIFETIME(USplineFollowerComponent, Server_Paused);
    DOREPLIFETIME(USplineFollowerComponent, Server_Enabled);
    DOREPLIFETIME(USplineFollowerComponent, Server_CurrentTarget);
    DOREPLIFETIME(USplineFollowerComponent, Server_TargetStart);
}


