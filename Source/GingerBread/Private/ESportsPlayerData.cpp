#include "ESportsPlayerData.h"

FESportsPlayerData::FESportsPlayerData() {
    this->Rank = 0;
    this->BestTime = 0;
    this->tier = EESportsTier::Bronze;
    this->bIsCurrentPlayer = false;
    this->TotalPlayersCount = 0;
}

