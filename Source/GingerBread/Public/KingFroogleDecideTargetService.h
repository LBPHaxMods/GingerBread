#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTServiceNode.h"
#include "KingFroogleDecideTargetService.generated.h"

UCLASS(Blueprintable)
class UKingFroogleDecideTargetService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutTargetBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LastAttackedTargetBB;
    
    UKingFroogleDecideTargetService();

};

