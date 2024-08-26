#include "Exception.h"

UException::UException() {
    this->event_type = TEXT("Exception");
}

UException* UException::NewException() {
    return NULL;
}

void UException::Init() {
}


