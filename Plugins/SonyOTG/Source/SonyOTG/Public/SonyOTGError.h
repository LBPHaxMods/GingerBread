#pragma once
#include "CoreMinimal.h"
#include "SonyOTGError.generated.h"

USTRUCT(BlueprintType)
struct FSonyOTGError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    SONYOTG_API FSonyOTGError();
};

