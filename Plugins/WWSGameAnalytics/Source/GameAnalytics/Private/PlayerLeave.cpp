#include "PlayerLeave.h"

UPlayerLeave::UPlayerLeave() {
    this->event_type = TEXT("PlayerLeave");
    this->duration_secs = 0;
    this->duration_gameplay_secs = 0;
    this->player_count = 0;
    this->player_count_local = 0;
    this->is_completed = false;
}

UPlayerLeave* UPlayerLeave::NewPlayerLeave() {
    return NULL;
}

void UPlayerLeave::Init(const FString& _game_id, const FString& _level_id, const FString& _psn_account, int32 _duration_secs, int32 _player_count, bool _is_completed) {
}


