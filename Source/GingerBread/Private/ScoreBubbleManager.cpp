#include "ScoreBubbleManager.h"

AScoreBubbleManager::AScoreBubbleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BubbleRadius = 2.00f;
    this->WobblinessAmplitude = 2.00f;
    this->WobblinessFrequency = 20.00f;
    this->WobblinessReductionSpeed = 0.80f;
}


