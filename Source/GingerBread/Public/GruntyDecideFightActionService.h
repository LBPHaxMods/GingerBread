#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GruntyDecideFightActionBaseService.h"
#include "GruntyDecideFightActionService.generated.h"

UCLASS(Blueprintable)
class UGruntyDecideFightActionService : public UGruntyDecideFightActionBaseService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DestructibleObstacleActorBB;
    
    UGruntyDecideFightActionService();

};

