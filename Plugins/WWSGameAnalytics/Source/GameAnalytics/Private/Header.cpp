#include "Header.h"

UHeader::UHeader() {
    this->client_timezone = 0;
    this->playthrough_count = 0;
    this->time_in_game = 0.00f;
    this->Geo = NULL;
}

UHeader* UHeader::NewHeader() {
    return NULL;
}

void UHeader::Init(const FString& _user_id, const FString& _title_id, const FString& _session_id, const FString& _client_timestamp) {
}


