#include "NetworkProfile.h"

UNetworkProfile::UNetworkProfile() {
    this->event_type = TEXT("NetworkProfile");
    this->nat_type = 0;
    this->wifi = false;
    this->bw_upload_bps = 0.00f;
    this->bw_download_bps = 0.00f;
}

UNetworkProfile* UNetworkProfile::NewNetworkProfile() {
    return NULL;
}

void UNetworkProfile::Init(int32 _nat_type, bool _wifi) {
}


