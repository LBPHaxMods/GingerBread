#include "StoreStart.h"

UStoreStart::UStoreStart() {
    this->event_type = TEXT("StoreStart");
}

UStoreStart* UStoreStart::NewStoreStart() {
    return NULL;
}

void UStoreStart::Init(const FString& _store_session_id) {
}


