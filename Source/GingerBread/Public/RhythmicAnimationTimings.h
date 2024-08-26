#pragma once
#include "CoreMinimal.h"
#include "RhythmicAnimationTimings.generated.h"

USTRUCT(BlueprintType)
struct FRhythmicAnimationTimings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatsPerLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstBeatStartTime;
    
    GINGERBREAD_API FRhythmicAnimationTimings();
};

