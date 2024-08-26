#pragma once
#include "CoreMinimal.h"
#include "GruntyTurnConfigSettings.generated.h"

USTRUCT(BlueprintType)
struct FGruntyTurnConfigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnMinAngleForTurn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnPredictAheadSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRotationSpeed;
    
    GINGERBREAD_API FGruntyTurnConfigSettings();
};

