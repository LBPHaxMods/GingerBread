#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TSSManager.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UTSSManager : public UObject {
    GENERATED_BODY()
public:
    UTSSManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimer();
    
};

