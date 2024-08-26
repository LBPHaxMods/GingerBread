#pragma once
#include "CoreMinimal.h"
#include "CameraSettings.h"
#include "TransitionSettings.h"
#include "CameraAreaSettingsWrap.generated.h"

USTRUCT(BlueprintType)
struct FCameraAreaSettingsWrap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSettings baseCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionSettings cameraTransitionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaPriority;
    
    GINGERBREAD_API FCameraAreaSettingsWrap();
};

