#include "WAMHoleInfo.h"

FWAMHoleInfo::FWAMHoleInfo() {
    this->Hole = NULL;
    this->WorshipPreGame = false;
    this->WorshipPostGame = false;
    this->CelebrateOffsetTime = 0.00f;
    this->Round = 0;
    this->ReqNumPlayers = EWAMMoleReqPlayerEnum::AnyNumberOfPlayers;
}

