#pragma once
#include "CoreMinimal.h"
#include "EHudAmbientAxis.h"
#include "EHudAmbientTransformType.h"
#include "HudAmbientMovementRhythmicSettings.generated.h"

USTRUCT(BlueprintType)
struct FHudAmbientMovementRhythmicSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudAmbientTransformType TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudAmbientAxis AxisToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatBuildupLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatCooldownLength;
    
    GINGERBREAD_API FHudAmbientMovementRhythmicSettings();
};

