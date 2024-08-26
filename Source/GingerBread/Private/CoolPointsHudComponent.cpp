#include "CoolPointsHudComponent.h"

UCoolPointsHudComponent::UCoolPointsHudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UCoolPointsHudComponent::Show(bool visible) {
}

void UCoolPointsHudComponent::OnScoreManagerReady(AActor* ManagerActor) {
}

void UCoolPointsHudComponent::OnPlayerCollectedScore(ASackboy* Sackboy, EScoreSource Source, FVector_NetQuantize100 EventPosition, int32 Points) {
}

void UCoolPointsHudComponent::OnMultiplierIncreased(int32 newTier, float NewMultiplier) {
}


