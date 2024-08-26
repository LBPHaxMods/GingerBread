#include "PlayerInventory.h"

UPlayerInventory::UPlayerInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayerSackboy = NULL;
}

void UPlayerInventory::ModifyCollectabellQuantity(const int32 Count) {
}

FName UPlayerInventory::GetItemName_CreativeOrb() {
    return NAME_None;
}

int32 UPlayerInventory::GetCollectabellCountChange() const {
    return 0;
}

int32 UPlayerInventory::GetCollectabellCount() const {
    return 0;
}

int32 UPlayerInventory::GetAdventureStorageItemCount(const FName ItemName) const {
    return 0;
}

void UPlayerInventory::AddAdventureItemCount(const FName ItemName, const int32 Count) {
}


