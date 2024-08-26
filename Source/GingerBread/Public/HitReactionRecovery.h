#pragma once
#include "CoreMinimal.h"
#include "HitReactionRecovery.generated.h"

USTRUCT(BlueprintType)
struct FHitReactionRecovery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EarlyBreakoutOffset;
    
    GINGERBREAD_API FHitReactionRecovery();
};

