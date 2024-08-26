#pragma once
#include "CoreMinimal.h"
#include "VexFinalTileShuffleMovement.h"
#include "VexFinalTileManagerServerRequestParameters.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalTileManagerServerRequestParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVexFinalTileShuffleMovement> ShuffleMovements;
    
    GINGERBREAD_API FVexFinalTileManagerServerRequestParameters();
};

