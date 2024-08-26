#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConfigSackboyYanked.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyYanked)
class UConfigSackboyYanked : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYankedSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTargetTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultYankDelay;
    
    UConfigSackboyYanked();

};

