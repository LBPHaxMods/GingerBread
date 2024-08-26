#include "KingFroogleHopComponent.h"

UKingFroogleHopComponent::UKingFroogleHopComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AimDistanceFromHopTarget = 0.00f;
    this->MaxHopDist = 40.00f;
    this->AttackingHopArc = 0.50f;
    this->ReturnHomeHopArc = 0.30f;
    this->HopTurnSpeed = 1000.00f;
}


