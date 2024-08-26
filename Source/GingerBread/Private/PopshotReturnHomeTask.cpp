#include "PopshotReturnHomeTask.h"

UPopshotReturnHomeTask::UPopshotReturnHomeTask() {
    this->NodeName = TEXT("Popshot Return Home Task");
}

void UPopshotReturnHomeTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UPopshotReturnHomeTask::MoveRequestFailed() {
}


