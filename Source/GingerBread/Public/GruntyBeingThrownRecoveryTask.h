#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "GruntyBeingThrownRecoveryTask.generated.h"

UCLASS(Blueprintable)
class UGruntyBeingThrownRecoveryTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UGruntyBeingThrownRecoveryTask();

private:
    UFUNCTION(BlueprintCallable)
    void LandingTimeElapsed_Delayed();
    
};

