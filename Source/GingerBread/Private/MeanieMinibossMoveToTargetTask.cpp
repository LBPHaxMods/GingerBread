#include "MeanieMinibossMoveToTargetTask.h"

UMeanieMinibossMoveToTargetTask::UMeanieMinibossMoveToTargetTask() {
    this->NodeName = TEXT("Meanie Miniboss Move To Target Task");
    this->MovementType = EMeanieMovementType::Invalid;
}

void UMeanieMinibossMoveToTargetTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UMeanieMinibossMoveToTargetTask::MoveRequestFailed() {
}


