#include "TreasurePodContentSetup.h"

FTreasurePodContentSetup::FTreasurePodContentSetup() {
    this->Content = ETreasurePodContents::ScoreBubble;
    this->Amount = 0;
    this->Enemy = NULL;
    this->CombatToy = NULL;
    this->Toy = ETreasurePodToys::SlapFish;
}

