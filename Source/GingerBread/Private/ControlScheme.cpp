#include "ControlScheme.h"

UControlScheme::UControlScheme() {
    this->bClearActionMappings = false;
    this->bClearAxisMappings = false;
    this->bClearVectorAxisMappings = false;
    this->bSuppressButtonPresses = false;
    this->SchemePriority = EControlSchemePriority::Common;
    this->IsDebugScheme = false;
}


