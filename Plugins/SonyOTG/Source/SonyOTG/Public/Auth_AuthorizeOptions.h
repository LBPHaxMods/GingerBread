#pragma once
#include "CoreMinimal.h"
#include "Auth_AuthorizeOptions.generated.h"

USTRUCT(BlueprintType)
struct FAuth_AuthorizeOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    SONYOTG_API FAuth_AuthorizeOptions();
};

