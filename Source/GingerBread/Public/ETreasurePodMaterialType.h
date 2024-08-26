#pragma once
#include "CoreMinimal.h"
#include "ETreasurePodMaterialType.generated.h"

UENUM(BlueprintType)
enum class ETreasurePodMaterialType : uint8 {
    UseWorldLocation,
    Amazon,
    Undersea,
    Himalayas,
    Space,
    CraftWorld,
    Void,
};

