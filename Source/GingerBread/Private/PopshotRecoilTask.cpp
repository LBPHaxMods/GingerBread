#include "PopshotRecoilTask.h"

UPopshotRecoilTask::UPopshotRecoilTask() {
    this->NodeName = TEXT("Popshot Recoil Task");
}

void UPopshotRecoilTask::OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UPopshotRecoilTask::MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController) {
}

void UPopshotRecoilTask::MoveRequestFailed() {
}


