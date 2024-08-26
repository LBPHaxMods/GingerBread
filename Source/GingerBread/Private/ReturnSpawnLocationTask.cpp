#include "ReturnSpawnLocationTask.h"

UReturnSpawnLocationTask::UReturnSpawnLocationTask() {
    this->NodeName = TEXT("Return Spawn Location Task");
}

void UReturnSpawnLocationTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UReturnSpawnLocationTask::MoveRequestFailed() {
}


