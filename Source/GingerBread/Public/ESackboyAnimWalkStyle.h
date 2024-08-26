#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimWalkStyle.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimWalkStyle : uint8 {
    Standard,
    WorldMap,
    PushPull,
    Pulled,
    Tightrope,
    Skidding,
    CarryingToy,
    CraftCutterStowed,
};

