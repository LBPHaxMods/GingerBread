#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WaterTableInteractionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWaterTableInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class IWaterTableInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldInteractWithWaterTable();
    
};

