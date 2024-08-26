#include "GingerbreadCameraModifier.h"

UGingerbreadCameraModifier::UGingerbreadCameraModifier() {
    this->Priority = 127;
    this->bExclusive = false;
    this->ModifierType = EGingerModifierType::Default;
    this->Sumo_CameraOwner = NULL;
    this->AlphaInTime = 0.00f;
    this->AlphaOutTime = 0.00f;
    this->Alpha = 0.00f;
}




bool UGingerbreadCameraModifier::IsDisabled() const {
    return false;
}

AActor* UGingerbreadCameraModifier::GetViewTarget() const {
    return NULL;
}

void UGingerbreadCameraModifier::EnableModifier() {
}

void UGingerbreadCameraModifier::DisableModifier(bool bImmediate) {
}


