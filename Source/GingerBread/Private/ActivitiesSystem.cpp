#include "ActivitiesSystem.h"

UActivitiesSystem::UActivitiesSystem() {
    this->TablesHandler = NULL;
    this->MatchesSystem = NULL;
    this->DirectLoadingSystem = NULL;
    this->ActivityStrings = NULL;
}

void UActivitiesSystem::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void UActivitiesSystem::NotifyZoneUnlocked_BP(const ELevelType InWorldID, int32 InZoneID) {
}

void UActivitiesSystem::NotifyTournamentStatusChanged(FName TournamentID, ETournamentStatus NewStaus) {
}

void UActivitiesSystem::NotifySelectedKnightTrial() {
}

void UActivitiesSystem::NotifyBossFightBegin() {
}

void UActivitiesSystem::NotifyBossDefeated() {
}


