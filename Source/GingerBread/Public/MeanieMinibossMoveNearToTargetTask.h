#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "GingerbreadBTTaskNode.h"
#include "MeanieMinibossMoveNearToTargetTask.generated.h"

class AAIController;

UCLASS(Blueprintable)
class UMeanieMinibossMoveNearToTargetTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UMeanieMinibossMoveNearToTargetTask();

private:
    UFUNCTION(BlueprintCallable)
    void MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFailed();
    
};

