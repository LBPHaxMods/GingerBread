#pragma once
#include "CoreMinimal.h"
#include "TournamentLeaderboard.h"
#include "TournamentLeaderboardQueryCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FTournamentLeaderboardQueryComplete, const FTournamentLeaderboard&, ResultBoard, bool, bSuccess);

