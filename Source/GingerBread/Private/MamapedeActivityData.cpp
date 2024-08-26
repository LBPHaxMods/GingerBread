#include "MamapedeActivityData.h"

FMamapedeActivityData::FMamapedeActivityData() {
    this->ActivityType = EMamapedeActivity::Invalid;
    this->splineIndex = 0;
    this->IsFirstEverActivity = false;
    this->IsFirstOfMultipleActivities = false;
    this->IsLastOfMultipleActivities = false;
}

