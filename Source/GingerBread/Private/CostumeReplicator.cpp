#include "CostumeReplicator.h"
#include "Net/UnrealNetwork.h"

ACostumeReplicator::ACostumeReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ReadyOnAllClients = false;
    this->CostumeSelectScreenState = 0;
    this->CostumeShopReady = false;
}

void ACostumeReplicator::SetCostumeShopReady(bool IsReady) {
}

void ACostumeReplicator::SetCostumeSelectScreenState(uint8 ScreenState) {
}

void ACostumeReplicator::SetCostumeSelectData(const FEquippedCostumeData& CostumeData) {
}

void ACostumeReplicator::SERVER_SetCostumeShopReady_Implementation(bool IsReady) {
}

void ACostumeReplicator::SERVER_SendCostumeSelectScreenState_Implementation(uint8 ScreenState) {
}

void ACostumeReplicator::SERVER_SendCostumeSelectData_Implementation(const FEquippedCostumeData CostumeData) {
}

void ACostumeReplicator::OnRep_CostumeShopReadyChanged() {
}

void ACostumeReplicator::OnRep_CostumeSelectScreenStateChanged() {
}

void ACostumeReplicator::OnRep_CostumeSelectDataChanged() {
}

void ACostumeReplicator::OnMeshCreated(const FGingerbreadPlayerId& PlayerId) {
}

void ACostumeReplicator::OnDLCChanged() {
}

bool ACostumeReplicator::IsCostumeSetup(const FEquippedCostumeData& EquippedCostumeData) {
    return false;
}

bool ACostumeReplicator::GetCostumeShopReady() const {
    return false;
}

FEquippedCostumeData ACostumeReplicator::GetCostumeSelectData() const {
    return FEquippedCostumeData{};
}

ACostumeReplicator* ACostumeReplicator::GetCostumeReplicator(const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
    return NULL;
}

void ACostumeReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACostumeReplicator, ReadyOnAllClients);
    DOREPLIFETIME(ACostumeReplicator, CostumeSelectData);
    DOREPLIFETIME(ACostumeReplicator, Rep_CostumeSelectData);
    DOREPLIFETIME(ACostumeReplicator, CostumeSelectScreenState);
    DOREPLIFETIME(ACostumeReplicator, CostumeShopReady);
}


