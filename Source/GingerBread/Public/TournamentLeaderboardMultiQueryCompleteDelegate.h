#pragma once
#include "CoreMinimal.h"
#include "TournamentLeaderboard.h"
#include "TournamentLeaderboardMultiQueryCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTournamentLeaderboardMultiQueryComplete, const FTournamentLeaderboard&, ResultBoard, bool, bSuccess);

