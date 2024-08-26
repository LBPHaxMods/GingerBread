#include "GruntyChaseTask.h"

UGruntyChaseTask::UGruntyChaseTask() {
    this->NodeName = TEXT("Grunty Chase Task");
    this->ChaseType = EGruntyChaseType::Invalid;
}

void UGruntyChaseTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UGruntyChaseTask::MoveRequestFailed() {
}


