#include "GingerbreadWidgetList.h"

UGingerbreadWidgetList::UGingerbreadWidgetList() {
    this->mWidgetItemClass = NULL;
    this->mHighlightedBackgroundWidgetClass = NULL;
    this->mFullBackgroundWidgetClass = NULL;
    this->mSize = 1;
    this->mbUseCentrePaddingValue = false;
    this->mNavigation = EWidgetListNavigation::FixedCentre;
    this->mRangeMin = 0;
    this->mRangeMax = 0;
    this->mStartIndex = 0;
    this->mbCircular = false;
    this->miEdgeSnapClamp = 0;
    this->mfCloseTime = 1.00f;
    this->mCloseEaseFunction = EWidgetListEaseFunction::Linear;
    this->mfOpenTime = 1.00f;
    this->mOpenEaseFunction = EWidgetListEaseFunction::Linear;
    this->mfShiftTime = 0.00f;
    this->mfShiftGroupTime = 0.00f;
    this->mShiftEaseFunction = EWidgetListEaseFunction::Linear;
    this->mpFullBackgroundWidget = NULL;
    this->mpHighlightedBackgroundWidget = NULL;
}

int32 UGingerbreadWidgetList::ToggleSelectionOnCurrent() {
    return 0;
}

void UGingerbreadWidgetList::SetSelected(int32 Index, bool selected, bool updateWidgets) {
}

void UGingerbreadWidgetList::SetMaxSelection(int32 Total) {
}

void UGingerbreadWidgetList::SetData(const TArray<FWidgetListItemData>& Data, int32 StartIndex) {
}

bool UGingerbreadWidgetList::SetCurrentIndex(int32 Index, bool bGroupShiftAnimate) {
    return false;
}

void UGingerbreadWidgetList::Open(bool bForce, bool bFromCenter) {
}

bool UGingerbreadWidgetList::OffsetCurrentIndex(int32 Offset, bool bGroupShiftAnimate) {
    return false;
}

bool UGingerbreadWidgetList::MoveToPreviousItem() {
    return false;
}

bool UGingerbreadWidgetList::MoveToNextItem() {
    return false;
}

bool UGingerbreadWidgetList::IsCurrentSelected() const {
    return false;
}

bool UGingerbreadWidgetList::IsClosed() const {
    return false;
}

bool UGingerbreadWidgetList::IsAtStart() {
    return false;
}

bool UGingerbreadWidgetList::IsAtEnd() {
    return false;
}

void UGingerbreadWidgetList::GetSelected(TArray<int32>& selected) const {
}

int32 UGingerbreadWidgetList::GetNumWidgets() const {
    return 0;
}

UWidget* UGingerbreadWidgetList::GetHighlightBackgroundWidget() {
    return NULL;
}

UWidget* UGingerbreadWidgetList::GetFullBackgroundWidget() {
    return NULL;
}

int32 UGingerbreadWidgetList::GetEdgeSnapOffset() {
    return 0;
}

TArray<FWidgetListItemData> UGingerbreadWidgetList::GetData() const {
    return TArray<FWidgetListItemData>();
}

UGingerbreadWidgetList_Item* UGingerbreadWidgetList::GetContentWidgetFromCenter(int32 CenterOffset) {
    return NULL;
}

UGingerbreadWidgetList_Item* UGingerbreadWidgetList::GetContentWidgetForDataIndex(int32 DataIndex) {
    return NULL;
}

int32 UGingerbreadWidgetList::CurrentIndex() const {
    return 0;
}

void UGingerbreadWidgetList::Close(bool bForce, bool bFromCenter) {
}

void UGingerbreadWidgetList::ClearSelection() {
}

void UGingerbreadWidgetList::ClearData() {
}


