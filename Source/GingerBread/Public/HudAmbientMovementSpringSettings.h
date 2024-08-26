#pragma once
#include "CoreMinimal.h"
#include "HudAmbientMovementSpringSettings.generated.h"

USTRUCT(BlueprintType)
struct FHudAmbientMovementSpringSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringDampingFactor;
    
    GINGERBREAD_API FHudAmbientMovementSpringSettings();
};

