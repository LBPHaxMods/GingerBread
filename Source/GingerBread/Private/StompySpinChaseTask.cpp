#include "StompySpinChaseTask.h"

UStompySpinChaseTask::UStompySpinChaseTask() {
    this->NodeName = TEXT("AIChar Spin Chase Task");
}

void UStompySpinChaseTask::SpinDamageApplied(const FHitPointModifyResult& HitResult) {
}

void UStompySpinChaseTask::OnSpinColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UStompySpinChaseTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UStompySpinChaseTask::MoveRequestFailed() {
}


