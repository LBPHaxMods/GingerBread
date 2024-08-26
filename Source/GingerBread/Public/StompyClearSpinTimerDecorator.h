#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "StompyClearSpinTimerDecorator.generated.h"

UCLASS(Blueprintable)
class UStompyClearSpinTimerDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldSpinBB;
    
    UStompyClearSpinTimerDecorator();

};

