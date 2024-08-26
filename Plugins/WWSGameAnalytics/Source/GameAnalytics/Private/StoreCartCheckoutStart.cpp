#include "StoreCartCheckoutStart.h"

UStoreCartCheckoutStart::UStoreCartCheckoutStart() {
    this->event_type = TEXT("StoreCartCheckoutStart");
}

UStoreCartCheckoutStart* UStoreCartCheckoutStart::NewStoreCartCheckoutStart() {
    return NULL;
}

void UStoreCartCheckoutStart::Init(const FString& _store_session_id) {
}


