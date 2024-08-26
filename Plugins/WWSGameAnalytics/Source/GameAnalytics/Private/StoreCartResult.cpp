#include "StoreCartResult.h"

UStoreCartResult::UStoreCartResult() {
    this->event_type = TEXT("StoreCartResult");
}

UStoreCartResult* UStoreCartResult::NewStoreCartResult() {
    return NULL;
}

void UStoreCartResult::Init(const FString& _store_session_id, const FString& _result_code) {
}


