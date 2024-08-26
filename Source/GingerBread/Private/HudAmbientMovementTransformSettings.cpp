#include "HudAmbientMovementTransformSettings.h"

FHudAmbientMovementTransformSettings::FHudAmbientMovementTransformSettings() {
    this->TransformType = EHudAmbientTransformType::Translational;
    this->AxisToAffect = EHudAmbientAxis::X;
    this->MovementLimit = 0.00f;
    this->TopCameraAxisDelta = 0.00f;
}

