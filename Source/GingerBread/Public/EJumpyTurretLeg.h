#pragma once
#include "CoreMinimal.h"
#include "EJumpyTurretLeg.generated.h"

UENUM(BlueprintType)
enum class EJumpyTurretLeg : uint8 {
    Invalid,
    FrontRight,
    FrontLeft,
    BackRight,
    BackLeft,
};

