#include "Stopwatch.h"

AStopwatch::AStopwatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimerHUDComponent = NULL;
    this->CurrentTime = 0.00f;
    this->GoldTime = 0.00f;
    this->SilverTime = 0.00f;
    this->BronzeTime = 0.00f;
    this->IsCountdown = false;
    this->Winner = NULL;
    this->AlarmSent = false;
}

void AStopwatch::TrackPlayerTimeChange(ASackboy* Sackboy, float TimeChange) {
}



void AStopwatch::SetWinner(ASackboy* WinningSackboy) {
}

TMap<FGingerbreadPlayerId, float> AStopwatch::GetTotalPlayerTimeMap() const {
    return TMap<FGingerbreadPlayerId, float>();
}

TMap<FGingerbreadPlayerId, float> AStopwatch::GetRewardMap() const {
    return TMap<FGingerbreadPlayerId, float>();
}

TMap<FGingerbreadPlayerId, float> AStopwatch::GetPenaltyMap() const {
    return TMap<FGingerbreadPlayerId, float>();
}

void AStopwatch::AdjustTime(float AdjustmentTime, AActor* Culprit) {
}


