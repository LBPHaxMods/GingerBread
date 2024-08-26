#include "AIPatrolBase.h"

AAIPatrolBase::AAIPatrolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AAIPatrolBase::UnregisterAI_Implementation(AAIController* Controller) {
}

bool AAIPatrolBase::ReplanNewTarget_Implementation(AAIController* Controller, FVector& OutLocation) {
    return false;
}

void AAIPatrolBase::RegisterAI_Implementation(AAIController* Controller) {
}

UBehaviorTree* AAIPatrolBase::GetPatrolBehaviour_Implementation() {
    return NULL;
}

FVector AAIPatrolBase::GetCurrentPatrolTarget_Implementation(AAIController* Controller) {
    return FVector{};
}

void AAIPatrolBase::AdjustWalkSpeed_Implementation(AGingerbreadAICharacter* Character, FVector TargetLocation, float MoveSpeed) {
}


