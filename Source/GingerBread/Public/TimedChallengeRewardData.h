#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TimedChallengeRewardData.generated.h"

USTRUCT(BlueprintType)
struct FTimedChallengeRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan GoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan SilverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan BronzeTime;
    
    GINGERBREAD_API FTimedChallengeRewardData();
};

