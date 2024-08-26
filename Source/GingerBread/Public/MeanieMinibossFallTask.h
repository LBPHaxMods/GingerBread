#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "MeanieMinibossFallTask.generated.h"

UCLASS(Blueprintable)
class UMeanieMinibossFallTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector NeedsToFallBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentPhaseBB;
    
    UMeanieMinibossFallTask();

private:
    UFUNCTION(BlueprintCallable)
    void ReceiveExecuteAI_Delayed0();
    
    UFUNCTION(BlueprintCallable)
    void OnGruntysDied();
    
    UFUNCTION(BlueprintCallable)
    void BeginRecoveryTimerElapsed();
    
};

