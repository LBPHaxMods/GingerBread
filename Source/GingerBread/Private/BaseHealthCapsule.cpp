#include "BaseHealthCapsule.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "AttractionCollectableComponent.h"
#include "CollectableHUDMoverComponent.h"
#include "CollectableHeadSpinComponent.h"
#include "CollectablePickupMoverComponent.h"
#include "Net/UnrealNetwork.h"

ABaseHealthCapsule::ABaseHealthCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->ShouldDestroyOnCollected = false;
    this->ShouldUseSackboyTracker = false;
    this->HUDMover = CreateDefaultSubobject<UCollectableHUDMoverComponent>(TEXT("HUDMover"));
    this->PickupMover = CreateDefaultSubobject<UCollectablePickupMoverComponent>(TEXT("PickupMover"));
    this->HeadSpinMover = CreateDefaultSubobject<UCollectableHeadSpinComponent>(TEXT("HeadSpinner"));
    this->RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));
    this->AttractionCollectable = CreateDefaultSubobject<UAttractionCollectableComponent>(TEXT("AttractionCollectable"));
    this->HUDAwardSound = NULL;
    this->OverheadBurstSound = NULL;
    this->PickupAudio = NULL;
    this->PickupGamepadAudio = NULL;
    this->HeartToHUDAudio = NULL;
    this->HeadCollectionVFX = NULL;
    this->HeadCollectionVFX2 = NULL;
    this->TrailVFX = NULL;
    this->BeginCollectedRumble = NULL;
    this->EndCollectedRumble = NULL;
    this->CollectedRumbleName = TEXT("WobbleBlobLandedOn");
    this->BeginCollectedHaptics = NULL;
    this->EndCollectedHaptics = NULL;
    this->bIsBigLife = false;
    this->ScoreToAward = 50;
    this->HudMovementHeadSpinAlpha = 0.70f;
    this->CurrentState = EHealthCapsuleState::Idle;
    this->Sackboy = NULL;
}

void ABaseHealthCapsule::OnSackboyDied(ASackboy* diedSackboy) {
}

void ABaseHealthCapsule::OnRep_State() {
}

void ABaseHealthCapsule::OnRep_Sackboy() {
}

void ABaseHealthCapsule::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void ABaseHealthCapsule::OnMoverComplete(UCollectablePickupMoverComponent* mover, FVector OrbLocation, FVector PreviousLocation) {
}

void ABaseHealthCapsule::OnHUDMovementComplete(UCollectableHUDMoverComponent* mover) {
}

void ABaseHealthCapsule::OnHeadSpinComplete(UCollectableHeadSpinComponent* mover) {
}

void ABaseHealthCapsule::AddNetworkedImpulse_Implementation(FVector LaunchVelocity) {
}

void ABaseHealthCapsule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseHealthCapsule, CurrentState);
    DOREPLIFETIME(ABaseHealthCapsule, Sackboy);
}


