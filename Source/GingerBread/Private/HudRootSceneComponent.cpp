#include "HudRootSceneComponent.h"

UHudRootSceneComponent::UHudRootSceneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->EditorBoundsScale = 1.00f;
}


