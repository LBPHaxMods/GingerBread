#include "StoreCartAdd.h"

UStoreCartAdd::UStoreCartAdd() {
    this->event_type = TEXT("StoreCartAdd");
}

UStoreCartAdd* UStoreCartAdd::NewStoreCartAdd() {
    return NULL;
}

void UStoreCartAdd::Init(const FString& _store_session_id, const FString& _sku_id) {
}


