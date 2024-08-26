#pragma once
#include "CoreMinimal.h"
#include "Leaderboard_UpdateBoardOptions.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboard_UpdateBoardOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString order;
    
    SONYOTG_API FLeaderboard_UpdateBoardOptions();
};

