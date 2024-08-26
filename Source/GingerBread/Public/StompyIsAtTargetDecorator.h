#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "StompyIsAtTargetDecorator.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UStompyIsAtTargetDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsAtTarget;
    
    UStompyIsAtTargetDecorator();

};

