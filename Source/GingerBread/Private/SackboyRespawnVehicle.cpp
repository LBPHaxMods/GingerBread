#include "SackboyRespawnVehicle.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASackboyRespawnVehicle::ASackboyRespawnVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->UseCustomLightColor = false;
    this->LivesLeft = 0;
    this->YawFacingOffset = 180.00f;
    this->MinimumOnScreenRatioForRelease = 1.00f;
    this->MinimumTimeBeforeRelease = 1.00f;
    this->VehicleSpeed = NULL;
    this->VerticalSpeedScalar = 2.00f;
    this->HorizontalSpeedScalar = 6.00f;
    this->VerticalInterpolationSpeed = 2.00f;
    this->TargetUpInterpolationSpeed = 1.00f;
    this->RotationSpeed = 2.00f;
    this->MaximumExitTime = 15.00f;
    this->MaximumNumberOfIterations = 5;
    this->UseEightDirectionNavigation = false;
    this->MaximumTraceDistance = 100.00f;
    this->CastTime = 0.05f;
    this->DebugCollisionAvoidance = false;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("RespawnVehicle_AKComponent"));
    this->ClampHapticEvent = NULL;
    this->UnclampHapticEvent = NULL;
    this->FlightLoopHapticEvent = NULL;
    this->EscapeZoneVelocityStrength = 0.10f;
    this->EscapeZoneVelocityFalloff = 1.00f;
    this->AccelerationStrength = 0.30f;
    this->AccelerationFalloff = 1.00f;
    this->MaxInputSpeed = 6.50f;
    this->MaxRotationTilt = 8.00f;
    this->RotationSensitivity = 2.00f;
    this->AccelerationTiltInfluence = 2.00f;
    this->VelocityTiltInfluence = 1.00f;
    this->ClawTiltSensitivity = 1.00f;
    this->ClawTiltMax = 30.00f;
    this->ClawTiltDelay = 0.50f;
    this->VehicleType = ERespawnVehicleType::Respawning;
    this->AUTH_State = ERespawnVehicleState::Uninitialized;
    this->ShouldPathFind = false;
    this->AudioComponent->SetupAttachment(RootComponent);
}

void ASackboyRespawnVehicle::UpdateLightsColor() {
}

void ASackboyRespawnVehicle::UpdateAppearance_Implementation() {
}

void ASackboyRespawnVehicle::TickFollowingAnimation_Implementation(float DeltaTime) {
}

void ASackboyRespawnVehicle::TickExitingAnimation_Implementation(float DeltaTime) {
}

bool ASackboyRespawnVehicle::SweepAtLocation(FVector Location, FVector HalfExtents, bool Debug) const {
    return false;
}

void ASackboyRespawnVehicle::StartExitingAnimation_Implementation() {
}

void ASackboyRespawnVehicle::SetUseCustomLightColor(bool InUseCustomColor) {
}

void ASackboyRespawnVehicle::SetMeshReferences(UStaticMeshComponent* claw, UStaticMeshComponent* SpotLight) {
}

void ASackboyRespawnVehicle::SetCustomLightColor(const FLinearColor& InColor, bool UseColor) {
}

bool ASackboyRespawnVehicle::ReadyToBeDestroyed() const {
    return false;
}

void ASackboyRespawnVehicle::OnSpawnValidityChanged_Implementation(bool Valid) {
}

void ASackboyRespawnVehicle::OnRep_RespawnVehicleState() {
}



void ASackboyRespawnVehicle::NetMulticast_OnVehicleInitialized_Implementation(AActor* FollowTarget, ASackboy* HoldSackboy, ERespawnVehicleType InVehType) {
}

bool ASackboyRespawnVehicle::IsVehicleOnScreen(float ExpansionFactor) const {
    return false;
}

bool ASackboyRespawnVehicle::IsInsideTetherExclusionZone() const {
    return false;
}

USceneComponent* ASackboyRespawnVehicle::GetSackboyOrigin_Implementation() {
    return NULL;
}

bool ASackboyRespawnVehicle::ExitingWithSackboy() const {
    return false;
}

void ASackboyRespawnVehicle::CollectedSackboy_Implementation() {
}

bool ASackboyRespawnVehicle::CanBeFollowed(const ASackboy* followedBy) const {
    return false;
}

void ASackboyRespawnVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASackboyRespawnVehicle, TargetToFollow);
    DOREPLIFETIME(ASackboyRespawnVehicle, VehicleType);
    DOREPLIFETIME(ASackboyRespawnVehicle, AUTH_State);
    DOREPLIFETIME(ASackboyRespawnVehicle, AUTH_Pos);
}


