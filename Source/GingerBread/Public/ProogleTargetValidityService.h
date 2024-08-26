#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EAttackType.h"
#include "GingerbreadBTServiceNode.h"
#include "ProogleTargetValidityService.generated.h"

class ASackboy;

UCLASS(Blueprintable)
class GINGERBREAD_API UProogleTargetValidityService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsTargetValidBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hysteresis;
    
    UProogleTargetValidityService();

protected:
    UFUNCTION(BlueprintCallable)
    void SackboyDied(ASackboy* Sackboy);
    
};

