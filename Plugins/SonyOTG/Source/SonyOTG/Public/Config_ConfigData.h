#pragma once
#include "CoreMinimal.h"
#include "Config_ConfigData.generated.h"

USTRUCT(BlueprintType)
struct FConfig_ConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Config;
    
    SONYOTG_API FConfig_ConfigData();
};

