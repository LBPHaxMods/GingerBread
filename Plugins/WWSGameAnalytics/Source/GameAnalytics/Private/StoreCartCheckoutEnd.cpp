#include "StoreCartCheckoutEnd.h"

UStoreCartCheckoutEnd::UStoreCartCheckoutEnd() {
    this->event_type = TEXT("StoreCartCheckoutEnd");
}

UStoreCartCheckoutEnd* UStoreCartCheckoutEnd::NewStoreCartCheckoutEnd() {
    return NULL;
}

void UStoreCartCheckoutEnd::Init(const FString& _store_session_id) {
}


