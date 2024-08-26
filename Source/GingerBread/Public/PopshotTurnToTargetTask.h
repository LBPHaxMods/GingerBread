#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "PopshotTurnTask.h"
#include "PopshotTurnToTargetTask.generated.h"

UCLASS(Blueprintable)
class UPopshotTurnToTargetTask : public UPopshotTurnTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UPopshotTurnToTargetTask();

};

