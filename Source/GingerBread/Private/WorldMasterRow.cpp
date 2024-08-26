#include "WorldMasterRow.h"

FWorldMasterRow::FWorldMasterRow() {
    this->WorldID = ELevelType::Himalaya;
    this->bUnlockedByDefault = false;
    this->WorldLevelTable = NULL;
    this->WorldZoneTable = NULL;
    this->WorldZoneDialogueTable = NULL;
    this->BadgeBorderMaterial = NULL;
}

