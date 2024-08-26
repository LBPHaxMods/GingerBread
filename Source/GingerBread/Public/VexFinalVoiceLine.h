#pragma once
#include "CoreMinimal.h"
#include "VexFinalVoiceLine.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalVoiceLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VoiceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowSubtitles;
    
    GINGERBREAD_API FVexFinalVoiceLine();
};

