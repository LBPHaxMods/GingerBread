#pragma once
#include "CoreMinimal.h"
#include "CollectableComponentBase.h"
#include "PhaseCollectableComponent.generated.h"

class UHierarchicalTag;
class UPhaseObjectComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhaseCollectableComponent : public UCollectableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhaseObjectComponent* PhaseObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DisableTagIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHierarchicalTag*> TagsToDisable;
    
public:
    UPhaseCollectableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPhaseLightExit();
    
    UFUNCTION(BlueprintCallable)
    void OnPhaseLightEnter();
    
};

