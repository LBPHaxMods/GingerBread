#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UGameplayTagComponent : public USceneComponent, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    UGameplayTagComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTags(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FGameplayTag& Tag, bool tagState);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckForMatchingGameplayTag(const USceneComponent* inComponent, const FGameplayTag& InTag, const int32 inMaxParentHeight, const int32 inMaxChildDepth, const bool inCanCheckAttachedActors);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckForAnyMatchingGameplayTags(const USceneComponent* inComponent, const FGameplayTagContainer& inTagContainer, const int32 inMaxParentHeight, const int32 inMaxChildDepth);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckForAllMatchingGameplayTags(const USceneComponent* inComponent, const FGameplayTagContainer& inTagContainer, const int32 inMaxParentHeight, const int32 inMaxChildDepth);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

