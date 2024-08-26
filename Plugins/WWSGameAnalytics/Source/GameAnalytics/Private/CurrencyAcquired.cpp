#include "CurrencyAcquired.h"

UCurrencyAcquired::UCurrencyAcquired() {
    this->event_type = TEXT("CurrencyAcquired");
    this->Amount = 0.00f;
    this->real_world_currency_price = 0.00f;
}

UCurrencyAcquired* UCurrencyAcquired::NewCurrencyAcquired() {
    return NULL;
}

void UCurrencyAcquired::Init() {
}


