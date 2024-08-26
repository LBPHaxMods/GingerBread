#pragma once
#include "CoreMinimal.h"
#include "HitPointModifyResult.h"
#include "StompySpinChaseTask.h"
#include "StompysteinSpinChaseTask.generated.h"

UCLASS(Blueprintable)
class UStompysteinSpinChaseTask : public UStompySpinChaseTask {
    GENERATED_BODY()
public:
    UStompysteinSpinChaseTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthModification(const FHitPointModifyResult& Result);
    
};

