#include "PatrolPointToPointTask.h"

UPatrolPointToPointTask::UPatrolPointToPointTask() {
    this->NodeName = TEXT("Patrol Point To Point");
    this->AcceptanceRadius = 1.00f;
}

void UPatrolPointToPointTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UPatrolPointToPointTask::MoveRequestFailed() {
}


