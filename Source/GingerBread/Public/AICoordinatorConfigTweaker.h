#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "AICoordinatorConfigTweaker.generated.h"

class UAICoordinatorConfigGenericBase;

UCLASS(Blueprintable)
class UAICoordinatorConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UAICoordinatorConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UAICoordinatorConfigGenericBase* GetAICoordinatorConfigGenericBase();
    
};

