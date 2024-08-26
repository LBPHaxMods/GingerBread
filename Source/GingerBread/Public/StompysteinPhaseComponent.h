#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStompysteinPhase.h"
#include "StompysteinPhaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompysteinPhaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UStompysteinPhaseComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPhaseChange(EStompysteinPhase NewPhase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStompysteinPhase GetCurrentPhase() const;
    
};

