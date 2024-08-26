#include "CloudPlatformGridItem.h"

FCloudPlatformGridItem::FCloudPlatformGridItem() {
    this->Actor = NULL;
    this->Type = ECloudPlatformItemType::None;
    this->TimeFloating = 0.00f;
    this->InitialZVelocity = 0.00f;
    this->CurrentZVelozity = 0.00f;
}

