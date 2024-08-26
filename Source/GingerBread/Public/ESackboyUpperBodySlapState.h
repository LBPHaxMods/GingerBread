#pragma once
#include "CoreMinimal.h"
#include "ESackboyUpperBodySlapState.generated.h"

UENUM(BlueprintType)
enum class ESackboyUpperBodySlapState : uint8 {
    FirstSlap,
    SecondSlap,
    FirstWeaponSlap,
    SecondWeaponSlap,
};

