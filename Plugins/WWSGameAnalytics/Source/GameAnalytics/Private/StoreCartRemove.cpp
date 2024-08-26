#include "StoreCartRemove.h"

UStoreCartRemove::UStoreCartRemove() {
    this->event_type = TEXT("StoreCartRemove");
}

UStoreCartRemove* UStoreCartRemove::NewStoreCartRemove() {
    return NULL;
}

void UStoreCartRemove::Init(const FString& _store_session_id, const FString& _sku_id) {
}


