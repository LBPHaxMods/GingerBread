#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "KingFroogleTurnTask.h"
#include "KingFroogleTurnToTargetTask.generated.h"

UCLASS(Blueprintable)
class UKingFroogleTurnToTargetTask : public UKingFroogleTurnTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UKingFroogleTurnToTargetTask();

};

