#pragma once
#include "CoreMinimal.h"
#include "RhythmicMoverToolKeyframeIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FRhythmicMoverToolKeyframeIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveMotionKeyframe;
    
    GINGERBREAD_API FRhythmicMoverToolKeyframeIdentifier();
};

