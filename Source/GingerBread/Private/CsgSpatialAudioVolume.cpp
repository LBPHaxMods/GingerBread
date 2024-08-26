#include "CsgSpatialAudioVolume.h"
#include "Components/BoxComponent.h"
#include "AudioListenerTracker.h"

ACsgSpatialAudioVolume::ACsgSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnEnterEvent = NULL;
    this->OnExitEvent = NULL;
    this->TriggerBoxExtensionUnit = 500.00f;
    this->TriggerBoxExtensionPercentage = 150.00f;
    this->bUsePercentage = false;
    this->defaultLineThickness = 1.00f;
    this->selectedLineThickness = 10.00f;
    this->bDebugForwardArrow = false;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->AudioListenerTracker = CreateDefaultSubobject<UAudioListenerTracker>(TEXT("AudioListenerTracker"));
    this->BoxComponent->SetupAttachment(RootComponent);
    this->AudioListenerTracker->SetupAttachment(RootComponent);
}

void ACsgSpatialAudioVolume::OnListenerTrackerExit() {
}

void ACsgSpatialAudioVolume::OnListenerTrackerEnter() {
}


