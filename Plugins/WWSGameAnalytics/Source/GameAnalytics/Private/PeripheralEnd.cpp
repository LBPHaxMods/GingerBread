#include "PeripheralEnd.h"

UPeripheralEnd::UPeripheralEnd() {
    this->event_type = TEXT("PeripheralEnd");
    this->peripheral_player_num = 0;
}

UPeripheralEnd* UPeripheralEnd::NewPeripheralEnd() {
    return NULL;
}

void UPeripheralEnd::Init(const FString& _openpsid, const FString& _peripheral_session_id, const FString& _peripheral_type, const FString& _peripheral_model, const FString& _peripheral_id, const FString& _psn_account, int32 _peripheral_player_num, const FString& _peripheral_connection) {
}


