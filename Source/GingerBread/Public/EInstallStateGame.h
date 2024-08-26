#pragma once
#include "CoreMinimal.h"
#include "EInstallStateGame.generated.h"

UENUM(BlueprintType)
enum class EInstallStateGame : uint8 {
    InstallInProgress,
    AllInstalled,
    InstallStateError,
};

