#pragma once
#include "CoreMinimal.h"
#include "ERemappable_Buttons.generated.h"

UENUM(BlueprintType)
enum class ERemappable_Buttons : uint8 {
    FACE_BOTTOM,
    FACE_LEFT,
    FACE_RIGHT,
    FACE_TOP,
    DPAD_UP,
    DPAD_DOWN,
    DPAD_LEFT,
    DPAD_RIGHT,
    LEFT_SHOULDER,
    LEFT_TRIGGER,
    LEFT_STICK,
    RIGHT_SHOULDER,
    RIGHT_TRIGGER,
    RIGHT_STICK,
};

