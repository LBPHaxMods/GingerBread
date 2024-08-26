#pragma once
#include "CoreMinimal.h"
#include "ChunkSetType.generated.h"

UENUM(BlueprintType)
enum class ChunkSetType : uint8 {
    MainGameAssets,
    MainGameLocalizedAssets,
    DLCAssets,
    DLCLocalizedAssets,
    MaxChunkSetType,
};

