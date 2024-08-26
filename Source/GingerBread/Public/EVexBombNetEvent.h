#pragma once
#include "CoreMinimal.h"
#include "EVexBombNetEvent.generated.h"

UENUM(BlueprintType)
enum class EVexBombNetEvent : uint8 {
    StartBombTimer,
    InitialiseConveyor,
};

