#include "AIJumpTurnLibrary.h"

UAIJumpTurnLibrary::UAIJumpTurnLibrary() {
}

void UAIJumpTurnLibrary::SetupTurnUsingRotator(AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FRotator TargetRotation) {
}

FRotator UAIJumpTurnLibrary::SetupTurnUsingLocation(APawn* Pawn, AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FVector TargetLocation) {
    return FRotator{};
}

bool UAIJumpTurnLibrary::ProjectJumpLocationToNavMesh(UObject* WorldContext, APawn* Pawn, AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FVector jumpAimAtPoint, FVector jumpTargetLocation, FVector& ProjectedLocation) {
    return false;
}

void UAIJumpTurnLibrary::IsFacingTarget(APawn* Pawn, FRotator TargetRotation, float Tolerance, bool& NewIsFacingTarget, float& yawBetween) {
}

void UAIJumpTurnLibrary::CleanupTurn(UGBCharacterMovementComponent* MovementComponent) {
}

void UAIJumpTurnLibrary::CalculateJumpLocationWithNavigation(UObject* WorldContext, AGingerbreadAICharacter* AIChar, AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FVector jumpAimAtPoint, float jumpDistance, FVector& jumpLocation, float wallNudgeAmount) {
}

FVector UAIJumpTurnLibrary::CalculateJumpLocation(APawn* Pawn, FVector jumpAimAtPoint, float jumpDistance) {
    return FVector{};
}


