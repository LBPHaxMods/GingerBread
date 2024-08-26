#pragma once
#include "CoreMinimal.h"
#include "EHudAmbientAxis.h"
#include "EHudAmbientTransformType.h"
#include "HudAmbientMovementTransformSettings.generated.h"

USTRUCT(BlueprintType)
struct FHudAmbientMovementTransformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudAmbientTransformType TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudAmbientAxis AxisToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopCameraAxisDelta;
    
    GINGERBREAD_API FHudAmbientMovementTransformSettings();
};

