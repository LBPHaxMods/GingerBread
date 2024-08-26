#include "HudStaticMeshComponent.h"

UHudStaticMeshComponent::UHudStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bVisibleInReflectionCaptures = false;
    this->bReceivesDecals = false;
    this->CastShadow = false;
    this->CanCharacterStepUpOn = ECB_No;
}

FHudMaterialSettings UHudStaticMeshComponent::GetHudMaterialSetting(int32 MaterialIndex) {
    return FHudMaterialSettings{};
}


