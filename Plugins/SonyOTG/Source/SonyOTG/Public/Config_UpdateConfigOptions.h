#pragma once
#include "CoreMinimal.h"
#include "Config_ConfigData.h"
#include "Config_UpdateConfigOptions.generated.h"

USTRUCT(BlueprintType)
struct FConfig_UpdateConfigOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfig_ConfigData Data;
    
    SONYOTG_API FConfig_UpdateConfigOptions();
};

