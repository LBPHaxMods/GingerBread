#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "AIFlippedHitReactionTask.generated.h"

UCLASS(Blueprintable)
class UAIFlippedHitReactionTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BeingCarriedBB;
    
    UAIFlippedHitReactionTask();

};

