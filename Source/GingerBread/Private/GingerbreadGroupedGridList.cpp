#include "GingerbreadGroupedGridList.h"
#include "Templates/SubclassOf.h"

UGingerbreadGroupedGridList::UGingerbreadGroupedGridList() {
    this->GridHeaderType = NULL;
    this->GridWidgetType = NULL;
}

void UGingerbreadGroupedGridList::SetUpExitListLink(UGingerbreadWidgetElement* ExitLink) {
}

void UGingerbreadGroupedGridList::SetRightExitListLink(UGingerbreadWidgetElement* ExitLink) {
}

void UGingerbreadGroupedGridList::SetLeftExitListLink(UGingerbreadWidgetElement* ExitLink) {
}

void UGingerbreadGroupedGridList::SetDownExitListLink(UGingerbreadWidgetElement* ExitLink) {
}

void UGingerbreadGroupedGridList::SetCategoryVisibility(const FUIGroupedGridListCategory& Category, bool visible) {
}

void UGingerbreadGroupedGridList::SetAllCategoriesToDesiredColumnCountForWidth(float Width) {
}

void UGingerbreadGroupedGridList::SetAllCategoriesColumnWidth(int32 ColumnWidth) {
}

void UGingerbreadGroupedGridList::RemoveCategory(const FName GridListCategoryName) {
}

void UGingerbreadGroupedGridList::RemoveAllCategories() {
}

void UGingerbreadGroupedGridList::RefreshAllNavigationLinks() {
}

void UGingerbreadGroupedGridList::RecalulateSurroundingCategoryLinks(const FUIGroupedGridListCategory& Category) {
}

void UGingerbreadGroupedGridList::RecalculateCategoryLinks(const FUIGroupedGridListCategory& Category) {
}

void UGingerbreadGroupedGridList::MoveCategory(const FName GridListCategoryName, int32 NewIndex) {
}

void UGingerbreadGroupedGridList::GetWidgetsInGrids(TArray<UWidget*>& OutWidgetArray) {
}

UGingerbreadWidgetElement* UGingerbreadGroupedGridList::GetWidgetAtVerticalOffset(UGingerbreadWidgetElement* StartingWidget, int32 Offset) {
    return NULL;
}

int32 UGingerbreadGroupedGridList::GetVisibleCategoryCount() const {
    return 0;
}

int32 UGingerbreadGroupedGridList::GetTotalCategoryCount() const {
    return 0;
}

int32 UGingerbreadGroupedGridList::GetLargestIdealNumberOfColumnsForWidth(float Width) {
    return 0;
}

UGingerbreadWidgetElement* UGingerbreadGroupedGridList::GetFirstSelectableWidget() {
    return NULL;
}

FUIGroupedGridListCategory UGingerbreadGroupedGridList::FindCategory(const FName GridListCategoryName) {
    return FUIGroupedGridListCategory{};
}

void UGingerbreadGroupedGridList::CreateWidgetsForCategory(const FName GridListCategoryName, int32 NumToCreate, TSubclassOf<UGingerbreadWidgetElement> WidgetClassToCreate, TArray<UUserWidget*>& CreatedWidgetsOut) {
}

FUIGroupedGridListCategory UGingerbreadGroupedGridList::CreateCategory(const FName GridListCategoryName, bool HasHeader, int32 ColumnWidth) {
    return FUIGroupedGridListCategory{};
}

void UGingerbreadGroupedGridList::CompactCategoryGrid(const FName GridListCategoryName) {
}

void UGingerbreadGroupedGridList::AutoDisplayCategories() {
}

void UGingerbreadGroupedGridList::AddWidgetToCategory(const FName GridListCategoryName, UGingerbreadWidgetElement* WidgetToAdd) {
}


