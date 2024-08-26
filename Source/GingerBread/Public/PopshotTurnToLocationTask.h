#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "PopshotTurnTask.h"
#include "PopshotTurnToLocationTask.generated.h"

UCLASS(Blueprintable)
class UPopshotTurnToLocationTask : public UPopshotTurnTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationBB;
    
    UPopshotTurnToLocationTask();

};

