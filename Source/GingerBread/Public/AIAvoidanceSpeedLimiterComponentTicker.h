#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIAvoidanceSpeedLimiterComponentTicker.generated.h"

UCLASS(Blueprintable)
class AAIAvoidanceSpeedLimiterComponentTicker : public AActor {
    GENERATED_BODY()
public:
    AAIAvoidanceSpeedLimiterComponentTicker(const FObjectInitializer& ObjectInitializer);

};

