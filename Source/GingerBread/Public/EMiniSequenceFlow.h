#pragma once
#include "CoreMinimal.h"
#include "EMiniSequenceFlow.generated.h"

UENUM(BlueprintType)
enum class EMiniSequenceFlow : uint8 {
    SourceLevel,
    BeforeTargetLevel,
    AfterTargetLevel,
    Invalid,
};

