#include "HudAmbientMovementSettings.h"

FHudAmbientMovementSettings::FHudAmbientMovementSettings() {
    this->AmbientMovementType = EHudAmbientMovementType::None;
    this->AmbientTopMovementSpeed = 0.00f;
    this->AmbientTopRotationSpeed = 0.00f;
    this->AmbientTranslationTeleportThreshold = 0.00f;
    this->AmbientRotationTeleportThreshold = 0.00f;
    this->AmbientSpringSpeed = 0.00f;
    this->AmbientSpringStiffness = 0.00f;
    this->AmbientDampingFactor = 0.00f;
}

