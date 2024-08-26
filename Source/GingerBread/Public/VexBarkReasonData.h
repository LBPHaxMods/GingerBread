#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterPhase.h"
#include "VexBark.h"
#include "VexBarkReasonData.generated.h"

USTRUCT(BlueprintType)
struct FVexBarkReasonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSeparateFirstTimeBark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexBark SeparateFirstTimeBark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexEncounterPhase, FVexBark> BarkPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarkPlayChance;
    
    GINGERBREAD_API FVexBarkReasonData();
};

