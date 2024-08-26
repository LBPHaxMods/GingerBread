#include "ESportsBouncePad.h"
#include "Net/UnrealNetwork.h"

AESportsBouncePad::AESportsBouncePad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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

bool AESportsBouncePad::UpdateAnimatingLight(float theAnimationTime, int32 thePadIndex) {
    return false;
}

void AESportsBouncePad::SetEnabled(bool Enabled) {
}

void AESportsBouncePad::RemoveBody(AActor* OtherActor) {
}

void AESportsBouncePad::OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition) {
}

void AESportsBouncePad::OnRep_PadEnabled() {
}

void AESportsBouncePad::OnLaunched_Implementation(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition, int32 padIndex) {
}

void AESportsBouncePad::OnEndInteractionOverlap(UInteractionComponent* thisComponent, AActor* OtherActor, UInteractionComponent* OtherComponent) {
}

void AESportsBouncePad::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AESportsBouncePad::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AESportsBouncePad::OnBeginInteractionOverlap(UInteractionComponent* thisComponent, AActor* OtherActor, UInteractionComponent* OtherComponent) {
}

bool AESportsBouncePad::IsEnabled() {
    return false;
}

bool AESportsBouncePad::GetManual() {
    return false;
}

float AESportsBouncePad::GetDuration() {
    return 0.0f;
}

bool AESportsBouncePad::GetDisableSackboyInAirActions() {
    return false;
}

bool AESportsBouncePad::GetDisableSackboyAirSteer() {
    return false;
}

float AESportsBouncePad::GetDelay() {
    return 0.0f;
}

bool AESportsBouncePad::GetCancelVelocityAlongSurface() {
    return false;
}

void AESportsBouncePad::GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const {
}

FVector AESportsBouncePad::GetBouncePadUpVector() {
    return FVector{};
}

FVector AESportsBouncePad::GetBouncePadForwardVector() {
    return FVector{};
}

int32 AESportsBouncePad::CalculateBouncePadIndex(const FVector hitPos) const {
    return 0;
}

void AESportsBouncePad::AddBody(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}

void AESportsBouncePad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AESportsBouncePad, Manual);
    DOREPLIFETIME(AESportsBouncePad, Sunken);
    DOREPLIFETIME(AESportsBouncePad, PadEnabled);
}


