#include "SplineFollowingEnemyChain.h"

USplineFollowingEnemyChain::USplineFollowingEnemyChain() {
    this->LinkKillReward = ECollectabellSize::S;
    this->ChainKillReward = ECollectabellSize::S;
}

void USplineFollowingEnemyChain::RemoveLink(AActor* Link, bool& bIsLastLink) {
}

void USplineFollowingEnemyChain::Initialize() {
}

void USplineFollowingEnemyChain::DestroyLink(AActor* Link, bool bShouldReward) {
}

void USplineFollowingEnemyChain::DestroyChain() {
}

USplineFollowingEnemyChain* USplineFollowingEnemyChain::CreateSplineFollowingEnemyChain(UObject* Owner) {
    return NULL;
}


