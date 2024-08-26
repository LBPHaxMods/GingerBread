#pragma once
#include "CoreMinimal.h"
#include "EVexFinalFight2ArenaDistanceState.h"
#include "VexFinalFight2ArenaDistanceServerState.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalFight2ArenaDistanceServerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexFinalFight2ArenaDistanceState Fight2DistanceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFight2DistanceTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fight2DistanceTimer;
    
    GINGERBREAD_API FVexFinalFight2ArenaDistanceServerState();
};

