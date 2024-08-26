#include "GingerbreadTimedChallengeGameState.h"
#include "EAllPlayersDiedBehaviour.h"

AGingerbreadTimedChallengeGameState::AGingerbreadTimedChallengeGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLivesSystemEnabled = false;
    this->AllPlayersDiedBehaviour = EAllPlayersDiedBehaviour::LevelReset;
}

void AGingerbreadTimedChallengeGameState::GetTimedChallengeGameState(const UObject* WorldContextObject, AGingerbreadTimedChallengeGameState*& TimedChallengeGameState, EObjectValidity& Out_GameStateValidity) {
}


