#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "AISetupHitReactionTask.generated.h"

UCLASS(Blueprintable)
class UAISetupHitReactionTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ContinueHitReactionBB;
    
    UAISetupHitReactionTask();

};

