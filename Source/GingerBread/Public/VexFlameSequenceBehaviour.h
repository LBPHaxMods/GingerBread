#pragma once
#include "CoreMinimal.h"
#include "EVexMovePoint.h"
#include "VexBehaviour.h"
#include "VexFlameSequenceBehaviour.generated.h"

UCLASS(Blueprintable)
class UVexFlameSequenceBehaviour : public UVexBehaviour {
    GENERATED_BODY()
public:
    UVexFlameSequenceBehaviour();

private:
    UFUNCTION(BlueprintCallable)
    void VexMoveCompleted(EVexMovePoint ArrivedAtPoint);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFlamesStopped();
    
};

