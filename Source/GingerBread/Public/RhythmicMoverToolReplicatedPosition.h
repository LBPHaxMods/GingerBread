#pragma once
#include "CoreMinimal.h"
#include "RhythmicMoverToolKeyframeIdentifier.h"
#include "RhythmicMoverToolReplicatedPosition.generated.h"

USTRUCT(BlueprintType)
struct FRhythmicMoverToolReplicatedPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicMoverToolKeyframeIdentifier CurrentKeyframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicMoverToolKeyframeIdentifier PreviousKeyframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMotionAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousMotionAlpha;
    
    GINGERBREAD_API FRhythmicMoverToolReplicatedPosition();
};

