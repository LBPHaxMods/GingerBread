#pragma once
#include "CoreMinimal.h"
#include "Auth_PSN_Origin.h"
#include "Auth_OnGetRegisteredPSNAccountCompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuth_OnGetRegisteredPSNAccountCompleteCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuth_PSN_Origin Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString createTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updateTime;
    
    SONYOTG_API FAuth_OnGetRegisteredPSNAccountCompleteCallbackInfo();
};

