#include "LoadSaveData.h"

FLoadSaveData::FLoadSaveData() {
    this->Checksum = 0;
    this->Version = 0;
    this->bLegacySaveData = false;
    this->PlaythroughCount = 0;
}

