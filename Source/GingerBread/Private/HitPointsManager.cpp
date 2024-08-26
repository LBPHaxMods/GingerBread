#include "HitPointsManager.h"

AHitPointsManager::AHitPointsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->InteractionFontSize = 3.00f;
    this->HitPointsFontSize = 1.50f;
    this->HitPointsResponseRowFontSize = 1.20f;
    this->TextRiseDistance = 100.00f;
    this->AnimDuration = 2.00f;
    this->OverlapFontSize = 2.00f;
    this->OverlapFontSpacing = 20.00f;
    this->Font = NULL;
}


