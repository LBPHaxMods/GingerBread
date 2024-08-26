#include "GruntyStackActionComponent.h"
#include "Net/UnrealNetwork.h"

UGruntyStackActionComponent::UGruntyStackActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(7);
}

void UGruntyStackActionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGruntyStackActionComponent, BottomAnimInstance);
    DOREPLIFETIME(UGruntyStackActionComponent, TopAnimInstance);
    DOREPLIFETIME(UGruntyStackActionComponent, MiddleAnimInstances);
}


