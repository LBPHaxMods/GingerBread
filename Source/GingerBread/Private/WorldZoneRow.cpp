#include "WorldZoneRow.h"

FWorldZoneRow::FWorldZoneRow() {
    this->WorldID = ELevelType::Himalaya;
    this->OrbCountRequiredForUnlock = 0;
    this->bAllCoreLevelsRequiredForUnlock = false;
    this->bUnlockedByDefault = false;
    this->bManuallyUnlockedByPlayer = false;
    this->bIsPreviewZone = false;
}

