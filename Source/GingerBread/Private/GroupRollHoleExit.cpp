#include "GroupRollHoleExit.h"
#include "Components/SkeletalMeshComponent.h"
#include "PickupContainerComponent.h"

AGroupRollHoleExit::AGroupRollHoleExit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->ExitMesh = (USkeletalMeshComponent*)RootComponent;
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->FirstExitEvent = NULL;
    this->ExitEvent = NULL;
    this->FirstExitHapticsEvent = NULL;
    this->ExitHapticsEvent = NULL;
    this->DoorExitSequence = NULL;
    this->PortalExitSequence = NULL;
    this->PortalAnimationBlueprint = NULL;
    this->DoorAnimationBlueprint = NULL;
    this->DistanceToSearchForFloor = 10.00f;
    this->SnappingDistance = 10.00f;
    this->RollHoleType = ERollHoleType::Floor;
    this->DoorMesh = NULL;
    this->PortalMesh = NULL;
    this->DelayBetweenSpawns = 0.50f;
    this->PickupContainer->SetupAttachment(RootComponent);
}

void AGroupRollHoleExit::OnSequenceFinished() {
}

void AGroupRollHoleExit::OnExitMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted) {
}


