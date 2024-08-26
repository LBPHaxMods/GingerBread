#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTServiceNode.h"
#include "RammerCanAttackService.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API URammerCanAttackService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutCanNormalAttackBB;
    
    URammerCanAttackService();

};

