#include "TutorialStep.h"

UTutorialStep::UTutorialStep() {
    this->event_type = TEXT("TutorialStep");
    this->step_status = false;
    this->is_tutorial_complete = false;
}

UTutorialStep* UTutorialStep::NewTutorialStep() {
    return NULL;
}

void UTutorialStep::Init(const FString& _step_id, bool _step_status, bool _is_tutorial_complete) {
}


