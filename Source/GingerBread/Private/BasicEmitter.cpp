#include "BasicEmitter.h"

ABasicEmitter::ABasicEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->StaticMesh = NULL;
    this->bApplyGravity = false;
    this->Usage = EEmittedActorUsage::Networked;
    this->BasicEmittedActor = NULL;
}

bool ABasicEmitter::SpawnObject() {
    return false;
}


