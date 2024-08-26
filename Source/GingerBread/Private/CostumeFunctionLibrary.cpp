#include "CostumeFunctionLibrary.h"

UCostumeFunctionLibrary::UCostumeFunctionLibrary() {
}

void UCostumeFunctionLibrary::UpdateHangerName(int32 HangerIndex, const FText& HangerName, const FGingerbreadPlayerId& PlayerId, bool& HangerUpdated, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::UpdateHangerCostumeItems(int32 HangerIndex, const TArray<FCostumeItemEquipDescriptor>& CostumeItems, const FGingerbreadPlayerId& PlayerId, bool& HangerUpdated, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::SetSavedEquippedItems(const FGingerbreadPlayerId& PlayerId, const TArray<FCostumeItemEquipDescriptor>& EquippedItems, bool& Saved, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::SetSavedEquippedHanger(const FGingerbreadPlayerId& PlayerId, const int32 HangerIndex, bool& Saved, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::SetSavedEquippedCostume(const FGingerbreadPlayerId& PlayerId, const FName& EquippedCostume, bool& Saved, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::SetSavedCostumeItemColourTint(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, const FName& ColourTint, bool& Success, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::RemoveSavedCostumeItemColourTint(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, bool& Success, const UObject* WorldContextObject) {
}

bool UCostumeFunctionLibrary::RemoveNonOwnedItems(TArray<FCostumeItemEquipDescriptor>& CostumeItems, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
    return false;
}

void UCostumeFunctionLibrary::RemoveHanger(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, bool& HangerRemoved, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::MarkCostumeUnlocked(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::MarkCostumeNotNew(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::MarkCostumeItemUnlocked(const FName& CostumeItemName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::MarkCostumeItemNotNew(const FName& CostumeItemName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::MarkCostumeAndItemsUnlocked(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::MarkColourTintUnlocked(const FName& ColourTint, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::MarkColourTintNotNew(const FName& ColourTint, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::IsAnyLocalPlayerUsingCostume(const FName& costumeName, bool& IsUsed, FGingerbreadPlayerId& UsingPlayer, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetUnlockedCostumes(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeQuery>& CostumesOut, bool& FoundCostumes, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetUnlockedCostumeItemTintColours(const FGingerbreadPlayerId& PlayerId, TMap<FName, FCostumeTintColour>& CostumeTintColoursOut, bool& FoundCostumeTintColours, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetUnlockedCostumeItems(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeItemQuery>& CostumeItemsOut, bool& FoundCostumeItems, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetSelectedCostume(const FGingerbreadPlayerId& PlayerId, FEquippedCostumeData& CostumeData, bool& Found, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetSavedEquippedItems(const FGingerbreadPlayerId& PlayerId, TArray<FCostumeItemEquipDescriptor>& EquippedItems, bool& Success, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetSavedEquippedHanger(const FGingerbreadPlayerId& PlayerId, int32& HangerIndex, bool& Success, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetSavedEquippedCostume(const FGingerbreadPlayerId& PlayerId, FName& EquippedCostume, bool& Success, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetSavedCostumeItemColourTintName(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, FName& ColourTint, bool& Found, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetSavedCostumeItemColourTint(const FGingerbreadPlayerId& PlayerId, const FName& CostumeItem, FCostumeTintColour& ColourTint, bool& Found, const UObject* WorldContextObject) {
}

int32 UCostumeFunctionLibrary::GetNumCostumeSetsCompleted(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId) {
    return 0;
}

int32 UCostumeFunctionLibrary::GetNumCostumePiecesCollected(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, bool bExcludeDefaultItems) {
    return 0;
}

void UCostumeFunctionLibrary::GetNumberOfHangers(const FGingerbreadPlayerId& PlayerId, int32& NumHangers, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetLocalUnusedCostume(const TArray<FName>& ValidCostumes, bool& Found, FName& UnusedCostumeName, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetHangers(const FGingerbreadPlayerId& PlayerId, TArray<FCostumeHangerData>& CostumeHangers, const UObject* WorldContextObject) {
}

int32 UCostumeFunctionLibrary::GetHangerIndex(int32 HangerID, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
    return 0;
}

int32 UCostumeFunctionLibrary::GetHangerID(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject) {
    return 0;
}

void UCostumeFunctionLibrary::GetHanger(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, FCostumeHangerData& CostumeHanger, bool& HangerFound, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetEquippedCostumeType(const FGingerbreadPlayerId& PlayerId, EEquippedCostumeType& EquippedCostumeType, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetCostumeUnlockDetails(const FName& costumeName, const FGingerbreadPlayerId& PlayerId, FUnlockDetails& UnlockDetails, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetCostumesByWorld(const TArray<ELevelType>& WorldIDs, TMap<FName, FCostume>& CostumesOut, bool& FoundCostumes, const UObject* WorldContextObject) {
}

UCostumeManager* UCostumeFunctionLibrary::GetCostumeManager(const UObject* WorldContextObject) {
    return NULL;
}

void UCostumeFunctionLibrary::GetCostumeItemUnlockDetails(const FName& CostumeItemName, const FGingerbreadPlayerId& PlayerId, FUnlockDetails& UnlockDetails, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetCostumeItemsByWorld(const TArray<ELevelType>& WorldIDs, TMap<FName, FCostumeItem>& CostumeItemsOut, bool& FoundCostumeItems, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetContainsNewCostumesOrItems(const FGingerbreadPlayerId& PlayerId, bool& ContainsNewCostumes, bool& ContainsNewCostumeItems, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetColourTintUnlockDetails(const FName& ColourTint, const FGingerbreadPlayerId& PlayerId, FUnlockDetails& UnlockDetails, const UObject* WorldContextObject) {
}

int32 UCostumeFunctionLibrary::GetCollectedPercentage(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId) {
    return 0;
}

void UCostumeFunctionLibrary::GetAllCostumes(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeQuery>& CostumesOut, bool& FoundCostumes, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::GetAllCostumeItems(const FGingerbreadPlayerId& PlayerId, bool SortByUnlockTimestamp, TArray<FCostumeItemQuery>& CostumeItemsOut, bool& FoundCostumeItems, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::FindChildCostumeMeshComponents(const UMeshComponent* ParentMeshComponent, TArray<UMeshComponent*>& ChildCostumeMeshes) {
}

void UCostumeFunctionLibrary::DestroyMeshComponent(UMeshComponent* MeshComponent) {
}

void UCostumeFunctionLibrary::DestroyChildCostumeMeshComponents(const UMeshComponent* ParentMeshComponent) {
}

USkeletalMeshComponent* UCostumeFunctionLibrary::CreateChildMeshComponent(USkeletalMeshComponent* ParentMeshComponent, USkeletalMesh* ChildMesh, bool SetMasterPose) {
    return NULL;
}

void UCostumeFunctionLibrary::ClearSavedEquipped(const FGingerbreadPlayerId& PlayerId, bool& Cleared, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::ClearHangerCostumeItems(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId, bool& ItemsCleared, const UObject* WorldContextObject) {
}

void UCostumeFunctionLibrary::AddHanger(const FCostumeHangerData& CostumeHanger, const FGingerbreadPlayerId& PlayerId, int32& HangerIndex, bool& HangerAdded, const UObject* WorldContextObject) {
}


