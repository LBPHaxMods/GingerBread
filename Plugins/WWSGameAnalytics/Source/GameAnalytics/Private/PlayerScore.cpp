#include "PlayerScore.h"

UPlayerScore::UPlayerScore() {
    this->event_type = TEXT("PlayerScore");
}

UPlayerScore* UPlayerScore::NewPlayerScore() {
    return NULL;
}

void UPlayerScore::Init(const FString& _game_id, const FString& _user_id) {
}


