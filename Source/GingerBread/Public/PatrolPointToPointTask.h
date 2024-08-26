#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "GingerbreadBTTaskNode.h"
#include "PatrolPointToPointTask.generated.h"

class AAIController;

UCLASS(Blueprintable)
class UPatrolPointToPointTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PatrolObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentPatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsReturningToPatrol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPatrolPointToPointTask();

private:
    UFUNCTION(BlueprintCallable)
    void MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFailed();
    
};

