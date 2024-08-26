#include "SniperNeedlesComponent.h"
#include "Net/UnrealNetwork.h"

USniperNeedlesComponent::USniperNeedlesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NeedleClass = NULL;
    this->Sniper = NULL;
}

ASniperNeedleBase* USniperNeedlesComponent::SpawnAndEquipNeedle(ESniperNeedleSlot Slot) {
    return NULL;
}

ASniperNeedleBase* USniperNeedlesComponent::ReloadFromSecondaryHand(ESniperNeedleSlot Slot) {
    return NULL;
}

ASniperNeedleBase* USniperNeedlesComponent::ReleaseNeedle(ESniperNeedleSlot Slot) {
    return NULL;
}

int32 USniperNeedlesComponent::NumberOfHeldNeedles() {
    return 0;
}

bool USniperNeedlesComponent::HasNeedlesInSecondaryHands() {
    return false;
}

ESniperNeedleSlot USniperNeedlesComponent::GetRandomSlot(bool throwHandsOnly, bool hasNeedle) {
    return ESniperNeedleSlot::TopRight;
}

int32 USniperNeedlesComponent::GetNumberOfNeedlesInThrowHands() {
    return 0;
}

TArray<ASniperNeedleBase*> USniperNeedlesComponent::GetNeedlesInThrowHands() {
    return TArray<ASniperNeedleBase*>();
}

ASniperNeedleBase* USniperNeedlesComponent::GetNeedleInSlot(ESniperNeedleSlot Slot) {
    return NULL;
}

void USniperNeedlesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USniperNeedlesComponent, Needles);
}


