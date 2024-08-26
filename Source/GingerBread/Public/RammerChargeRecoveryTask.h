#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "RammerChargeRecoveryTask.generated.h"

UCLASS(Blueprintable)
class URammerChargeRecoveryTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldEnterFlippedBB;
    
    URammerChargeRecoveryTask();

};

