#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "RammerTeleportTask.generated.h"

UCLASS(Blueprintable)
class URammerTeleportTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBB;
    
    URammerTeleportTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPortalOpened();
    
};

