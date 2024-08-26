#pragma once
#include "CoreMinimal.h"
#include "EStationaryShooterGenericState.generated.h"

UENUM(BlueprintType)
enum class EStationaryShooterGenericState : uint8 {
    Invalid,
    Idle,
    Alert,
    Shooting,
    Celebrating,
    Protecting,
    Dead,
    NumStates,
};

