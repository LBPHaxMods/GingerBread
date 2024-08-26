#pragma once
#include "CoreMinimal.h"
#include "EVexMovePoint.h"
#include "VexBehaviour.h"
#include "VexSpikeyRollerSequenceBehaviour.generated.h"

UCLASS(Blueprintable)
class UVexSpikeyRollerSequenceBehaviour : public UVexBehaviour {
    GENERATED_BODY()
public:
    UVexSpikeyRollerSequenceBehaviour();

private:
    UFUNCTION(BlueprintCallable)
    void VexMoveCompleted(EVexMovePoint ArrivedAtPoint);
    
};

