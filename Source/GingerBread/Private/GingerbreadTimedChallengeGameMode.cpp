#include "GingerbreadTimedChallengeGameMode.h"
#include "GingerbreadHUD.h"
#include "GingerbreadPlayerController.h"
#include "GingerbreadPlayerState.h"
#include "GingerbreadTimedChallengeGameState.h"

AGingerbreadTimedChallengeGameMode::AGingerbreadTimedChallengeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AGingerbreadTimedChallengeGameState::StaticClass();
    this->PlayerControllerClass = AGingerbreadPlayerController::StaticClass();
    this->PlayerStateClass = AGingerbreadPlayerState::StaticClass();
    this->HUDClass = AGingerbreadHUD::StaticClass();
}

void AGingerbreadTimedChallengeGameMode::SetIsPendingReset(bool bPendingReset) {
}

void AGingerbreadTimedChallengeGameMode::SetHasActivatedEndSequenceSpawnPoint(bool bActivated) {
}

bool AGingerbreadTimedChallengeGameMode::IsPendingReset() const {
    return false;
}

bool AGingerbreadTimedChallengeGameMode::HasActivatedEndSequenceSpawnPoint() const {
    return false;
}

void AGingerbreadTimedChallengeGameMode::HACK_OnLevelResetManagerAvailable(AActor* Manager) {
}

void AGingerbreadTimedChallengeGameMode::GetTimedChallengeGameMode(const UObject* WorldContextObject, AGingerbreadTimedChallengeGameMode*& TimedChallengeGameMode, EObjectValidity& Out_GameModeValidity) {
}


