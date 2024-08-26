#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "KingFroogleHopTask.generated.h"

UCLASS(Abstract, Blueprintable)
class UKingFroogleHopTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector HopTargetActorBB;
    
    UKingFroogleHopTask();

};

