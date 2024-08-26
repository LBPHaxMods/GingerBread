#include "GingerbreadReplicatedHud.h"
#include "Net/UnrealNetwork.h"

AGingerbreadReplicatedHud::AGingerbreadReplicatedHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AGingerbreadReplicatedHud::ReplicateVoidSelectVO_Implementation(EVoidSelectVOType Type, int32 ID) {
}

void AGingerbreadReplicatedHud::OnRep_HostReplicatedScreenStack() {
}

AGingerbreadHUD* AGingerbreadReplicatedHud::GetOwnerHUD() {
    return NULL;
}

void AGingerbreadReplicatedHud::CallOnRepFunctions_Implementation() {
}

void AGingerbreadReplicatedHud::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGingerbreadReplicatedHud, HostReplicatedScreenStack);
}


