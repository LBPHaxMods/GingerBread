#pragma once
#include "CoreMinimal.h"
#include "EVexFinalTileState.h"
#include "VexFinalTileServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalTileServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexFinalTileState TileState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatyWobbleDuration;
    
    GINGERBREAD_API FVexFinalTileServerData();
};

