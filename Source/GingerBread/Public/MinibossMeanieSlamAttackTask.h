#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "GingerbreadBTTaskNode.h"
#include "MinibossMeanieSlamAttackTask.generated.h"

class AAIController;

UCLASS(Blueprintable)
class UMinibossMeanieSlamAttackTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LastAttackWasRightBB;
    
    UMinibossMeanieSlamAttackTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMeanieTookNonPhasingHit();
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFailed();
    
};

