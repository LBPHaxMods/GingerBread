#pragma once
#include "CoreMinimal.h"
#include "EBeeDeathType.generated.h"

UENUM(BlueprintType)
enum class EBeeDeathType : uint8 {
    WasPopped,
    Expired,
    None,
};

