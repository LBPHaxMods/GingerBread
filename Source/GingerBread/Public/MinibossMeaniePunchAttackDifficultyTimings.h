#pragma once
#include "CoreMinimal.h"
#include "MinibossMeaniePunchAttackDifficultyTimings.generated.h"

USTRUCT(BlueprintType)
struct FMinibossMeaniePunchAttackDifficultyTimings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAttackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenAttacks;
    
    GINGERBREAD_API FMinibossMeaniePunchAttackDifficultyTimings();
};

