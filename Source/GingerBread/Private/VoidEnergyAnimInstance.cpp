#include "VoidEnergyAnimInstance.h"

UVoidEnergyAnimInstance::UVoidEnergyAnimInstance() {
    this->MusicMode = false;
    this->TimeMultiplier = 2.00f;
    this->MasterOpen = 1.00f;
    this->MasterOpenScale = 0.20f;
    this->Collected = false;
    this->MovementVectorCurve = NULL;
    this->OverallMultiplier = 1.00f;
    this->MasterOpenMultiplier = 1.00f;
    this->SecondaryOpenMultiplier = 1.00f;
}


