#include "PlayerJoin.h"

UPlayerJoin::UPlayerJoin() {
    this->event_type = TEXT("PlayerJoin");
    this->player_count = 0;
    this->player_count_local = 0;
}

UPlayerJoin* UPlayerJoin::NewPlayerJoin() {
    return NULL;
}

void UPlayerJoin::Init(const FString& _game_id, const FString& _psn_account, int32 _player_count) {
}


