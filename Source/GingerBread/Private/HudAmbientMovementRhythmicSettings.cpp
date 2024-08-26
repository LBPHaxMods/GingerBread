#include "HudAmbientMovementRhythmicSettings.h"

FHudAmbientMovementRhythmicSettings::FHudAmbientMovementRhythmicSettings() {
    this->TransformType = EHudAmbientTransformType::Translational;
    this->AxisToAffect = EHudAmbientAxis::X;
    this->MovementAmount = 0.00f;
    this->BeatActivated = 0.00f;
    this->BeatBuildupLength = 0.00f;
    this->BeatCooldownLength = 0.00f;
}

