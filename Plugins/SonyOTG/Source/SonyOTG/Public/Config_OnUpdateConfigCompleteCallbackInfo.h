#pragma once
#include "CoreMinimal.h"
#include "Config_ConfigData.h"
#include "Config_OnUpdateConfigCompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FConfig_OnUpdateConfigCompleteCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfig_ConfigData Data;
    
    SONYOTG_API FConfig_OnUpdateConfigCompleteCallbackInfo();
};

