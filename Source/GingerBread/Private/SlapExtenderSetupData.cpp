#include "SlapExtenderSetupData.h"

FSlapExtenderSetupData::FSlapExtenderSetupData() {
    this->Spline = NULL;
    this->Slim = false;
    this->AutoPlay = false;
    this->Loop = false;
    this->Invert = false;
    this->ExtendDuration = 0.00f;
    this->RetractDuration = 0.00f;
    this->PauseDelay = 0.00f;
    this->StartDelay = 0.00f;
    this->ExtendingTimelineCurve = NULL;
    this->RetractingTimelineCurve = NULL;
    this->ReverseAudioTimelineCurve = NULL;
}

