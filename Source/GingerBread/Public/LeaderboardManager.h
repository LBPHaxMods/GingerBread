#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TournamentBoardQueryParams.h"
#include "TournamentLeaderboard.h"
#include "TournamentLeaderboardQueryCompleteDelegate.h"
#include "LeaderboardManager.generated.h"

UCLASS(Blueprintable)
class ULeaderboardManager : public UObject {
    GENERATED_BODY()
public:
private:
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: LeaderboardPendingQueries
    // FunctionSignature is nullptr, cannot deduce function for 'MulticastInlineDelegateProperty LeaderboardPendingQueries./Script/GingerBread.LeaderboardManager:LeaderboardPendingQueries'

    
public:
    ULeaderboardManager();

    UFUNCTION(BlueprintCallable)
    void QueryLeaderboard(FTournamentBoardQueryParams QueryParams, const FTournamentLeaderboardQueryComplete& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTournamentLeaderboard GetLeaderboard_BP(FTournamentBoardQueryParams QueryParams, bool& Result) const;
    
};

