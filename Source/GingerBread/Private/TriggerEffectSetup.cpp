#include "TriggerEffectSetup.h"

FTriggerEffectSetup::FTriggerEffectSetup() {
    this->Type = ETriggerEffectType::Off;
    this->Position = 0;
    this->StartPosition = 0;
    this->EndPosition = 0;
    this->Strength = 0;
    this->MinInputStrength = 0.00f;
    this->MaxInputStrength = 0.00f;
    this->MinOutputStrength = 0;
    this->MaxOutputStrength = 0;
    this->Frequency = 0;
    this->InputSmoothing = 0.00f;
}

