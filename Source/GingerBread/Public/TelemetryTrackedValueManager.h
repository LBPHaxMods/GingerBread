#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TelemetryTrackedValueManager.generated.h"

UCLASS(Blueprintable)
class UTelemetryTrackedValueManager : public UObject {
    GENERATED_BODY()
public:
    UTelemetryTrackedValueManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimer();
    
};

