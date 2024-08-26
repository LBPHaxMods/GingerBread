#pragma once
#include "CoreMinimal.h"
#include "Auth_Account.h"
#include "Auth_OnAuthorizeCompletePrivateCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuth_OnAuthorizeCompletePrivateCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuth_Account Account;
    
    SONYOTG_API FAuth_OnAuthorizeCompletePrivateCallbackInfo();
};

