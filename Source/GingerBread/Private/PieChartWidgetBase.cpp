#include "PieChartWidgetBase.h"

UPieChartWidgetBase::UPieChartWidgetBase() {
    this->PieCharSegmentsOffset = 0.01f;
    this->PieCharSegmentsMinSize = 0.10f;
    this->CachedCostumeManager = NULL;
}

void UPieChartWidgetBase::UpdatePieChart_Implementation(bool animate) {
}

void UPieChartWidgetBase::RemovePlayer(FGingerbreadPlayerId PlayerId) {
}

void UPieChartWidgetBase::RemoveAllPlayers() {
}

void UPieChartWidgetBase::AddPlayer(FGingerbreadPlayerId PlayerId, int32 score) {
}


