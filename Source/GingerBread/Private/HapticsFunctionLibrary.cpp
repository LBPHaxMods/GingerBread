#include "HapticsFunctionLibrary.h"

UHapticsFunctionLibrary::UHapticsFunctionLibrary() {
}

bool UHapticsFunctionLibrary::PlayDualPlatformHapticsAttached(UObject* WorldContextObject, UAkAudioEvent* BondHapticsEvent, UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachSocketName, FVector Location, FRotator Rotation, UForceFeedbackAttenuation* ForceFeedbackAttenuation) {
    return false;
}

bool UHapticsFunctionLibrary::PlayDualPlatformHapticsAtLocation(UObject* WorldContextObject, UAkAudioEvent* BondHapticsEvent, UForceFeedbackEffect* ForceFeedbackEffect, const FVector& Location, FRotator Rotation, UForceFeedbackAttenuation* ForceFeedbackAttenuation) {
    return false;
}

TArray<UAkComponent*> UHapticsFunctionLibrary::MakeListenersArray_SomeSackboys(const TArray<ASackboy*>& Sackboys, bool IncludeDefaultListeners) {
    return TArray<UAkComponent*>();
}

TArray<UAkComponent*> UHapticsFunctionLibrary::MakeListenersArray_OneSackboy(ASackboy* Sackboy, bool IncludeDefaultListeners) {
    return TArray<UAkComponent*>();
}

TArray<UAkComponent*> UHapticsFunctionLibrary::MakeListenersArray_AllSackboys(UObject* WorldContextObject, bool IncludeDefaultListeners) {
    return TArray<UAkComponent*>();
}

TArray<UAkComponent*> UHapticsFunctionLibrary::GetDefaultListeners() {
    return TArray<UAkComponent*>();
}

bool UHapticsFunctionLibrary::CanPlayHapticsOnLocalClient(UObject* WorldContextObject) {
    return false;
}

bool UHapticsFunctionLibrary::CanPlayHapticsForPlayer(AGingerbreadPlayerController* PlayerController) {
    return false;
}


