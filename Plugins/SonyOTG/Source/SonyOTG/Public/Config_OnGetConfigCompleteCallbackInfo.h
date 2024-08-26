#pragma once
#include "CoreMinimal.h"
#include "Config_ConfigData.h"
#include "Config_OnGetConfigCompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FConfig_OnGetConfigCompleteCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfig_ConfigData Data;
    
    SONYOTG_API FConfig_OnGetConfigCompleteCallbackInfo();
};

