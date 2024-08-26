#pragma once
#include "CoreMinimal.h"
#include "Config_PSNRegistration.h"
#include "Config_OnGetPSNLinkConfigDataCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FConfig_OnGetPSNLinkConfigDataCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfig_PSNRegistration registration;
    
    SONYOTG_API FConfig_OnGetPSNLinkConfigDataCallbackInfo();
};

