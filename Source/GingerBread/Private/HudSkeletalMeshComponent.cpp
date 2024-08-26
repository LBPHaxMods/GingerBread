#include "HudSkeletalMeshComponent.h"

UHudSkeletalMeshComponent::UHudSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bVisibleInReflectionCaptures = false;
    this->bReceivesDecals = false;
    this->CastShadow = false;
    this->CanCharacterStepUpOn = ECB_No;
}

void UHudSkeletalMeshComponent::SetIgnoreTimeDilation(bool NewIgnoreDilation) {
}

bool UHudSkeletalMeshComponent::GetIgnoreTimeDilation() const {
    return false;
}

FHudMaterialSettings UHudSkeletalMeshComponent::GetHudMaterialSetting(int32 MaterialIndex) {
    return FHudMaterialSettings{};
}


