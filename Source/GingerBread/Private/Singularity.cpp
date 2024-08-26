#include "Singularity.h"

ASingularity::ASingularity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SingularityOn = true;
    this->Mode = ESingularityMode::LOOP;
    this->Cooldown = 5.00f;
    this->Radius = 10.00f;
    this->MassLimit = 5.00f;
    this->AttractingTime = 5.00f;
    this->MaxAttractVelocity = 200.00f;
    this->RotationVelocity = 100.00f;
    this->VelocityCurve = NULL;
    this->GravityParent = NULL;
    this->DrawDebugRadius = true;
}


