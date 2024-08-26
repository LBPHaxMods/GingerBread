#include "UserProfile.h"

UUserProfile::UUserProfile() {
    this->event_type = TEXT("UserProfile");
    this->is_guest = false;
    this->is_sub_account = false;
    this->Age = 0;
    this->restrict_chat = false;
    this->restrict_ugm = false;
    this->restrict_store_content = false;
}

UUserProfile* UUserProfile::NewUserProfile() {
    return NULL;
}

void UUserProfile::Init(const FString& _psn_account, const FString& _np_account_id, const FString& _region, const FString& _language) {
}


