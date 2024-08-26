#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "MeanieMinibossInSlapRangeDecorator.generated.h"

UCLASS(Blueprintable)
class UMeanieMinibossInSlapRangeDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
    UMeanieMinibossInSlapRangeDecorator();

};

