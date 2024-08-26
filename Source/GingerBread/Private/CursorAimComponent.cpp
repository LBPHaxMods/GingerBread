#include "CursorAimComponent.h"

UCursorAimComponent::UCursorAimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Controller = NULL;
    this->MyCursorWidget = NULL;
    this->LockedTarget = NULL;
    this->CursorTemplate = NULL;
    this->CursorBehaviour = ECursorBehaviourType::Auto;
    this->CursorSpeedCurve = NULL;
    this->CursorSpeedMultiplier = 1.00f;
    this->TargetGravityStrength = 0.00f;
    this->TargetHoverSlowdown = 1.00f;
    this->AutoSelectInputTriggerThreshold = 0.50f;
    this->AutoSelectInputReleaseThreshold = 0.10f;
    this->ProjectileSpeed = 1000.00f;
    this->HasValidTarget = false;
    this->RequiresBlockingHit = false;
}

void UCursorAimComponent::SetCursorScale(float Scale) {
}

void UCursorAimComponent::SetCursorPosition(const FVector2D& Position) {
}

void UCursorAimComponent::EnableCursor(AGingerbreadPlayerController* PlayerController) {
}

void UCursorAimComponent::DisableCursor(AGingerbreadPlayerController* PlayerController) {
}

FVector UCursorAimComponent::CalculateTracking(const FVector& Target, const FVector& target_velocity, const FVector& launch_position, const float launch_speed) {
    return FVector{};
}


