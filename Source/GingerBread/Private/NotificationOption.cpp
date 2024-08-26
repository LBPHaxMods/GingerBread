#include "NotificationOption.h"

FNotificationOption::FNotificationOption() {
    this->Enabled = false;
    this->Icon = NULL;
    this->useButtonOverride = false;
    this->buttonOverride = EButtonNames::Cross;
}

