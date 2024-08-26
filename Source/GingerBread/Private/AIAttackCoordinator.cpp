#include "AIAttackCoordinator.h"

UAIAttackCoordinator::UAIAttackCoordinator() {
    this->BehaviorClass = NULL;
}

void UAIAttackCoordinator::StartBehavior(TArray<AActor*> _targets, TArray<AActor*> _coordinatedActors) {
}

void UAIAttackCoordinator::PrepareAttack_Implementation(float DeltaSeconds, const TArray<AActor*>& _targets) {
}


bool UAIAttackCoordinator::IsActorValid(AActor* _actor) {
    return false;
}

UWorld* UAIAttackCoordinator::GetWorld() const {
    return NULL;
}

int32 UAIAttackCoordinator::GetNumAttacksRunning() const {
    return 0;
}


