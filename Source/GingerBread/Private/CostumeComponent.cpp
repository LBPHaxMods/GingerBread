#include "CostumeComponent.h"

UCostumeComponent::UCostumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParentMeshTag = TEXT("SackboyMesh");
    this->UseIndividualMeshParts = false;
    this->SetMasterPose = true;
    this->ShouldHandleEvents = false;
    this->m_equippedItems.AddDefaulted(13);
}

void UCostumeComponent::ShowMeshPartsByOcclusion(int32 OcclusionMask) {
}

void UCostumeComponent::SetVisibilityOnEquippedItemByCategory(ECostumeItemCategory InCategory, bool Visibility) {
}

void UCostumeComponent::SetEquippedItemsTickEnabled(bool IsActive) {
}

void UCostumeComponent::RemovePreviewItems() {
}

void UCostumeComponent::RemovePreviewItemByCategory(ECostumeItemCategory InCategory, bool bUpdateHiddenEquippedItems) {
}

void UCostumeComponent::RemoveEquippedItemsByName(const TArray<FName>& ItemNames) {
}

void UCostumeComponent::RemoveEquippedItems() {
}

void UCostumeComponent::RemoveEquippedItemByCategory(ECostumeItemCategory InCategory) {
}

void UCostumeComponent::RemoveEquippedCostumeByName(const FName costumeName) {
}

bool UCostumeComponent::RemoveColourTintFromPreviewItem(const FName& CostumeItemName) {
    return false;
}

bool UCostumeComponent::RemoveColourTintFromPreviewCategory(ECostumeItemCategory InCategory) {
    return false;
}

bool UCostumeComponent::RemoveColourTintFromEquippedItem(const FName& CostumeItemName) {
    return false;
}

bool UCostumeComponent::RemoveColourTintFromEquippedCategory(ECostumeItemCategory InCategory) {
    return false;
}

bool UCostumeComponent::PreviewItemsByName(const TArray<FName>& ItemNames, bool HideAllEquipped) {
    return false;
}

bool UCostumeComponent::PreviewItemsAndColourTintByName(const TArray<FCostumeItemEquipDescriptor>& ItemNamesAndColourTints, bool HideAllEquipped) {
    return false;
}

bool UCostumeComponent::PreviewCostumeOnlyUnlockedItemsByName(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, bool HideAllEquipped) {
    return false;
}

bool UCostumeComponent::PreviewCostumeByName(const FName costumeName, bool HideAllEquipped) {
    return false;
}

void UCostumeComponent::OnPlayerJoinLeave(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& ID, bool forced) {
}

bool UCostumeComponent::IsNamedItemOccludedByItems(FName ItemName, const TArray<FCostumeItemEquipDescriptor>& OccludingItems) {
    return false;
}

bool UCostumeComponent::IsNamedItemCoveredByItems(FName ItemName, const TArray<FCostumeItemEquipDescriptor>& OccludingItems) {
    return false;
}

bool UCostumeComponent::IsItemEquipped(const FName& ItemName) {
    return false;
}

bool UCostumeComponent::IsInitialised() {
    return false;
}

void UCostumeComponent::HideCostumeItemsByOcclusionCoverMask(int32 OcclusionMask) {
}

int32 UCostumeComponent::GetNumberOfEquippedItems() {
    return 0;
}

ECostumeItemVisualSize UCostumeComponent::GetEquippedItemsVisualSize() {
    return ECostumeItemVisualSize::VisualSize_Small;
}

bool UCostumeComponent::GetEquippedItemsTickEnabled() {
    return false;
}

void UCostumeComponent::GetEquippedItemsAndTints(TArray<FCostumeItemEquipDescriptor>& EquippedItems) {
}

FName UCostumeComponent::GetEquippedItemNameByCategory(ECostumeItemCategory InCategory) {
    return NAME_None;
}

FBoxSphereBounds UCostumeComponent::GetBounds() {
    return FBoxSphereBounds{};
}

void UCostumeComponent::GetAllEquippedMeshComponents(TArray<UMeshComponent*>& MeshComponents) {
}

TArray<FName> UCostumeComponent::FilterCostumeItemsByOcclusionCoverMask(const TArray<FName>& ItemNames, int32 OcclusionMask) {
    return TArray<FName>();
}

bool UCostumeComponent::EquipItemsByName(const TArray<FName>& ItemNames, bool UnequipExistingOnLoad) {
    return false;
}

bool UCostumeComponent::EquipItemsAndColourTintByNameForced(const TArray<FCostumeItemEquipDescriptor>& ItemNamesAndColourTinks, bool UnequipExistingOnLoad) {
    return false;
}

bool UCostumeComponent::EquipItemsAndColourTintByName(const TArray<FCostumeItemEquipDescriptor>& ItemNamesAndColourTints, bool UnequipExistingOnLoad) {
    return false;
}

bool UCostumeComponent::EquipCostumeOnlyUnlockedItemsByName(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, bool UnequipExistingOnLoad) {
    return false;
}

bool UCostumeComponent::EquipCostumeByName(const FName costumeName, bool UnequipExistingOnLoad) {
    return false;
}

void UCostumeComponent::AreItemsAndTintsEquipped(const TArray<FCostumeItemEquipDescriptor>& ItemsToCheck, bool& ItemsEquipped) {
}

void UCostumeComponent::ApplyMergedCostume(const FGingerbreadPlayerId& PlayerId) {
}

bool UCostumeComponent::ApplyColourTintToPreviewItem(const FName& CostumeItemName, const FName& ColourTintName) {
    return false;
}

bool UCostumeComponent::ApplyColourTintToPreviewCategory(ECostumeItemCategory InCategory, const FName& ColourTintName) {
    return false;
}

bool UCostumeComponent::ApplyColourTintToEquippedItem(const FName& CostumeItemName, const FName& ColourTintName) {
    return false;
}

bool UCostumeComponent::ApplyColourTintToEquippedCategory(ECostumeItemCategory InCategory, const FName& ColourTintName) {
    return false;
}


