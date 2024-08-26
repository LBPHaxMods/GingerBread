#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "MeanieMinibossArenaManipulationTask.generated.h"

UCLASS(Blueprintable)
class UMeanieMinibossArenaManipulationTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AttackChoiceBB;
    
    UMeanieMinibossArenaManipulationTask();

};

