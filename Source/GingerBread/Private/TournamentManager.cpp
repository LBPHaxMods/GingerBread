#include "TournamentManager.h"

UTournamentManager::UTournamentManager() {
}

void UTournamentManager::OnTournamentTitleStorageChanged() {
}

bool UTournamentManager::IsTournamentsModeAllowed() {
    return false;
}

bool UTournamentManager::IsThereAnyActiveTournament() const {
    return false;
}

bool UTournamentManager::IsCurrentLevelInTournamentMode() const {
    return false;
}

bool UTournamentManager::IsCurrentLevelActiveTournamentLevel() {
    return false;
}

bool UTournamentManager::HasTournamentTermsAccepted(const FName InTournamentID) const {
    return false;
}

FTimespan UTournamentManager::GetRemainingTimeToStart(const FName InTournamentID) const {
    return FTimespan{};
}

FTimespan UTournamentManager::GetRemainingTimeToEnd(const FName InTournamentID) const {
    return FTimespan{};
}

UTournamentManager* UTournamentManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

FName UTournamentManager::GetFirstActiveTournamentLevel() const {
    return NAME_None;
}

bool UTournamentManager::GetActiveTournamentSavedBestTime(FTimespan& OutTimespan) const {
    return false;
}

FName UTournamentManager::GetActiveOrUpcomingTournamentID() const {
    return NAME_None;
}

void UTournamentManager::CheckForTournamentChange() {
}

bool UTournamentManager::AcceptTournamentTerms(const FName InTournamentID, bool bShouldSave) {
    return false;
}


