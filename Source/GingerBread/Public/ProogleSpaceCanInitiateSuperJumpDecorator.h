#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "ProogleSpaceCanInitiateSuperJumpDecorator.generated.h"

UCLASS(Blueprintable)
class UProogleSpaceCanInitiateSuperJumpDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CanSuperAttackBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UProogleSpaceCanInitiateSuperJumpDecorator();

};

