#pragma once
#include "CoreMinimal.h"
#include "UI_CreditDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FUI_CreditDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutroDelay;
    
    GINGERBREAD_API FUI_CreditDisplayData();
};

