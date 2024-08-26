#pragma once
#include "CoreMinimal.h"
#include "ChunkSetInstallRequirement.generated.h"

UENUM(BlueprintType)
enum class ChunkSetInstallRequirement : uint8 {
    AllChunks,
    SingleChunk,
    MaxChunkSetInstallReq,
};

