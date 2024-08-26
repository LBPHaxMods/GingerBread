#include "MeanieMinibossMoveNearToTargetTask.h"

UMeanieMinibossMoveNearToTargetTask::UMeanieMinibossMoveNearToTargetTask() {
    this->NodeName = TEXT("Meanie Miniboss Move Near To Target Task");
}

void UMeanieMinibossMoveNearToTargetTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UMeanieMinibossMoveNearToTargetTask::MoveRequestFailed() {
}


