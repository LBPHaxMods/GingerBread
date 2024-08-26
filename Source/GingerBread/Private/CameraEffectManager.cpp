#include "CameraEffectManager.h"

ACameraEffectManager::ACameraEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TEnumAsByte<ECameraEffectResult::Type> ACameraEffectManager::PlayEffect(UCameraEffectDataAsset* Data) {
    return ECameraEffectResult::Success;
}

bool ACameraEffectManager::IsPlaying() const {
    return false;
}

ACameraEffectManager* ACameraEffectManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

int32 ACameraEffectManager::GetCurrentSequenceID() const {
    return 0;
}

float ACameraEffectManager::GetCurrentPlayTime() const {
    return 0.0f;
}

UCameraEffectDataAsset* ACameraEffectManager::GetCurrentEffect() const {
    return NULL;
}


