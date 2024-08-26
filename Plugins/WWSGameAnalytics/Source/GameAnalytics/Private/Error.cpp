#include "Error.h"

UError::UError() {
    this->event_type = TEXT("Error");
}

UError* UError::NewError() {
    return NULL;
}

void UError::Init(const FString& _error_type, const FString& _error_code) {
}


