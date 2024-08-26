#pragma once
#include "CoreMinimal.h"
#include "Config_PSNRegistration.generated.h"

USTRUCT(BlueprintType)
struct FConfig_PSNRegistration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    SONYOTG_API FConfig_PSNRegistration();
};

