#include "VexConveyorLegacy.h"

AVexConveyorLegacy::AVexConveyorLegacy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsReversed = false;
    this->IsFullOnFire = false;
}

void AVexConveyorLegacy::TurnOnAllFlamePanels_Implementation() {
}

void AVexConveyorLegacy::TurnOffAllFlamePanels_Implementation() {
}

bool AVexConveyorLegacy::TriggerFlamePanelPattern_Implementation(const TArray<bool>& pattern, bool PostAKEvent) {
    return false;
}

void AVexConveyorLegacy::SetBeltSpeed_Implementation(float beltSpeed) {
}

int32 AVexConveyorLegacy::GetNumberOfFlamePanels_Implementation() {
    return 0;
}


