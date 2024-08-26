#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlot.h"
#include "GingerbreadPlayerId.h"
#include "ScoreboardLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FScoreboardLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadPlayerId PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerSlot UISlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAccrued;
    
    GINGERBREAD_API FScoreboardLeaderboardData();
};

