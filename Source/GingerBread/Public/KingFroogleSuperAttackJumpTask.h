#pragma once
#include "CoreMinimal.h"
#include "ProogleSuperAttackJumpTask.h"
#include "KingFroogleSuperAttackJumpTask.generated.h"

UCLASS(Blueprintable)
class UKingFroogleSuperAttackJumpTask : public UProogleSuperAttackJumpTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGoingAway;
    
    UKingFroogleSuperAttackJumpTask();

};

