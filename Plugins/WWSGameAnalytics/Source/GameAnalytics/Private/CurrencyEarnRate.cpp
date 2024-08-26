#include "CurrencyEarnRate.h"

UCurrencyEarnRate::UCurrencyEarnRate() {
    this->event_type = TEXT("CurrencyEarnRate");
    this->new_earn_rate = 0.00f;
    this->old_earn_rate = 0.00f;
    this->currency_earn_period = 0.00f;
}

UCurrencyEarnRate* UCurrencyEarnRate::NewCurrencyEarnRate() {
    return NULL;
}

void UCurrencyEarnRate::Init() {
}


