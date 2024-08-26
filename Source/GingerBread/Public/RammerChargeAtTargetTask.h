#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RammerChargeTask.h"
#include "RammerChargeAtTargetTask.generated.h"

UCLASS(Blueprintable)
class URammerChargeAtTargetTask : public URammerChargeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector RemainingChargesBB;
    
    URammerChargeAtTargetTask();

};

