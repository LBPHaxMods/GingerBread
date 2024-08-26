#include "SplineFollowingEnemyCoordinator.h"

ASplineFollowingEnemyCoordinator::ASplineFollowingEnemyCoordinator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SplineActor = NULL;
    this->bIsClosedLoop = false;
    this->bReverseSplineDirection = false;
    this->AmountOfChains = 0;
    this->AmountOfLinksPerChain = 0;
    this->LinkActorClass = NULL;
    this->InitialSpawnDelay = 0.00f;
    this->SpawnDelay = 0.00f;
    this->TotalSplineLength = 0.00f;
    this->OffsetBetweenLinks = 0.00f;
    this->InitialSpawnPositionAlongSpline = 0.00f;
    this->bUseLinearSpawnOffset = true;
    this->LinearSpawnOffset = 0.10f;
    this->MovementSpeed = 10.00f;
    this->SplineToFollow = NULL;
}


