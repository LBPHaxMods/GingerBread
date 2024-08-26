#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WobbleBlobBreak.generated.h"

class AWobbleBlobBase;

UINTERFACE(Blueprintable)
class UWobbleBlobBreak : public UInterface {
    GENERATED_BODY()
};

class IWobbleBlobBreak : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnCanBreakWobbleBlob(AWobbleBlobBase* WobbleBlob);
    
    UFUNCTION()
    virtual bool CanBreakWobbleBlob(AWobbleBlobBase* WobbleBlob) PURE_VIRTUAL(CanBreakWobbleBlob, return false;);
    
};

