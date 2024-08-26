#include "MusicMaterialInstance.h"

FMusicMaterialInstance::FMusicMaterialInstance() {
    this->MusicMaterialInstance = NULL;
    this->BeatPulseTimer = 0.00f;
    this->BarPulseTimer = 0.00f;
    this->MarkerPulseTimer = 0.00f;
    this->BeatPulseCurveIndex = 0;
    this->BarPulseCurveIndex = 0;
    this->MarkerPulseCurveIndex = 0;
    this->TickUVPosX = 0.00f;
    this->TickUVPosY = 0.00f;
    this->ParameterIndex_MusicValues = 0;
    this->NumReferences = 0;
    this->LiveMaterialUID = 0;
}

