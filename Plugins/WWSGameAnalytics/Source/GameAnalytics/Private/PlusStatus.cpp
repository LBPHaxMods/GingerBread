#include "PlusStatus.h"

UPlusStatus::UPlusStatus() {
    this->event_type = TEXT("PlusStatus");
    this->is_authorized = false;
}

UPlusStatus* UPlusStatus::NewPlusStatus() {
    return NULL;
}

void UPlusStatus::Init(const FString& _user_id, bool _is_authorized) {
}


