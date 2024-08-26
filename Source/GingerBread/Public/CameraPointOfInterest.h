#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "POIInfo.h"
#include "CameraPointOfInterest.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCameraPointOfInterest : public UInterface {
    GENERATED_BODY()
};

class ICameraPointOfInterest : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFocusInfo(FPOIInfo& Info);
    
};

