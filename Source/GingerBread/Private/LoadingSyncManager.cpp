#include "LoadingSyncManager.h"
#include "Net/UnrealNetwork.h"

ALoadingSyncManager::ALoadingSyncManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ServerIsReady = false;
}

void ALoadingSyncManager::OnRep_ServerIsReady() {
}

void ALoadingSyncManager::OnLoadingScreenTransitionStart() {
}

ALoadingSyncManager* ALoadingSyncManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void ALoadingSyncManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALoadingSyncManager, ServerIsReady);
}


