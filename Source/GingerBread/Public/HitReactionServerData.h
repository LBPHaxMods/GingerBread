#pragma once
#include "CoreMinimal.h"
#include "HitReactionServerData.generated.h"

USTRUCT(BlueprintType)
struct FHitReactionServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerFinishedHR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DidntTriggerHR;
    
    GINGERBREAD_API FHitReactionServerData();
};

