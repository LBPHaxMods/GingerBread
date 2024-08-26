#pragma once
#include "CoreMinimal.h"
#include "Auth_Origin.generated.h"

USTRUCT(BlueprintType)
struct FAuth_Origin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    SONYOTG_API FAuth_Origin();
};

