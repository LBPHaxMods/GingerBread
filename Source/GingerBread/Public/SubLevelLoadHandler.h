#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SubLevelLoadHandler.generated.h"

UCLASS(Blueprintable)
class USubLevelLoadHandler : public UObject {
    GENERATED_BODY()
public:
    USubLevelLoadHandler();

    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

