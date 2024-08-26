#include "StoreItemDetailView.h"

UStoreItemDetailView::UStoreItemDetailView() {
    this->event_type = TEXT("StoreItemDetailView");
}

UStoreItemDetailView* UStoreItemDetailView::NewStoreItemDetailView() {
    return NULL;
}

void UStoreItemDetailView::Init(const FString& _store_session_id, const FString& _sku_id) {
}


