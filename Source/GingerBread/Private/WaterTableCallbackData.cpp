#include "WaterTableCallbackData.h"

FWaterTableCallbackData::FWaterTableCallbackData() {
    this->Callee = NULL;
    this->Height = 0.00f;
    this->Direction = EWaterTableDirection::Rising;
}

