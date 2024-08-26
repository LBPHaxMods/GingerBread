#include "StickerBookHUDComponent.h"

UStickerBookHUDComponent::UStickerBookHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStickerBookHUDComponent::UpdateBookOfDreamsAchievement() const {
}

void UStickerBookHUDComponent::SetPageVisible(FStickerBookPageInstance& StickerPage, bool visible) {
}

void UStickerBookHUDComponent::SetPageNumber(FStickerBookPageInstance& StickerPage, int32 PageNumber) {
}

void UStickerBookHUDComponent::SaveStickersAsUnlocked(TArray<UStickerBookStickerWidget*>& Stickers) {
}

void UStickerBookHUDComponent::SaveStickerAsUnlocked(UStickerBookStickerWidget* Sticker) {
}

void UStickerBookHUDComponent::SavePageAsOpen(int32 PageNumber) {
}

void UStickerBookHUDComponent::OnPlayerSaveLoaded(const FGingerbreadPlayerId& PlayerId) {
}

bool UStickerBookHUDComponent::IsTabTypeValid(EStickerBookTabType TabType) const {
    return false;
}

bool UStickerBookHUDComponent::IsPageNumberValid(int32 PageNumber) const {
    return false;
}

bool UStickerBookHUDComponent::IsPageCompleted(int32 PageNumber) const {
    return false;
}

void UStickerBookHUDComponent::InitialiseStickerBook() {
}

TArray<ELevelType> UStickerBookHUDComponent::GetUnlockedWorlds() const {
    return TArray<ELevelType>();
}

FStickerBookTabStaticData UStickerBookHUDComponent::GetTabStaticData(EStickerBookTabType TabType) {
    return FStickerBookTabStaticData{};
}

void UStickerBookHUDComponent::GetTabsBefore(EStickerBookTabType TabType, bool Inclusive, TArray<EStickerBookTabType>& TabsBefore) {
}

void UStickerBookHUDComponent::GetTabsAfter(EStickerBookTabType TabType, bool Inclusive, TArray<EStickerBookTabType>& TabsAfter) {
}

EStickerBookTabType UStickerBookHUDComponent::GetTabBefore(EStickerBookTabType TabType) const {
    return EStickerBookTabType::Worlds;
}

EStickerBookTabType UStickerBookHUDComponent::GetTabAfter(EStickerBookTabType TabType) const {
    return EStickerBookTabType::Worlds;
}

void UStickerBookHUDComponent::GetPreviousPageAvailable(int32 CurrentPage, bool SkipTab, int32& PreviousPage) {
}

EStickerBookTabType UStickerBookHUDComponent::GetPageTabType(int32 PageNumber) const {
    return EStickerBookTabType::Worlds;
}

int32 UStickerBookHUDComponent::GetPagesToTab(int32 CurrentPage, EStickerBookTabType OtherTab) {
    return 0;
}

int32 UStickerBookHUDComponent::GetPagesInTab(EStickerBookTabType TabType) const {
    return 0;
}

int32 UStickerBookHUDComponent::GetPageFromSackboysLocation() const {
    return 0;
}

int32 UStickerBookHUDComponent::GetPageForWorld(ELevelType WorldType) const {
    return 0;
}

void UStickerBookHUDComponent::GetNextPageAvailable(int32 CurrentPage, bool SkipTab, int32& NextPage) {
}

void UStickerBookHUDComponent::GetLastSavedPageOpen(int32& PageNumber) {
}

int32 UStickerBookHUDComponent::GetFirstPageAvailable() const {
    return 0;
}

void UStickerBookHUDComponent::ApplyPendingStickerUnlocks() {
}


