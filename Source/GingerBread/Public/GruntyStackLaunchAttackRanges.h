#pragma once
#include "CoreMinimal.h"
#include "GruntyStackLaunchAttackRanges.generated.h"

USTRUCT(BlueprintType)
struct FGruntyStackLaunchAttackRanges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLaunchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLaunchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeToStartLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CantLaunchWaitDistance;
    
    GINGERBREAD_API FGruntyStackLaunchAttackRanges();
};

