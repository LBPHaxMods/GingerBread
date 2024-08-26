#include "MusicStateManager.h"
#include "Net/UnrealNetwork.h"

AMusicStateManager::AMusicStateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;

}

void AMusicStateManager::OnRep_MusicStates(TArray<FName> PrevMusicStates) {
}

void AMusicStateManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMusicStateManager, MusicStates);
}


