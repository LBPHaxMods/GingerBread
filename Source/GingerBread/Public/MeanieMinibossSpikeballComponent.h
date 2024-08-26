#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMeanieSpikeballState.h"
#include "MeanieMinibossSpikeballComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMeanieMinibossSpikeballComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMeanieMinibossSpikeballComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpikeBallState(EMeanieSpikeballState spikeballState);
    
};

