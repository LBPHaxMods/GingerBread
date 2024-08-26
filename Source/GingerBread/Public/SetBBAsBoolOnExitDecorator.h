#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "SetBBAsBoolOnExitDecorator.generated.h"

UCLASS(Blueprintable)
class USetBBAsBoolOnExitDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ValueToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    USetBBAsBoolOnExitDecorator();

};

