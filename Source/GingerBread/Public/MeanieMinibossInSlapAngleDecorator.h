#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "MeanieMinibossInSlapAngleDecorator.generated.h"

UCLASS(Blueprintable)
class UMeanieMinibossInSlapAngleDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
    UMeanieMinibossInSlapAngleDecorator();

};

