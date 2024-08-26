#include "SubLevelRewinder.h"

USubLevelRewinder::USubLevelRewinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldLoadBlock = false;
}

void USubLevelRewinder::Rewind(FLatentActionInfo LatentInfo) {
}

void USubLevelRewinder::RegisterCleaningVolume(UBoxComponent* Volume) {
}


