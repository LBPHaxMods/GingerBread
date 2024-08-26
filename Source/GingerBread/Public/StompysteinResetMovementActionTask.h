#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "StompysteinResetMovementActionTask.generated.h"

UCLASS(Blueprintable)
class UStompysteinResetMovementActionTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MovementActionBB;
    
    UStompysteinResetMovementActionTask();

};

