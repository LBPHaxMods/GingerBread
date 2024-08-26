#pragma once
#include "CoreMinimal.h"
#include "VexFinalTileGridCoords.h"
#include "VexFinalTileShuffleMovement.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalTileShuffleMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalTileGridCoords StartCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalTileGridCoords EndCoords;
    
    GINGERBREAD_API FVexFinalTileShuffleMovement();
};

