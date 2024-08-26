#include "HitPointsModifierTableRow.h"

FHitPointsModifierTableRow::FHitPointsModifierTableRow() {
    this->Tag = EHitPointsSourceTag::Sackboy;
    this->Mode = EHitPointModifyMode::Damage;
    this->Type = EDamageType::Standard;
    this->Level = EDamageLevel::Light;
    this->Direction = EDamageDirection::Forwards;
    this->Details = EDamageDetails::Normal;
    this->Priority = 0;
    this->IsUnblockable = false;
    this->IntantKillOrHeal = false;
    this->ModifyTagSackboy = 0;
    this->ModifyTagEnemy = 0;
    this->ModifyTagEnvironment = 0;
    this->ModifyTagBoss = 0;
    this->ModifyTagKillFloor = 0;
}

