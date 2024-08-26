#include "AuthFailure.h"

UAuthFailure::UAuthFailure() {
    this->event_type = TEXT("AuthFailure");
}

UAuthFailure* UAuthFailure::NewAuthFailure() {
    return NULL;
}

void UAuthFailure::Init() {
}


