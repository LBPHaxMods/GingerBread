#include "StompyMoveToTask.h"

UStompyMoveToTask::UStompyMoveToTask() {
    this->NodeName = TEXT("Stompy Move To Task");
    this->AggressiveMovement = false;
}

void UStompyMoveToTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UStompyMoveToTask::MoveRequestFailed() {
}


