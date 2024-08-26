#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "StompySpaceLinkManagerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompySpaceLinkManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UStompySpaceLinkManagerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RegisteredActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void RegisteredActorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLinkingDisabled(AActor* Actor, bool isImmediate);
    
};

