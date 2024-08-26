#pragma once
#include "CoreMinimal.h"
#include "EGruntyFightAction.generated.h"

UENUM(BlueprintType)
enum class EGruntyFightAction : uint8 {
    Wait,
    Chase,
    Attack,
    Taunt,
    AttackDestructibleObject,
};

