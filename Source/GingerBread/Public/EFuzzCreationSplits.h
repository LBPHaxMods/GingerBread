#pragma once
#include "CoreMinimal.h"
#include "EFuzzCreationSplits.generated.h"

UENUM(BlueprintType)
enum class EFuzzCreationSplits : uint8 {
    Use_Existing,
    Create_New,
};

