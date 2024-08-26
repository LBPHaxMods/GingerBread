#include "KingFroogleConfigStompAmazon.h"

UKingFroogleConfigStompAmazon::UKingFroogleConfigStompAmazon() {
    this->ConsecutiveStompsPerPhase.AddDefaulted(3);
    this->InterStompDelayPerPhase.AddDefaulted(3);
    this->StompCooldownPerPhase.AddDefaulted(4);
}


