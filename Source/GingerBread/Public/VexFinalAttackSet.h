#pragma once
#include "CoreMinimal.h"
#include "VexFinalAttackSet.generated.h"

class UVexFinalAttackAction;

USTRUCT(BlueprintType)
struct FVexFinalAttackSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVexFinalAttackAction*> AttackActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FinishOffScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostActionsDelay;
    
    GINGERBREAD_API FVexFinalAttackSet();
};

