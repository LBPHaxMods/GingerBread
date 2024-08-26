#pragma once
#include "CoreMinimal.h"
#include "EVexMovePoint.h"
#include "VexBehaviour.h"
#include "VexJumpBehaviour.generated.h"

UCLASS(Blueprintable)
class UVexJumpBehaviour : public UVexBehaviour {
    GENERATED_BODY()
public:
    UVexJumpBehaviour();

private:
    UFUNCTION(BlueprintCallable)
    void VexMoveCompleted(EVexMovePoint ArrivedAtPoint);
    
};

