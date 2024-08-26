#include "CurrencySpent.h"

UCurrencySpent::UCurrencySpent() {
    this->event_type = TEXT("CurrencySpent");
    this->Amount = 0.00f;
}

UCurrencySpent* UCurrencySpent::NewCurrencySpent() {
    return NULL;
}

void UCurrencySpent::Init() {
}


