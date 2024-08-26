#include "RammerTeleportComponent.h"

URammerTeleportComponent::URammerTeleportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldBrake = false;
    this->MaxTeleportDistance = 40.00f;
    this->MinimumTravelDistance = 25.00f;
    this->HalfArcWidth = 100.00f;
    this->TeleportDuration = 0.50f;
    this->TeleportWarmupFraction = 0.65f;
    this->PostTeleportPauseDuration = 0.75f;
    this->AngleOffsetsToTry.AddDefaulted(5);
    this->NumberOfTimesTryRandom = 3;
    this->MinTeleportSeparationDist = 8.00f;
    this->ChargeAngleClamp = 20.00f;
    this->ChargeCachedForwardClampDuration = 0.35f;
    this->EntranceTeleportPortalDistance = 0.00f;
    this->PortalSeperationFromTargetActor = 0.00f;
    this->TeleportSphereClass = NULL;
}

void URammerTeleportComponent::TryTeleportRammer_Implementation(const FVector& teleportLocation, const FRotator& facing) {
}

void URammerTeleportComponent::SetVisible_Implementation(bool InVisible) {
}

void URammerTeleportComponent::SetupMaterialsForTeleport_Implementation(const FVector& PortalLocation, const FVector& PortalFacingDirection) {
}

void URammerTeleportComponent::SetTeleportBackpackColour_Implementation(ESpaceRammerTeleportColourState TeleportState) {
}

void URammerTeleportComponent::SetPhysical_Implementation(bool InPhysical) {
}

void URammerTeleportComponent::CleanUpMaterialsPostTeleport_Implementation() {
}


