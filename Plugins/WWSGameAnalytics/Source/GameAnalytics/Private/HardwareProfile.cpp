#include "HardwareProfile.h"

UHardwareProfile::UHardwareProfile() {
    this->event_type = TEXT("HardwareProfile");
    this->capable_3d = false;
    this->capable_hdr = false;
    this->refresh_rate = 0.00f;
    this->num_monitors = 0;
}

UHardwareProfile* UHardwareProfile::NewHardwareProfile() {
    return NULL;
}

void UHardwareProfile::Init(const FString& _openpsid, const FString& _language_setting) {
}


