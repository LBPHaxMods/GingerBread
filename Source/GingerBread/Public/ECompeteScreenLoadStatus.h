#pragma once
#include "CoreMinimal.h"
#include "ECompeteScreenLoadStatus.generated.h"

UENUM(BlueprintType)
enum class ECompeteScreenLoadStatus : uint8 {
    None,
    Loading,
    Ready,
};

