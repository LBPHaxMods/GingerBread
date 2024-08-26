#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "SniperDescendDecorator.generated.h"

UCLASS(Blueprintable)
class USniperDescendDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DescendOnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsFlyingKey;
    
    USniperDescendDecorator();

};

