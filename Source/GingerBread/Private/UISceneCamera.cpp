#include "UISceneCamera.h"

AUISceneCamera::AUISceneCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DEBUG_CameraProjectionDistance = 100.00f;
    this->CopiesMainCameraPostProcessing = false;
    this->CopiesMainCameraFOV = true;
    this->EDITOR_CameraProjectionPlane = NULL;
}

void AUISceneCamera::SetActive(bool NewIsActive) {
}

bool AUISceneCamera::IsActive() const {
    return false;
}


