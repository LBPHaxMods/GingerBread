#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "ProogleSpaceSuperAttackJumpTask.generated.h"

UCLASS(Blueprintable)
class UProogleSpaceSuperAttackJumpTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UProogleSpaceSuperAttackJumpTask();

};

