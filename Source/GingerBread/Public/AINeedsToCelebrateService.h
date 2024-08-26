#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTServiceNode.h"
#include "HitPointModifyResult.h"
#include "AINeedsToCelebrateService.generated.h"

UCLASS(Blueprintable)
class UAINeedsToCelebrateService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutNeedsToCelebrateBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutIsSoloCelebrationBB;
    
    UAINeedsToCelebrateService();

private:
    UFUNCTION(BlueprintCallable)
    void OnSackboyTookDamage(const FHitPointModifyResult& Result);
    
};

