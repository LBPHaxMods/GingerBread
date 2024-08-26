#include "AudioSplineComponent.h"

UAudioSplineComponent::UAudioSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bEnable = true;
    this->m_bIsProximityActivated = true;
    this->m_bUseMultipleEmitters = false;
    this->m_pPlayAkEvent = NULL;
    this->m_pStopAkEvent = NULL;
    this->m_fMaxDistanceBetweenEmitters = 100.00f;
    this->m_fEmitterRegionDeadzonePercentage = 0.25f;
    this->m_fActivationDistance = 500.00f;
    this->m_bDrawDebugSpheres = false;
    this->m_bDebugAlwaysOn = false;
}

void UAudioSplineComponent::SetAllSwitch(const FString& in_group, const FString& in_state) {
}

void UAudioSplineComponent::SetAllRTPC(const FString& in_name, float in_value) {
}

void UAudioSplineComponent::PostOneShot() {
}


