#include "CostumeItem.h"

FCostumeItem::FCostumeItem() {
    this->Enabled = false;
    this->CostumeItemCategory = ECostumeItemCategory::ItemCategory_Head;
    this->CollectabellCost = 0;
    this->WorldID = ELevelType::Himalaya;
    this->IsCloth = false;
    this->HasOwnSkeleton = false;
    this->ForceSharedSkeletonOnPS5 = false;
    this->CostumeItemOccludes = 0;
    this->CostumeItemCovers = 0;
    this->CostumeItemRemovedBy = 0;
    this->CostumeItemVisualSize = ECostumeItemVisualSize::VisualSize_Small;
}

