#pragma once
#include "CoreMinimal.h"
#include "EDriveCameraSettingsMode.generated.h"

UENUM(BlueprintType)
enum class EDriveCameraSettingsMode : uint8 {
    DefaultCameraSettings,
    CameraSettingNodes,
};

