#include "MonorailCar_WithBouncepad.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RollDazeOverride.h"

AMonorailCar_WithBouncepad::AMonorailCar_WithBouncepad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StandardStaticMesh = NULL;
    this->SunkenStaticMesh = NULL;
    this->BouncePadSkeletalMesh = NULL;
    this->VibrationEffect = NULL;
    this->LaunchedHapticEvent = NULL;
    this->VibrationName = TEXT("BouncePadJumpedOn");
    this->LaunchedAnimation = NULL;
    this->LaunchedAudioEvent = NULL;
    this->LaunchedAudioLaunchRTPCName = TEXT("bouncepad_launchspeed");
    this->BouncePadSize = 20.00f;
    this->BouncePadGridX = 3;
    this->BouncePadGridY = 2;
    this->SelectedMesh = EBouncePadMeshType::UseWorldLocation;
    this->LaunchSpeed = 112.00f;
    this->Manual = true;
    this->Sunken = false;
    this->BouncePadHeight = 3.40f;
    this->BouncePadSunkenOffset = -0.75f;
    this->OffIntensity = 0.03f;
    this->OnIntensity = 2.00f;
    this->TriggeredIntensity = 16.00f;
    this->Active = false;
    this->BodyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BodyCollision"));
    this->OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
    this->InteractVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractVolume"));
    this->RollDazeOverrideComp = CreateDefaultSubobject<URollDazeOverride>(TEXT("RollDazeOverride"));
    this->Duration = 0.06f;
    this->FinalBounceSpeed = 82.00f;
    this->InitialBounceSpeed = 192.00f;
    this->BounceHeightMultiplier = 1.00f;
    this->GrappleHookSwingingBounceHeightMultiplier = 4.00f;
    this->BouncePower = 0.50f;
    this->OverlapErrorThreshold = 2.00f;
    this->CurrentWorldLocation = EWorldLocation::Amazon;
    this->CurrentMaterial = NULL;
    this->CurrentLightMaterial = NULL;
    this->BodyCollision->SetupAttachment(StaticMesh);
    this->OverlapVolume->SetupAttachment(BodyCollision);
    this->InteractVolume->SetupAttachment(OverlapVolume);
    this->RollDazeOverrideComp->SetupAttachment(BodyCollision);
}

void AMonorailCar_WithBouncepad::OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition) {
}

void AMonorailCar_WithBouncepad::OnRep_ActiveChanged() {
}

void AMonorailCar_WithBouncepad::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMonorailCar_WithBouncepad::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMonorailCar_WithBouncepad::OnInteractEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AMonorailCar_WithBouncepad::OnInteractBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool AMonorailCar_WithBouncepad::IsEnabled() {
    return false;
}

bool AMonorailCar_WithBouncepad::GetManual() {
    return false;
}

float AMonorailCar_WithBouncepad::GetDuration() {
    return 0.0f;
}

void AMonorailCar_WithBouncepad::GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const {
}

void AMonorailCar_WithBouncepad::DisableSkeletalMeshComponentsTick(UAnimationAsset* Animation) {
}

int32 AMonorailCar_WithBouncepad::CalculateBouncePadIndex(const FVector hitPos) const {
    return 0;
}

void AMonorailCar_WithBouncepad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMonorailCar_WithBouncepad, Manual);
    DOREPLIFETIME(AMonorailCar_WithBouncepad, Sunken);
    DOREPLIFETIME(AMonorailCar_WithBouncepad, Active);
}


