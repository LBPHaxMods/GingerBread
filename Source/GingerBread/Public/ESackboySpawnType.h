#pragma once
#include "CoreMinimal.h"
#include "ESackboySpawnType.generated.h"

UENUM(BlueprintType)
enum ESackboySpawnType {
    FirstTime,
    Tether,
    ReloadingSpawnPoint,
    NonReloadingSpawnPoint,
};

