#pragma once
#include "CoreMinimal.h"
#include "RhythmicOneShotAnimationTimings.generated.h"

USTRUCT(BlueprintType)
struct FRhythmicOneShotAnimationTimings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumScaledDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncBeatFraction;
    
    GINGERBREAD_API FRhythmicOneShotAnimationTimings();
};

