#include "MusicMaterialEvent.h"

FMusicMaterialEvent::FMusicMaterialEvent() {
    this->TimeInBeats = false;
    this->OnBeat = false;
    this->OnBar = false;
    this->OnUserCue = false;
    this->OnMarker = false;
    this->ParameterOutput = false;
    this->VectorParameter = false;
    this->SetSingleComponent = false;
    this->ComponentIndex = 0;
    this->UserCurve = false;
    this->FloatCurve = NULL;
    this->ParamMode = EMusicMaterialEventParamMode::Step;
    this->Duration = 0.00f;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
}

