#include "ActorPoolComponent.h"
#include "Templates/SubclassOf.h"

UActorPoolComponent::UActorPoolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClassToCreate = NULL;
    this->MinPoolSize = 3;
    this->MaxPoolSize = 0;
    this->InUseLifetime = 5.00f;
    this->RecyclableLifetime = 5.00f;
}

bool UActorPoolComponent::SetNewClassTypeAndResetPools(TSubclassOf<AActor> Class) {
    return false;
}

void UActorPoolComponent::RecycleItem(AActor* itemToRecycle) {
}

void UActorPoolComponent::MarkItemRecyclable(AActor* itemToMark) {
}

void UActorPoolComponent::InitialiseDefaultPool() {
}

void UActorPoolComponent::InitialiseAttachActor(AActor* NewParent) {
}

AActor* UActorPoolComponent::GetNextPoolActor() {
    return NULL;
}


