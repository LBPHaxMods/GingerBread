#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "EGruntyChaseType.h"
#include "GingerbreadBTTaskNode.h"
#include "GruntyChaseTask.generated.h"

class AAIController;

UCLASS(Blueprintable)
class UGruntyChaseTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGruntyChaseType ChaseType;
    
    UGruntyChaseTask();

private:
    UFUNCTION(BlueprintCallable)
    void MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFailed();
    
};

