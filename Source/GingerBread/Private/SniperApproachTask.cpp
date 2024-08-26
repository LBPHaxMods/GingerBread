#include "SniperApproachTask.h"

USniperApproachTask::USniperApproachTask() {
    this->NodeName = TEXT("Sniper Approach Task");
}

void USniperApproachTask::MoveRequestCompleted(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void USniperApproachTask::MoveRequestAborted() {
}


