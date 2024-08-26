#pragma once
#include "CoreMinimal.h"
#include "Auth_Origin.h"
#include "Auth_PSN_Origin_Attributes.h"
#include "Auth_PSN_Origin.generated.h"

USTRUCT(BlueprintType)
struct FAuth_PSN_Origin : public FAuth_Origin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuth_PSN_Origin_Attributes Attributes;
    
    SONYOTG_API FAuth_PSN_Origin();
};

