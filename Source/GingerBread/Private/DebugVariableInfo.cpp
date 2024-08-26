#include "DebugVariableInfo.h"

FDebugVariableInfo::FDebugVariableInfo() {
    this->variableType = EDebugVariableType::NONE;
    this->DefaultValue = 0.00f;
    this->currentValue = 0.00f;
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->Step = 0.00f;
    this->favouritesCategory = false;
    this->resetOnBeginPlay = false;
    this->registeredOutOfSystem = false;
    this->ComboBox = false;
    this->isDefaultOption = false;
}

