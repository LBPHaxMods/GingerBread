#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RammerTurnBaseTask.h"
#include "RammerTurnToTargetTask.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API URammerTurnToTargetTask : public URammerTurnBaseTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    URammerTurnToTargetTask();

};

