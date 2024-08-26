#pragma once
#include "CoreMinimal.h"
#include "RhythmicBeatRange.generated.h"

USTRUCT(BlueprintType)
struct FRhythmicBeatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float end;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UserData;
    
    GINGERBREAD_API FRhythmicBeatRange();
};

