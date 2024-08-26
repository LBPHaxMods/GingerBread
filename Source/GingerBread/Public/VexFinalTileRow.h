#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VexFinalTileRow.generated.h"

class AVexFinalTile;

USTRUCT(BlueprintType)
struct FVexFinalTileRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalTile*> Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TileLocations;
    
    GINGERBREAD_API FVexFinalTileRow();
};

