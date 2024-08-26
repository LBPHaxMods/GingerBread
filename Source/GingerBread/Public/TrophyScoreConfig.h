#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrophyScoreConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=TrophyScore)
class GINGERBREAD_API UTrophyScoreConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeLostPercentageDeduction;
    
    UTrophyScoreConfig();

};

