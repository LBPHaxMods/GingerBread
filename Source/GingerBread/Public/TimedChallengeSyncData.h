#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeSyncData.generated.h"

USTRUCT(BlueprintType)
struct FTimedChallengeSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeOfSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncedElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTicking;
    
    GINGERBREAD_API FTimedChallengeSyncData();
};

