#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIConfigBase.h"
#include "AICoordinatorConfigGenericBase.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, DefaultConfig, Config=AICoordinatorGeneric)
class UAICoordinatorConfigGenericBase : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AlertDelayCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AlertDelayCurve;
    
    UAICoordinatorConfigGenericBase();

};

