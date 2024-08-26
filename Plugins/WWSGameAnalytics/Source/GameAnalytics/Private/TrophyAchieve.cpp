#include "TrophyAchieve.h"

UTrophyAchieve::UTrophyAchieve() {
    this->event_type = TEXT("TrophyAchieve");
    this->is_first_time = false;
}

UTrophyAchieve* UTrophyAchieve::NewTrophyAchieve() {
    return NULL;
}

void UTrophyAchieve::Init(const FString& _trophy_id) {
}


