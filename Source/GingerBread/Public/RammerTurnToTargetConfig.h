#pragma once
#include "CoreMinimal.h"
#include "RammerTurnToTargetConfig.generated.h"

USTRUCT(BlueprintType)
struct FRammerTurnToTargetConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictAheadSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishTurnTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    GINGERBREAD_API FRammerTurnToTargetConfig();
};

