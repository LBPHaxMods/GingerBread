#include "RemixDrone.h"

ARemixDrone::ARemixDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Stopwatch = NULL;
    this->MaxSpeed = 30.00f;
    this->MinSpeed = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->InnerRadius = 35.00f;
    this->OuterRadius = 80.00f;
    this->TrailSeparation = 10.00f;
    this->PickupsSpawned = 0;
    this->MaxPickups = 0;
}





