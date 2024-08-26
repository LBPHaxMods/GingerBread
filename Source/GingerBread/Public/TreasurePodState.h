#pragma once
#include "CoreMinimal.h"
#include "ETreasurePodState.h"
#include "TreasurePodState.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FTreasurePodState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreasurePodState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinningPrizeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* ActivatingSackboy;
    
    GINGERBREAD_API FTreasurePodState();
};

