#pragma once
#include "CoreMinimal.h"
#include "EBaseGameModeState.generated.h"

UENUM(BlueprintType)
enum class EBaseGameModeState : uint8 {
    BASE_WaitOnLocalHostPersistentData,
    BASE_InitialiseWorldMapData,
    BASE_SyncHostReplicatedData,
    BASE_GameModeStateReady,
};

