#pragma once
#include "CoreMinimal.h"
#include "VexFinalTileGridCoords.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalTileGridCoords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    GINGERBREAD_API FVexFinalTileGridCoords();
};

