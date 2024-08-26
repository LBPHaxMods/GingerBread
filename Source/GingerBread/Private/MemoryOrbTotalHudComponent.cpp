#include "MemoryOrbTotalHudComponent.h"

UMemoryOrbTotalHudComponent::UMemoryOrbTotalHudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfOrbsSizeCurve = NULL;
    this->NumberOfOrbsCooldownTime = NULL;
    this->NumberOfOrbsLerpTime = NULL;
    this->NumberOfOrbsAtLastTurnOn = 0;
    this->NumberOfOrbsAtLastIncrement = 0;
    this->CurrentNumberOfOrbs = 0;
    this->TargetNumberOfOrbs = 0;
    this->TimeSinceLastCollection = 0.00f;
    this->TimeWaitedForCooldown = 0.00f;
    this->AnimState = EUIMemoryOrbTotalAnimState::None;
}









