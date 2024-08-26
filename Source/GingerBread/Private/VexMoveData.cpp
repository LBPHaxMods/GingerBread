#include "VexMoveData.h"

FVexMoveData::FVexMoveData() {
    this->MoveTimestamp = 0.00f;
    this->MoveDuration = 0.00f;
    this->FromPoint = EVexMovePoint::Invalid;
    this->ToPoint = EVexMovePoint::Invalid;
}

