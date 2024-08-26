#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTServiceNode.h"
#include "ProogleCanCoordinatedAttackService.generated.h"

UCLASS(Blueprintable)
class UProogleCanCoordinatedAttackService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutCanCoordinatedAttack;
    
    UProogleCanCoordinatedAttackService();

};

