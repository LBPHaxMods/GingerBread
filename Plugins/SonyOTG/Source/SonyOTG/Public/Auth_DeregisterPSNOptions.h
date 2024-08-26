#pragma once
#include "CoreMinimal.h"
#include "Auth_DeregisterPSNOptions.generated.h"

USTRUCT(BlueprintType)
struct FAuth_DeregisterPSNOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString accountId;
    
    SONYOTG_API FAuth_DeregisterPSNOptions();
};

