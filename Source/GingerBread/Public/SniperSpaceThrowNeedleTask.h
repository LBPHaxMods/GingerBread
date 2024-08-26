#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SniperThrowNeedleTask.h"
#include "SniperSpaceThrowNeedleTask.generated.h"

UCLASS(Blueprintable)
class USniperSpaceThrowNeedleTask : public USniperThrowNeedleTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector RunAwayLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsTrappedKey;
    
    USniperSpaceThrowNeedleTask();

};

