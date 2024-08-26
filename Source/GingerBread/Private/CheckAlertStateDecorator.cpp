#include "CheckAlertStateDecorator.h"

UCheckAlertStateDecorator::UCheckAlertStateDecorator() {
    this->NodeName = TEXT("Check Alert State");
    this->IsAlert = EAlertState::Idle;
}


