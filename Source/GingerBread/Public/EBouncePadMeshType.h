#pragma once
#include "CoreMinimal.h"
#include "EBouncePadMeshType.generated.h"

UENUM(BlueprintType)
enum class EBouncePadMeshType : uint8 {
    UseWorldLocation,
    Amazon,
    Undersea,
    Himalayas,
    Space,
    Craftworld,
    Void,
};

