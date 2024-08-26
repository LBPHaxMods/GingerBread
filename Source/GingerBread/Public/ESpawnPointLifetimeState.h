#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointLifetimeState.generated.h"

UENUM()
enum class ESpawnPointLifetimeState : int32 {
    New,
    Enabled,
    DisablingForLS,
    DisabledForLS,
};

