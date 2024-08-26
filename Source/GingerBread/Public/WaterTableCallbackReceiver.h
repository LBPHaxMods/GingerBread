#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EWaterTableDirection.h"
#include "WaterTableCallbackReceiver.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWaterTableCallbackReceiver : public UInterface {
    GENERATED_BODY()
};

class IWaterTableCallbackReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeightReached(const float Height, const EWaterTableDirection Direction);
    
};

