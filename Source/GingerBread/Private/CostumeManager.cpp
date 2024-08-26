#include "CostumeManager.h"

UCostumeManager::UCostumeManager() {
    this->CostumeSettings = NULL;
}

void UCostumeManager::UnloadHangerThumbnails(const FGingerbreadPlayerId& PlayerId) {
}

void UCostumeManager::UnloadHangerThumbnail(const FGingerbreadPlayerId& PlayerId, const FName& ThumbnailKey) {
}

void UCostumeManager::UnloadCostumeResources(const TArray<FName>& ItemNames) {
}

void UCostumeManager::UnloadAllHangerThumbnails() {
}

bool UCostumeManager::SetupCostumeForPlayer(const FGingerbreadPlayerId& PlayerId, FName OverrideCostume, bool Force) {
    return false;
}

void UCostumeManager::OnCostumeReplicated(FGingerbreadPlayerId PlayerId, FEquippedCostumeData CostumeItems) {
}

bool UCostumeManager::LoadCostumeThumbnails(const FGingerbreadPlayerId& PlayerId, const FName& costumeName) {
    return false;
}

void UCostumeManager::LoadCostumeResources(const TArray<FName>& ItemNames) {
}

bool UCostumeManager::LoadCostumeHangerThumbnails(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex) {
    return false;
}

void UCostumeManager::LoadAndCacheHangerThumbnails(const FGingerbreadPlayerId& PlayerId) {
}

void UCostumeManager::LoadAndCacheHangerThumbnail(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex) {
}

bool UCostumeManager::IsEnabled() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UCostumeManager::GetThumbnailSoftPtrFromNameAndType(const FString& Name, EThumbnailType ThumbnailType) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UCostumeManager::GetThumbnailSoftPtrFromName(const FString& Name) {
    return NULL;
}

UTexture2D* UCostumeManager::GetThumbnail(const FGingerbreadPlayerId& PlayerId, EThumbnailType ThumbnailType) {
    return NULL;
}

USkeletalMesh* UCostumeManager::GetSackboySkeletalMesh(const FGingerbreadPlayerId& PlayerId) {
    return NULL;
}

FName UCostumeManager::GetDefaultCostume() const {
    return NAME_None;
}

void UCostumeManager::GetCostumeTintColours(TMap<FName, FCostumeTintColour>& CostumeTintColoursOut, bool& FoundCostumeTintColours) {
}

void UCostumeManager::GetCostumeTintColour(const FName& CostumeTintColourKey, FCostumeTintColour& CostumeTintColourOut, bool& FoundCostumeTintColour) {
}

void UCostumeManager::GetCostumes(TMap<FName, FCostume>& CostumesOut, bool& FoundCostumes) {
}

void UCostumeManager::GetCostumeItems(TMap<FName, FCostumeItem>& CostumeItemsOut, bool& FoundCostumeItems) {
}

void UCostumeManager::GetCostumeItemOwningCostumes(const FName& CostumeItemName, TArray<FName>& OwningCostumeNames, bool& FoundOwningCostumes) {
}

void UCostumeManager::GetCostumeItem(const FName& CostumeItemName, FCostumeItem& CostumeItemOut, bool& FoundCostumeItem) {
}

void UCostumeManager::GetCostume(const FName& costumeName, FCostume& CostumeOut, bool& FoundCostume) {
}

TSoftObjectPtr<UTexture2D> UCostumeManager::GetCachedHangerThumbnailSoftPtr(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex, EThumbnailType ThumbnailType) {
    return NULL;
}

UTexture2D* UCostumeManager::GetCachedHangerThumbnail(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex, EThumbnailType ThumbnailType) {
    return NULL;
}

UTexture2D* UCostumeManager::FindFirstAvailableThumbnail(const FGingerbreadPlayerId& PlayerId) const {
    return NULL;
}

bool UCostumeManager::CreateCompleteSackboyMeshFromHanger(const FGingerbreadPlayerId& PlayerId, int32 HangerIndex) {
    return false;
}

bool UCostumeManager::CreateCompleteSackboyMeshFromCostume(const FGingerbreadPlayerId& PlayerId, const FName& costumeName) {
    return false;
}

bool UCostumeManager::CreateCompleteSackboyMesh(const FGingerbreadPlayerId& PlayerId, const TArray<FCostumeItemEquipDescriptor>& CostumeItems) {
    return false;
}

void UCostumeManager::CheckForCostumePermissions(const FGingerbreadPlayerId& PlayerId) {
}

bool UCostumeManager::AreAllResourcesLoaded(const FGingerbreadPlayerId& PlayerId) const {
    return false;
}


