#pragma once
#include "CoreMinimal.h"
#include "EWobbleOptions.generated.h"

UENUM(BlueprintType)
enum class EWobbleOptions : uint8 {
    EnableWobble,
    EnableDebugging,
    ShowNeckAndHeadBones,
    SetWobbleExternally,
};

