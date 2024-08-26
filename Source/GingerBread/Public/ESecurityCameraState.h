#pragma once
#include "CoreMinimal.h"
#include "ESecurityCameraState.generated.h"

UENUM(BlueprintType)
namespace ESecurityCameraState {
    enum Type {
        Idle,
        Moving,
        Tracking,
    };
}

