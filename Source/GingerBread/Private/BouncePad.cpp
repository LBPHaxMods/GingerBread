#include "BouncePad.h"
#include "Net/UnrealNetwork.h"

ABouncePad::ABouncePad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;

    this->BouncePadGridX = 1;
    this->BouncePadGridY = 1;
    this->Manual = false;
    this->Sunken = true;
    this->ActiveOnStart = true;
    this->SingleSampleShadowFromStationaryLights = true;
    this->SelectedMesh = EBouncePadMeshType::UseWorldLocation;
    this->BounceHeightMultiplier = 1.00f;
    this->SkeletalMeshActiveTimer = 3.00f;
    this->GrappleHookSwingingBounceHeightMultiplier = 4.00f;
    this->StandardStaticMesh = NULL;
    this->SunkenStaticMesh = NULL;
    this->BouncePadSkeletalMesh = NULL;
    this->OffIntensity = 0.03f;
    this->OnIntensity = 2.00f;
    this->TriggeredIntensity = 16.00f;
    this->BouncePadSize = 20.00f;
    this->BouncePadHeight = 3.40f;
    this->BouncePadSunkenOffset = -0.75f;
    this->OverlapErrorThreshold = 2.00f;
    this->VibrationEffect = NULL;
    this->VibrationName = TEXT("BouncePadJumpedOn");
    this->LaunchedAnimation = NULL;
    this->LaunchedAudioEvent = NULL;
    this->LaunchedHapticsEvent = NULL;
    this->LaunchedGamepadAudioEvent = NULL;
    this->LaunchedAudioLaunchRTPCName = TEXT("bouncepad_launchspeed");
    this->TriggerFlashDuration = 0.12f;
    this->BetterImpulseCurve = false;
    this->LaunchSpeed = 112.00f;
    this->SpeedOnLaunch = 256.00f;
    this->SpeedOnRelease = 92.00f;
    this->InitialBounceSpeed = 224.00f;
    this->FinalBounceSpeed = 95.00f;
    this->BouncePower = 0.50f;
    this->Duration = 0.05f;
    this->Delay = 0.03f;
    this->BounceSpeedMultiplier = 1.00f;
    this->DisableSackboyAirSteer = false;
    this->DisableSackboyInAirActions = false;
    this->CancelVelocityAlongSurface = false;
    this->Alignment = EBouncePadAlignment::BouncingVertically;
    this->Active = false;
    this->PadEnabled = true;
    this->CurrentWorldLocation = EWorldLocation::Amazon;
    this->CurrentMaterial = NULL;
    this->CurrentLightMaterial = NULL;
}

bool ABouncePad::UpdateAnimatingLight(float theAnimationTime, int32 thePadIndex) {
    return false;
}

void ABouncePad::SetEnabled(bool Enabled) {
}

void ABouncePad::RemoveBody(AActor* OtherActor) {
}

void ABouncePad::OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition) {
}

void ABouncePad::OnRep_PadEnabled() {
}

void ABouncePad::OnLaunched_Implementation(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition, int32 padIndex) {
}

void ABouncePad::OnEndInteractionOverlap(UInteractionComponent* thisComponent, AActor* OtherActor, UInteractionComponent* OtherComponent) {
}

void ABouncePad::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABouncePad::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABouncePad::OnBeginInteractionOverlap(UInteractionComponent* thisComponent, AActor* OtherActor, UInteractionComponent* OtherComponent) {
}

bool ABouncePad::IsEnabled() {
    return false;
}

bool ABouncePad::GetManual() {
    return false;
}

float ABouncePad::GetDuration() {
    return 0.0f;
}

bool ABouncePad::GetDisableSackboyInAirActions() {
    return false;
}

bool ABouncePad::GetDisableSackboyAirSteer() {
    return false;
}

float ABouncePad::GetDelay() {
    return 0.0f;
}

bool ABouncePad::GetCancelVelocityAlongSurface() {
    return false;
}

void ABouncePad::GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const {
}

FVector ABouncePad::GetBouncePadUpVector() {
    return FVector{};
}

FVector ABouncePad::GetBouncePadForwardVector() {
    return FVector{};
}

int32 ABouncePad::CalculateBouncePadIndex(const FVector hitPos) const {
    return 0;
}

void ABouncePad::AddBody(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}

void ABouncePad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABouncePad, Manual);
    DOREPLIFETIME(ABouncePad, Sunken);
    DOREPLIFETIME(ABouncePad, PadEnabled);
}


