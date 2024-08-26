#pragma once
#include "CoreMinimal.h"
#include "Auth_Account.h"
#include "Auth_OnGetAccountsCompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuth_OnGetAccountsCompleteCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAuth_Account> Accounts;
    
    SONYOTG_API FAuth_OnGetAccountsCompleteCallbackInfo();
};

