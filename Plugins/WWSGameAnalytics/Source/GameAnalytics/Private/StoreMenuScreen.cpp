#include "StoreMenuScreen.h"

UStoreMenuScreen::UStoreMenuScreen() {
    this->event_type = TEXT("StoreMenuScreen");
}

UStoreMenuScreen* UStoreMenuScreen::NewStoreMenuScreen() {
    return NULL;
}

void UStoreMenuScreen::Init(const FString& _store_session_id, const FString& _screen_id) {
}


