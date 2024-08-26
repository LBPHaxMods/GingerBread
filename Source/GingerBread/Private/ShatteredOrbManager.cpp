#include "ShatteredOrbManager.h"
#include "Net/UnrealNetwork.h"

AShatteredOrbManager::AShatteredOrbManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AShatteredOrbManager::OnRep_State() {
}

AShatteredOrbManager* AShatteredOrbManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void AShatteredOrbManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShatteredOrbManager, State);
}


