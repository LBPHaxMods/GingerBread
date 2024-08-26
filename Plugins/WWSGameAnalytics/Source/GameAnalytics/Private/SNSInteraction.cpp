#include "SNSInteraction.h"

USNSInteraction::USNSInteraction() {
    this->event_type = TEXT("SNSInteraction");
    this->target_np_account_id = 0;
}

USNSInteraction* USNSInteraction::NewSNSInteraction() {
    return NULL;
}

void USNSInteraction::Init(const FString& _interaction_type) {
}


