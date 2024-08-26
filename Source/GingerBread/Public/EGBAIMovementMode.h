#pragma once
#include "CoreMinimal.h"
#include "EGBAIMovementMode.generated.h"

UENUM(BlueprintType)
enum EGBAIMovementMode {
    MOVE_GBAI_None,
    MOVE_GBAI_Jumping,
    MOVE_GBAI_Turning,
    MOVE_GBAI_Sliding,
};

