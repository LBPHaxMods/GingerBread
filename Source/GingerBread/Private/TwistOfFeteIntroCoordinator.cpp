#include "TwistOfFeteIntroCoordinator.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

ATwistOfFeteIntroCoordinator::ATwistOfFeteIntroCoordinator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->LeftDoorAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("LeftDoorAkComponent"));
    this->RightDoorAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("RightDoorAkComponent"));
    this->DoorRotationTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("DoorRotationTimelineComponent"));
    this->BouncerMovementTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("BouncerMovementTimelineComponent"));
    this->DoorRotationBeatOffset = 3.00f;
    this->DoorRotationDuration = 4.00f;
    this->DoorRotationAngle = 100.00f;
    this->DoorRotationCurve = NULL;
    this->DoorRotationStartAudioEvent = NULL;
    this->DoorRotationFinishAudioEvent = NULL;
    this->BouncerMovementBeatOffset = 6.00f;
    this->BouncerMovementDuration = 0.50f;
    this->BouncerMovementDistance = -75.00f;
    this->BouncerMovementCurve = NULL;
    this->HasRhythmicTransitionCannonFired = false;
    this->LeftDoorAkComponent->SetupAttachment(RootComponent);
    this->RightDoorAkComponent->SetupAttachment(RootComponent);
}

void ATwistOfFeteIntroCoordinator::SubscribeToBeatEvents_Implementation() {
}

void ATwistOfFeteIntroCoordinator::OnRep_HasRhythmicTransitionCannonFired() {
}

void ATwistOfFeteIntroCoordinator::OnDoorRotationTimelineUpdate(float RotationAlpha) {
}

void ATwistOfFeteIntroCoordinator::OnDoorRotationTimelineFinished() {
}

void ATwistOfFeteIntroCoordinator::OnBouncerMovementTimelineUpdate(float MovementAlpha) {
}

void ATwistOfFeteIntroCoordinator::AUTH_OnRhythmicTransitionCannonFired() {
}

void ATwistOfFeteIntroCoordinator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATwistOfFeteIntroCoordinator, HasRhythmicTransitionCannonFired);
}


