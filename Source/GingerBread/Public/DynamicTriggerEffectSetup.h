#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TriggerEffectSetup.h"
#include "DynamicTriggerEffectSetup.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDynamicTriggerEffectSetup : public FTriggerEffectSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath StrengthCurveAsset;
    
    GINGERBREAD_API FDynamicTriggerEffectSetup();
};

