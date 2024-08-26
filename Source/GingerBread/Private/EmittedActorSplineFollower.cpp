#include "EmittedActorSplineFollower.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

AEmittedActorSplineFollower::AEmittedActorSplineFollower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("ActorRoot"));

    this->BillboardComponent = (UBillboardComponent*)RootComponent;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Rotation Offset"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger"));
    this->Usage = EEmittedActorSplineFollowerUsage::NETWORKED;
    this->bRunPrepolulated = true;
    this->bEnabled = true;
    this->SpawnClass = NULL;
    this->bSpawnedActorsAreDestroyable = false;
    this->NumSubjects = 0;
    this->bAlwaysUseMaxSubjects = false;
    this->EmissionDelay = 1.00f;
    this->StartDelay = 0.00f;
    this->SpawnedActorMesh = NULL;
    this->BasicEmittedActorClass = NULL;
    this->bContinuous = true;
    this->bDestroyAtEnd = false;
    this->TimeToTraverseSpline = 3.00f;
    this->bAlignPitch = false;
    this->bAlignYaw = false;
    this->bAlignRoll = false;
    this->bZeroRelativeRotation = false;
    this->MaxPossibleSubjects = 0;
    this->WaitTime = 0.00f;
    this->Spacing = 0.00f;
    this->ArrowComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AEmittedActorSplineFollower::RestartRun(USplineFollowerComponent* Follower, bool bWasMovingForward, int32 Index) {
}

void AEmittedActorSplineFollower::OnSubjectDestroyed(AActor* Subject) {
}

void AEmittedActorSplineFollower::OnSplineMovementReset(USplineFollowerComponent* SplineFollower, bool bForward, int32 Idx) {
}

void AEmittedActorSplineFollower::OnFirstPointReached() {
}

void AEmittedActorSplineFollower::DoOneShot() {
}

void AEmittedActorSplineFollower::AddFollower() {
}


