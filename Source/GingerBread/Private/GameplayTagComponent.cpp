#include "GameplayTagComponent.h"

UGameplayTagComponent::UGameplayTagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGameplayTagComponent::SetTags(const FGameplayTagContainer& Tags) {
}

void UGameplayTagComponent::SetTag(const FGameplayTag& Tag, bool tagState) {
}

bool UGameplayTagComponent::CheckForMatchingGameplayTag(const USceneComponent* inComponent, const FGameplayTag& InTag, const int32 inMaxParentHeight, const int32 inMaxChildDepth, const bool inCanCheckAttachedActors) {
    return false;
}

bool UGameplayTagComponent::CheckForAnyMatchingGameplayTags(const USceneComponent* inComponent, const FGameplayTagContainer& inTagContainer, const int32 inMaxParentHeight, const int32 inMaxChildDepth) {
    return false;
}

bool UGameplayTagComponent::CheckForAllMatchingGameplayTags(const USceneComponent* inComponent, const FGameplayTagContainer& inTagContainer, const int32 inMaxParentHeight, const int32 inMaxChildDepth) {
    return false;
}


