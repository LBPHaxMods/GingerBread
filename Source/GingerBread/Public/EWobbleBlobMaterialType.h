#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobMaterialType.generated.h"

UENUM(BlueprintType)
enum class EWobbleBlobMaterialType : uint8 {
    UseWorldLocation,
    Amazon,
    Undersea,
    Himalayas,
    Space,
    CraftWorld,
    Void,
};

