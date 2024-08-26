#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ProogleSuperAttackTeleportBaseTask.h"
#include "ProogleTeleportOverTargetHookPointTask.generated.h"

UCLASS(Blueprintable)
class UProogleTeleportOverTargetHookPointTask : public UProogleSuperAttackTeleportBaseTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetValidKey;
    
    UProogleTeleportOverTargetHookPointTask();

};

