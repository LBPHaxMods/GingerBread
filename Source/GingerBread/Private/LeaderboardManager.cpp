#include "LeaderboardManager.h"

ULeaderboardManager::ULeaderboardManager() {
}

void ULeaderboardManager::QueryLeaderboard(FTournamentBoardQueryParams QueryParams, const FTournamentLeaderboardQueryComplete& Callback) {
}

FTournamentLeaderboard ULeaderboardManager::GetLeaderboard_BP(FTournamentBoardQueryParams QueryParams, bool& Result) const {
    return FTournamentLeaderboard{};
}


