#include "RhythmicBouncePad.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RollDazeOverride.h"
#include "TriggerActorComponent.h"

ARhythmicBouncePad::ARhythmicBouncePad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->Root = (USceneComponent*)RootComponent;
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->RollDazeOverride = CreateDefaultSubobject<URollDazeOverride>(TEXT("RollDazeOverride"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Ak = CreateDefaultSubobject<UAkComponent>(TEXT("Ak"));
    this->OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
    this->InteractVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractVolume"));
    this->Trigger = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger"));
    this->BouncePadGridX = 1;
    this->BouncePadGridY = 1;
    this->Manual = false;
    this->Sunken = true;
    this->ActiveOnStart = true;
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
    this->RestrictToPath = false;
    this->BouncePathDuration = 0.00f;
    this->Active = true;
    this->Local_Active = true;
    this->CurrentWorldLocation = EWorldLocation::Amazon;
    this->CurrentMaterial = NULL;
    this->CurrentLightMaterial = NULL;
    this->Box->SetupAttachment(RootComponent);
    this->RollDazeOverride->SetupAttachment(Box);
    this->GameplayTag->SetupAttachment(Box);
    this->Ak->SetupAttachment(Box);
    this->OverlapVolume->SetupAttachment(Box);
    this->InteractVolume->SetupAttachment(OverlapVolume);
}

bool ARhythmicBouncePad::UpdateAnimatingLight(float theAnimationTime, int32 thePadIndex) {
    return false;
}

bool ARhythmicBouncePad::ShouldRestrictToPath() {
    return false;
}

void ARhythmicBouncePad::RemoveBody(AActor* OtherActor) {
}

void ARhythmicBouncePad::OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition) {
}

void ARhythmicBouncePad::OnRhythmicBeatPostDelay() {
}

void ARhythmicBouncePad::OnRep_ActiveChanged() {
}

void ARhythmicBouncePad::OnLaunched_Implementation(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition, int32 padIndex) {
}

void ARhythmicBouncePad::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ARhythmicBouncePad::OnComponentEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ARhythmicBouncePad::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARhythmicBouncePad::OnComponentBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool ARhythmicBouncePad::IsEnabled() {
    return false;
}

int32 ARhythmicBouncePad::GetPathPointCount() {
    return 0;
}

FVector ARhythmicBouncePad::GetPathPointAt(int32 Index) {
    return FVector{};
}

float ARhythmicBouncePad::GetPathDuration() {
    return 0.0f;
}

bool ARhythmicBouncePad::GetManual() {
    return false;
}

float ARhythmicBouncePad::GetDuration() {
    return 0.0f;
}

bool ARhythmicBouncePad::GetDisableSackboyInAirActions() {
    return false;
}

bool ARhythmicBouncePad::GetDisableSackboyAirSteer() {
    return false;
}

float ARhythmicBouncePad::GetDelay() {
    return 0.0f;
}

bool ARhythmicBouncePad::GetCancelVelocityAlongSurface() {
    return false;
}

void ARhythmicBouncePad::GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const {
}

FVector ARhythmicBouncePad::GetBouncePadUpVector() {
    return FVector{};
}

FVector ARhythmicBouncePad::GetBouncePadForwardVector() {
    return FVector{};
}

void ARhythmicBouncePad::DisableAllMeshTicks() {
}

int32 ARhythmicBouncePad::CalculateBouncePadIndex(const FVector hitPos) const {
    return 0;
}

void ARhythmicBouncePad::AddBody(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}

void ARhythmicBouncePad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicBouncePad, Manual);
    DOREPLIFETIME(ARhythmicBouncePad, Sunken);
    DOREPLIFETIME(ARhythmicBouncePad, Active);
}


