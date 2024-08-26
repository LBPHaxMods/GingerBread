#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConfigSackboyJetpack.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyJetpack)
class UConfigSackboyJetpack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialBoost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialBoostTime;
    
    UConfigSackboyJetpack();

};

