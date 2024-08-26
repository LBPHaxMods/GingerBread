#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinDirection.generated.h"

UENUM(BlueprintType)
enum class EPlayerJoinDirection : uint8 {
    Joined,
    Leaving,
    Left,
};

