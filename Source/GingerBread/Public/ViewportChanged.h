#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ViewportChanged.generated.h"

UINTERFACE(Blueprintable)
class UViewportChanged : public UInterface {
    GENERATED_BODY()
};

class IViewportChanged : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnViewportChanged(int32 Width, int32 Height, float aspectRatio, float aspectScaleFrom16x9);
    
};

