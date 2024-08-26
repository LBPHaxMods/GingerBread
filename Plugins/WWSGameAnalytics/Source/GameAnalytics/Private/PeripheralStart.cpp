#include "PeripheralStart.h"

UPeripheralStart::UPeripheralStart() {
    this->event_type = TEXT("PeripheralStart");
    this->peripheral_player_num = 0;
}

UPeripheralStart* UPeripheralStart::NewPeripheralStart() {
    return NULL;
}

void UPeripheralStart::Init(const FString& _openpsid, const FString& _peripheral_session_id, const FString& _peripheral_type, const FString& _peripheral_model, const FString& _peripheral_id, const FString& _public_user_id, int32 _peripheral_player_num, const FString& _peripheral_connection) {
}


