#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "KingFroogleTeleportAwayTask.generated.h"

UCLASS(Blueprintable)
class UKingFroogleTeleportAwayTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TeleportAwayTargetBB;
    
    UKingFroogleTeleportAwayTask();

};
