#include "CameraEffectDataAsset.h"

UCameraEffectDataAsset::UCameraEffectDataAsset() {
    this->Interrupts = false;
    this->IsRhythmic = false;
    this->DilationDuration = 0.00f;
    this->DilationCurve = NULL;
    this->DilationStartedTrigger = 0.00f;
    this->FadeOutTrigger = 0.50f;
    this->DilationFinishedTrigger = 1.00f;
    this->PostDuration = 0.00f;
    this->PostCurve = NULL;
    this->VignetteMaterial = NULL;
    this->ChomaticAberationTarget = 0.00f;
    this->LensFlareIntensity = 0.00f;
    this->BloomIntensity = 0.00f;
    this->CameraDuration = 0.00f;
    this->FOVOffset = 0.00f;
    this->CameraCurve = NULL;
}


