#include "AIHitReactionWaitGroundedTask.h"

UAIHitReactionWaitGroundedTask::UAIHitReactionWaitGroundedTask() {
    this->NodeName = TEXT("HitReaction Wait Grounded Task");
}

void UAIHitReactionWaitGroundedTask::OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


