#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ProogleSuperAttackTeleportBaseTask.h"
#include "KingFroogleSuperAttackTeleportOverTargetTask.generated.h"

UCLASS(Blueprintable)
class UKingFroogleSuperAttackTeleportOverTargetTask : public UProogleSuperAttackTeleportBaseTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ArenaCentreActorBB;
    
    UKingFroogleSuperAttackTeleportOverTargetTask();

};

