#include "GameEnd.h"

UGameEnd::UGameEnd() {
    this->event_type = TEXT("GameEnd");
    this->player_count = 0;
    this->player_count_local = 0;
    this->duration_secs = 0;
    this->duration_gameplay_secs = 0;
    this->is_completed = false;
    this->is_online = false;
}

UGameEnd* UGameEnd::NewGameEnd() {
    return NULL;
}

void UGameEnd::Init(const FString& _game_id, const FString& _level_id, int32 _player_count, int32 _duration_secs, bool _is_completed, bool _is_online) {
}


