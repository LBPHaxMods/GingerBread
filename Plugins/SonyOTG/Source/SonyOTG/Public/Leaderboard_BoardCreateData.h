#pragma once
#include "CoreMinimal.h"
#include "Leaderboard_BoardCreateData.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboard_BoardCreateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString order;
    
    SONYOTG_API FLeaderboard_BoardCreateData();
};

