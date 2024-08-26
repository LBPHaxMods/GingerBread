#include "HoudiniAssetComponent.h"

UHoudiniAssetComponent::UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->Mobility = EComponentMobility::Static;
    this->bUseAsOccluder = true;
    this->CastShadow = true;
    this->bGeneratedDoubleSidedGeometry = false;
    this->GeneratedPhysMaterial = NULL;
    this->GeneratedCollisionTraceFlag = CTF_UseDefault;
    this->GeneratedLightMapResolution = 32;
    this->GeneratedLpvBiasMultiplier = 1.00f;
    this->GeneratedDistanceFieldResolutionScale = 0.00f;
    this->GeneratedLightMapCoordinateIndex = 1;
    this->bGeneratedUseMaximumStreamingTexelRatio = false;
    this->GeneratedStreamingDistanceMultiplier = 1.00f;
    this->GeneratedFoliageDefaultSettings = NULL;
    this->HoudiniAsset = NULL;
}

void UHoudiniAssetComponent::SetHDA(UHoudiniAsset* NewHoudiniAsset) {
}

int32 UHoudiniAssetComponent::GetInputIndex(const FString& InputName) {
    return 0;
}

int32 UHoudiniAssetComponent::GetAssetId() const {
    return 0;
}

void UHoudiniAssetComponent::CookAsset() {
}

void UHoudiniAssetComponent::ClearInputByIndex(int32 InputIndex) {
}

void UHoudiniAssetComponent::ClearInput(const FString& InputName) {
}

void UHoudiniAssetComponent::AddInputObjectByIndex(int32 InputIndex, UObject* ObjectToAdd) {
}

void UHoudiniAssetComponent::AddInputObject(const FString& InputName, UObject* ObjectToAdd) {
}


