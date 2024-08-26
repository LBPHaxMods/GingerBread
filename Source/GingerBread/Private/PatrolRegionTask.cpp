#include "PatrolRegionTask.h"

UPatrolRegionTask::UPatrolRegionTask() {
    this->NodeName = TEXT("Patrol Region");
    this->AcceptanceRadius = 1.00f;
}

void UPatrolRegionTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UPatrolRegionTask::MoveRequestFailed() {
}


