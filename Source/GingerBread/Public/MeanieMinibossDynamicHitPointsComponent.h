#pragma once
#include "CoreMinimal.h"
#include "DynamicHitPointsComponent.h"
#include "MeanieMinibossDynamicHitPointsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMeanieMinibossDynamicHitPointsComponent : public UDynamicHitPointsComponent {
    GENERATED_BODY()
public:
    UMeanieMinibossDynamicHitPointsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnFightStarted(int32 SackboyNum);
    
    UFUNCTION(BlueprintCallable)
    bool HasPassedThreshold();
    
};

