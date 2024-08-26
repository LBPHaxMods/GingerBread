#include "MoverToolEventsStruct.h"

FMoverToolEventsStruct::FMoverToolEventsStruct() {
    this->PositionAlpha = 0.00f;
    this->Direction = EMoverToolEventDirections::ForwardsAndBackwards;
    this->Rumble = NULL;
    this->CameraShake = NULL;
    this->Audio = NULL;
    this->Haptic = NULL;
}

