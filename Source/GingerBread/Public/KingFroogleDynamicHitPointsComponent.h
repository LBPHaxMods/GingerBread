#pragma once
#include "CoreMinimal.h"
#include "DynamicHitPointsComponent.h"
#include "KingFroogleDynamicHitPointsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKingFroogleDynamicHitPointsComponent : public UDynamicHitPointsComponent {
    GENERATED_BODY()
public:
    UKingFroogleDynamicHitPointsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnFightStarted(int32 SackboyNum);
    
    UFUNCTION(BlueprintCallable)
    bool HasPassedThreshold();
    
};

