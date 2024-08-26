#pragma once
#include "CoreMinimal.h"
#include "HudAmbientMovementTransformSettings.h"
#include "HudAmbientMovementAxisSettings.generated.h"

USTRUCT(BlueprintType)
struct FHudAmbientMovementAxisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHudAmbientMovementTransformSettings> TranslationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHudAmbientMovementTransformSettings> RotationSettings;
    
    GINGERBREAD_API FHudAmbientMovementAxisSettings();
};

