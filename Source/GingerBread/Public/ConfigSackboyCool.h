#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EScoreMultiplierFilter.h"
#include "ConfigSackboyCool.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyCool)
class UConfigSackboyCool : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreAwardedPerScoreBubble;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EScoreMultiplierFilter::Type> MultiplierFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMultiplierTiers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MultiplierValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MultiplierPointsRequired;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MultiplierDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeBurstDuration;
    
    UConfigSackboyCool();

};

