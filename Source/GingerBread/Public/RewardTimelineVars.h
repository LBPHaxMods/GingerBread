#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RewardTimelineVars.generated.h"

USTRUCT(BlueprintType)
struct FRewardTimelineVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Translation;
    
    GINGERBREAD_API FRewardTimelineVars();
};

