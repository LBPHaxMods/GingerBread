#include "AchievementManager.h"

UAchievementManager::UAchievementManager() {
}

void UAchievementManager::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& Player, bool forced) {
}

void UAchievementManager::AwardAchievementProgressForAllPlayers(const UObject* WorldContextObject, const FName& AchievementName, int32 ActionCountIncrement) {
}

void UAchievementManager::AwardAchievementProgress(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const FName& AchievementName, int32 ActionCountIncrement) {
}


