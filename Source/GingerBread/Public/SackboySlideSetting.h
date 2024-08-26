#pragma once
#include "CoreMinimal.h"
#include "SackboySlideSetting.generated.h"

USTRUCT(BlueprintType)
struct FSackboySlideSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float targetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToTargetSpeed;
    
    GINGERBREAD_API FSackboySlideSetting();
};

