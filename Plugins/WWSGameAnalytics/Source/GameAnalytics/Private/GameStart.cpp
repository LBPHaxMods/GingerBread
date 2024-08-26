#include "GameStart.h"

UGameStart::UGameStart() {
    this->event_type = TEXT("GameStart");
    this->player_count = 0;
    this->player_count_local = 0;
    this->is_online = false;
}

UGameStart* UGameStart::NewGameStart() {
    return NULL;
}

void UGameStart::Init(const FString& _game_id, const FString& _level_id, int32 _player_count, bool _is_online) {
}


