#include "MinibossMeanieSlamAttackTask.h"

UMinibossMeanieSlamAttackTask::UMinibossMeanieSlamAttackTask() {
    this->NodeName = TEXT("Slam Attack Task");
}

void UMinibossMeanieSlamAttackTask::OnMeanieTookNonPhasingHit() {
}

void UMinibossMeanieSlamAttackTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UMinibossMeanieSlamAttackTask::MoveRequestFailed() {
}


