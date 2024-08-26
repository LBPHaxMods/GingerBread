#include "WaterTableManager.h"
#include "Net/UnrealNetwork.h"

AWaterTableManager::AWaterTableManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->OverrideHitPointsBoundsUpdateMode = false;
    this->HitPointsBoundsUpdateMode = EHitPointsBoundsUpdateMode::Radius;
    this->CurrentWaterObjectStartingHeight = 0.00f;
}

void AWaterTableManager::SetNoActiveWaterObject() {
}

void AWaterTableManager::SetCurrentHeightFromObject(const AWaterBase* WaterObject, const float NewHeight) {
}

void AWaterTableManager::SetCurrentHeight(const float NewHeight) {
}

void AWaterTableManager::SetActiveWaterObject(AWaterBase* WaterObject, const float StartingHeight) {
}

void AWaterTableManager::RemoveCallback(const FWaterTableCallbackData& Callback) {
}

void AWaterTableManager::RegisterWaterObject(AWaterBase* WaterObject) {
}

void AWaterTableManager::OnRep_CurrentWaterObjectStartingHeight() {
}

void AWaterTableManager::OnRep_CurrentWaterObject() {
}

bool AWaterTableManager::IsEnabled() const {
    return false;
}

AWaterTableManager* AWaterTableManager::GetWaterTableManager(UObject* WorldContextObject) {
    return NULL;
}

EWaterTableDirection AWaterTableManager::GetDirection() const {
    return EWaterTableDirection::Rising;
}

float AWaterTableManager::GetCurrentHeight() const {
    return 0.0f;
}

void AWaterTableManager::AddCallback(const FWaterTableCallbackData& Callback) {
}

void AWaterTableManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWaterTableManager, CurrentWaterObject);
    DOREPLIFETIME(AWaterTableManager, CurrentWaterObjectStartingHeight);
}


