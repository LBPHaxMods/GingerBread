#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "SniperJumpAndHoverTask.generated.h"

UCLASS(Blueprintable)
class USniperJumpAndHoverTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsFlyingKey;
    
    USniperJumpAndHoverTask();

};

