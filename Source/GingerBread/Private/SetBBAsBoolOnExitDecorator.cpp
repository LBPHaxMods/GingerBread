#include "SetBBAsBoolOnExitDecorator.h"

USetBBAsBoolOnExitDecorator::USetBBAsBoolOnExitDecorator() {
    this->NodeName = TEXT("Set BB As Bool On Exit");
    this->bIsObservingBB = true;
    this->Value = true;
}


