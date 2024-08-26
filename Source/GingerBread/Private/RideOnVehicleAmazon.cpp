#include "RideOnVehicleAmazon.h"
#include "AkComponent.h"
#include "Components/TimelineComponent.h"

ARideOnVehicleAmazon::ARideOnVehicleAmazon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BankTime = 0.05f;
    this->BankCurveTimelineCurve = NULL;
    this->BankCurveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("BankCurveTimeline"));
    this->BladePivotSpeed = 6.00f;
    this->Ak_Boat = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Boat"));
    this->AkHaptics_Boat = CreateDefaultSubobject<UAkComponent>(TEXT("AkHaptics_Boat"));
    this->RiverAudioEvent = NULL;
    this->HapticsRTPCMove = TEXT("vib_rideon_boat_vehicle_speed");
    this->StartMoveHaptics = NULL;
    this->StopMoveHaptics = NULL;
    this->Ak_Boat->SetupAttachment(RootComponent);
    this->AkHaptics_Boat->SetupAttachment(RootComponent);
}

void ARideOnVehicleAmazon::StopHeavyLanding() {
}

void ARideOnVehicleAmazon::PostRiverEvent() {
}

void ARideOnVehicleAmazon::DoBankCurves(float RotationTime, float RotationDegrees) {
}

void ARideOnVehicleAmazon::BankCurveTimelineCallback(float Value) {
}


