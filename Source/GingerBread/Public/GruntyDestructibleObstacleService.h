#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTServiceNode.h"
#include "GruntyDestructibleObstacleService.generated.h"

UCLASS(Blueprintable)
class UGruntyDestructibleObstacleService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DestructibleObstacleActorBB;
    
    UGruntyDestructibleObstacleService();

};

