#pragma once
#include "CoreMinimal.h"
#include "Leaderboard_Board.h"
#include "Leaderboard_BoardEntry.h"
#include "Leaderboard_EntryList.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboard_EntryList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaderboard_Board board;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLeaderboard_BoardEntry> entries;
    
    SONYOTG_API FLeaderboard_EntryList();
};

