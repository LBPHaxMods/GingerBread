#include "GruntyStack.h"
#include "GruntyStackActionComponent.h"
#include "Net/UnrealNetwork.h"

AGruntyStack::AGruntyStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ActionComponent = CreateDefaultSubobject<UGruntyStackActionComponent>(TEXT("ActionComponent"));
}

void AGruntyStack::OnStackActorDestroyed(AActor* Actor) {
}

void AGruntyStack::OnRep_StackActorsUpdated() {
}

void AGruntyStack::GruntyAnimUpdated(AGrunty* Grunty) {
}

TArray<AGingerbreadAICharacter*> AGruntyStack::GetStackActors() {
    return TArray<AGingerbreadAICharacter*>();
}

bool AGruntyStack::CurrentlyHasShield() const {
    return false;
}

void AGruntyStack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGruntyStack, StackActors);
}


