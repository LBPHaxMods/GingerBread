#pragma once
#include "CoreMinimal.h"
#include "MinibossMeaniePunchAttackAnimationTimings.h"
#include "MinibossMeaniePunchAttackDifficultyTimings.h"
#include "MinibossMeaniePunchAttackTimings.generated.h"

USTRUCT(BlueprintType)
struct FMinibossMeaniePunchAttackTimings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinibossMeaniePunchAttackAnimationTimings LongRangeAttackAnimationTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinibossMeaniePunchAttackAnimationTimings ShortRangeAttackAnimationTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMinibossMeaniePunchAttackDifficultyTimings> DifficultyTimings;
    
    GINGERBREAD_API FMinibossMeaniePunchAttackTimings();
};

