#include "ObjectTickManager.h"

AObjectTickManager::AObjectTickManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackerUpdateFrequency = 0.25f;
}


