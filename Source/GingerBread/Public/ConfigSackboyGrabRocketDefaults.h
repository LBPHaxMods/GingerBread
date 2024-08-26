#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HandIKConfig.h"
#include "ConfigSackboyGrabRocketDefaults.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyGrabRocket)
class UConfigSackboyGrabRocketDefaults : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationUnitsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationDegreesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InheritedVelocityScalar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandIKConfig HandIKConfig;
    
    UConfigSackboyGrabRocketDefaults();

};

