#pragma once
#include "CoreMinimal.h"
#include "Auth_OnGetPSNRegistrationURICompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuth_OnGetPSNRegistrationURICompleteCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    SONYOTG_API FAuth_OnGetPSNRegistrationURICompleteCallbackInfo();
};

