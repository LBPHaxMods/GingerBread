#include "TutorialTriggerConfigLine.h"

FTutorialTriggerConfigLine::FTutorialTriggerConfigLine() {
    this->GlobalCompletionLogicType = ETutorialLogicType::None;
    this->GlobalCompletionLogicThreshold = 0.00f;
    this->GlobalTimeOut = 0.00f;
    this->LocalCompletionLogicType = ETutorialLogicType::None;
    this->LocalCompletionLogicThreshold = 0.00f;
    this->LocalTimeOut = 0.00f;
    this->TriggerMode = TutorialTriggerMode::TriggerVolume;
}

