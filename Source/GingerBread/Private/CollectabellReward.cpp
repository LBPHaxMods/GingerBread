#include "CollectabellReward.h"

ACollectabellReward::ACollectabellReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowLerpValue = 1.00f;
}

int32 ACollectabellReward::GetAmount() const {
    return 0;
}


