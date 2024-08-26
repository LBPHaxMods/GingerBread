#include "Registrar.h"

ARegistrar::ARegistrar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ARegistrar::Unregister(const FName& Tag, UActorComponent* component) {
}

void ARegistrar::Register(const FName& Tag, UActorComponent* component) {
}

ARegistrar* ARegistrar::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

bool ARegistrar::GetComponents(const FName& Tag, TArray<UActorComponent*>& ComponentsOut) const {
    return false;
}


