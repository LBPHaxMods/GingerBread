#include "SniperRunAwayTask.h"

USniperRunAwayTask::USniperRunAwayTask() {
    this->NodeName = TEXT("Sniper Run Away Task");
}

void USniperRunAwayTask::MoveRequestCompleted(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void USniperRunAwayTask::MoveRequestAborted() {
}


