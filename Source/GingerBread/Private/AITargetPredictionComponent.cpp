#include "AITargetPredictionComponent.h"

UAITargetPredictionComponent::UAITargetPredictionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PredictionCurve = NULL;
    this->MaxPredictionLocationSpeed = 100.00f;
    this->MinDistFromAI = 0.00f;
    this->MaxDistFromAI = 100.00f;
    this->ProjectileSpeed = 0.00f;
    this->DebugPrediction = false;
    this->MaxPredictionAngleDeviation = 90.00f;
}


