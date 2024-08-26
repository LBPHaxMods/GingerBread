#include "BootStart.h"

UBootStart::UBootStart() {
    this->event_type = TEXT("BootStart");
    this->is_trial = false;
}

UBootStart* UBootStart::NewBootStart() {
    return NULL;
}

void UBootStart::Init(const FString& _title_name, const FString& _issuer_id, const FString& _platform, const FString& _device_type, const FString& _build_version) {
}


