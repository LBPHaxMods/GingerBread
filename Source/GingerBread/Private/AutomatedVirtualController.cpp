#include "AutomatedVirtualController.h"

UAutomatedVirtualController::UAutomatedVirtualController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequestingWalkMovement = false;
    this->OwningPlayerID = -1;
}

void UAutomatedVirtualController::TurnToWorldDirection(FVector WorldLookDirection) {
}

void UAutomatedVirtualController::TurnToObject(AActor* ActorToLookAt) {
}

void UAutomatedVirtualController::StopMovementAnalogInput() {
}

void UAutomatedVirtualController::StartMovementAnalogInput(const FVector& Input) {
}

void UAutomatedVirtualController::SetWalkDirection(const FVector& NewDirection) {
}

void UAutomatedVirtualController::SetRequestingWalkMovement(bool IsRequesting) {
}

void UAutomatedVirtualController::SetControllerTilt(float Yaw, float Pitch, float Roll) {
}

void UAutomatedVirtualController::ResetWalkToQueue() {
}

void UAutomatedVirtualController::ResetControllerTilt() {
}

void UAutomatedVirtualController::RemoveCurrentWalkToTarget() {
}

void UAutomatedVirtualController::ReleaseSackboyAction(ESackboyActions ActionType) {
}

void UAutomatedVirtualController::ReleaseAction(const FName ActionName) {
}

void UAutomatedVirtualController::PressSackboyAction(ESackboyActions ActionType, bool AutoRelease) {
}

void UAutomatedVirtualController::PressAction(const FName ActionName, bool AutoRelease) {
}

bool UAutomatedVirtualController::IsRequestingMovementOverride() const {
    return false;
}

bool UAutomatedVirtualController::IsActionReleased(const FName Action) const {
    return false;
}

bool UAutomatedVirtualController::IsActionPressed(const FName Action) const {
    return false;
}

bool UAutomatedVirtualController::IsActionDown(const FName Action) const {
    return false;
}

bool UAutomatedVirtualController::GetWalkTargetRelativeOffset(FVector& OutOffset) {
    return false;
}

bool UAutomatedVirtualController::GetWalkTargetPosition(FVector& OutLocation) {
    return false;
}

bool UAutomatedVirtualController::GetWalkTargetActor(AActor*& OutActor) {
    return false;
}

FVector UAutomatedVirtualController::GetSimulatedStickInput() const {
    return FVector{};
}

FVector UAutomatedVirtualController::GetOwningSackboyPosition() const {
    return FVector{};
}

ASackboy* UAutomatedVirtualController::GetOwningSackboy() const {
    return NULL;
}

float UAutomatedVirtualController::GetActionAxis(const FName Action) const {
    return 0.0f;
}

void UAutomatedVirtualController::CallVirtualControllerActionFinishedEvent(const FAutoVirtualControllerDelegate& EventToCall) {
}

void UAutomatedVirtualController::ApplySackboyActionAxis(ESackboyActions ActionType, float AxisValue) {
}

void UAutomatedVirtualController::ApplyActionAxis(const FName ActionName, float AxisValue) {
}

void UAutomatedVirtualController::AddWalkToPointTarget(const FVector PointTarget) {
}

void UAutomatedVirtualController::AddWalkToActorTarget(AActor* ActorTarget) {
}

void UAutomatedVirtualController::AddWalkToActorRelativeTarget(AActor* ActorTarget, const FVector RelativeOffset, bool IsOffsetInActorLocalSpace) {
}


