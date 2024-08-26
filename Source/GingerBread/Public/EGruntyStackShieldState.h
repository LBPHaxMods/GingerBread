#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackShieldState.generated.h"

UENUM(BlueprintType)
enum class EGruntyStackShieldState : uint8 {
    NoShield,
    ShieldPrimary,
    ShieldSecondary,
};

