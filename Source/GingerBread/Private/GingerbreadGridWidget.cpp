#include "GingerbreadGridWidget.h"
#include "Templates/SubclassOf.h"

UGingerbreadGridWidget::UGingerbreadGridWidget() {
    this->DesiredNumColumns = 1;
    this->NumWidgetsToPrecreate = 0;
    this->WidgetClassToPrecreate = NULL;
}

int32 UGingerbreadGridWidget::ShiftSelectedChild(int32 Offset, int32 currentChildIdx, UWidget* widgetToMove) {
    return 0;
}

void UGingerbreadGridWidget::SetWidgetIsPriority(UWidget* ChildWidget, bool IsPriority) {
}

void UGingerbreadGridWidget::SetNumberOfColumns(int32 NumberOfColumns) {
}

int32 UGingerbreadGridWidget::ResetGrid(int32 currentChildIdx, UWidget* widgetToMove, int32& numberOfSwappedPositions) {
    return 0;
}

void UGingerbreadGridWidget::ProcessPrecreateWidgets() {
}

UWidget* UGingerbreadGridWidget::GetWidgetInGridPositionConditional(int32 Column, int32 Row, bool ReturnClosestInRow, const UGingerbreadGridWidget::FGetGridWidgetConditional& ExtraConditional) {
    return NULL;
}

UWidget* UGingerbreadGridWidget::GetWidgetInGridPosition(int32 Column, int32 Row, bool ReturnClosestInRow) {
    return NULL;
}

int32 UGingerbreadGridWidget::GetNumRows() const {
    return 0;
}

int32 UGingerbreadGridWidget::GetNumColumns() const {
    return 0;
}

TArray<UWidget*> UGingerbreadGridWidget::GetChildrenWidgets() {
    return TArray<UWidget*>();
}

void UGingerbreadGridWidget::CreateWidgetsBatch(int32 NumToCreate, TSubclassOf<UUserWidget> WidgetClass, TArray<UUserWidget*>& CreatedWidgetsOut) {
}

void UGingerbreadGridWidget::CompactGrid() {
}

int32 UGingerbreadGridWidget::CalculateIdealNumberOfColumnsForWidth(float Width, bool FillExcessWidth) {
    return 0;
}

int32 UGingerbreadGridWidget::CalculateIdealNumberOfColumns() {
    return 0;
}

void UGingerbreadGridWidget::AddChildToNextGridSlot(UWidget* Child) {
}


