#pragma once
#include "CoreMinimal.h"
#include "EPlayGoDialogMode.generated.h"

UENUM(BlueprintType)
enum class EPlayGoDialogMode : uint8 {
    LevelNotReady,
    InstallNotComplete,
    InstallError,
};

