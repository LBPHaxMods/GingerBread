#include "RingSpawner.h"
#include "TriggerActorComponent.h"

ARingSpawner::ARingSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->SplineFollowerLeader = NULL;
    this->Diameter = 26.00f;
    this->RotationSpeed = 0.00f;
}

void ARingSpawner::RecalculateRingScale() {
}


