#pragma once
#include "CoreMinimal.h"
#include "Auth_PSN_Origin_Attributes.generated.h"

USTRUCT(BlueprintType)
struct FAuth_PSN_Origin_Attributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 legal_country;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Locale;
    
    SONYOTG_API FAuth_PSN_Origin_Attributes();
};

