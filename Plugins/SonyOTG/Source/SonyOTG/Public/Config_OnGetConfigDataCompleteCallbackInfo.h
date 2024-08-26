#pragma once
#include "CoreMinimal.h"
#include "Config_ConfigData.h"
#include "Config_OnGetConfigDataCompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FConfig_OnGetConfigDataCompleteCallbackInfo : public FConfig_ConfigData {
    GENERATED_BODY()
public:
    SONYOTG_API FConfig_OnGetConfigDataCompleteCallbackInfo();
};

