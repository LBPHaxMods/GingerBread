#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "ProogleStaticAttackAnticipationTask.generated.h"

UCLASS(Blueprintable)
class UProogleStaticAttackAnticipationTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UProogleStaticAttackAnticipationTask();

};

