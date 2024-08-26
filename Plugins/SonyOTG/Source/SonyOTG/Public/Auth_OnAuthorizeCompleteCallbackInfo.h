#pragma once
#include "CoreMinimal.h"
#include "Auth_Account.h"
#include "Auth_OnAuthorizeCompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuth_OnAuthorizeCompleteCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuth_Account Account;
    
    SONYOTG_API FAuth_OnAuthorizeCompleteCallbackInfo();
};

