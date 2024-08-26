#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTServiceNode.h"
#include "HitPointModifyResult.h"
#include "StompyDecideMovementService.generated.h"

UCLASS(Blueprintable)
class UStompyDecideMovementService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetToFollowBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LastKnownLocationBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsAtTargetBB;
    
    UStompyDecideMovementService();

    UFUNCTION(BlueprintCallable)
    void SpinDamageApplied(const FHitPointModifyResult& HitResult);
    
};

