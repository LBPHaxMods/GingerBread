#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "ClearBBOnExitDecorator.generated.h"

UCLASS(Blueprintable)
class UClearBBOnExitDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ValueToClear;
    
    UClearBBOnExitDecorator();

};

