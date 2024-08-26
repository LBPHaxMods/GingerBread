#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "ProogleSuperAttackAnticipateTask.generated.h"

UCLASS(Blueprintable)
class UProogleSuperAttackAnticipateTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
public:
    UProogleSuperAttackAnticipateTask();

};

