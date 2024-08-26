#pragma once
#include "CoreMinimal.h"
#include "EVexMovePoint.h"
#include "VexBehaviour.h"
#include "VexRageBehaviour.generated.h"

UCLASS(Blueprintable)
class UVexRageBehaviour : public UVexBehaviour {
    GENERATED_BODY()
public:
    UVexRageBehaviour();

private:
    UFUNCTION(BlueprintCallable)
    void VexMoveCompleted(EVexMovePoint ArrivedAtPoint);
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerSpinOnSpot(bool StartReverse, float RotationDegrees, bool FinalSpin);
    
private:
    UFUNCTION(BlueprintCallable)
    void TriggerDrivingLoop();
    
    UFUNCTION(BlueprintCallable)
    void TriggerChangeDirectionAnim();
    
};

