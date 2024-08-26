#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HandIKConfig.h"
#include "ConfigSackboyGrabDefaults.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyGrab)
class UConfigSackboyGrabDefaults : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationUnitsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationDegreesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundReleaseTollerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandIKConfig HandIKConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StruggleSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StruggleBlendSpeed;
    
    UConfigSackboyGrabDefaults();

};

