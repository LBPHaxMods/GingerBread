#include "CostumeShop.h"

ACostumeShop::ACostumeShop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DelayBeforeEntry = 1.00f;
}




void ACostumeShop::Net_SetUpFXCallback_Implementation() {
}

void ACostumeShop::Multicast_HandleFinalSackboyEnteredCostumeShop_Implementation() {
}

void ACostumeShop::HandleSackboyEnteredCostumeShop(ASackboy* Sackboy) {
}

void ACostumeShop::HandleFinalSackboyEnteredCostumeShop(TArray<ASackboy*>& EnteredSackboys) {
}


