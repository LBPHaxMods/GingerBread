#include "VoidSelectWidgetBase.h"

UVoidSelectWidgetBase::UVoidSelectWidgetBase() {
    this->HasSeenBefore = true;
}

void UVoidSelectWidgetBase::SetSeenBefore() {
}

bool UVoidSelectWidgetBase::IsLevelMastered(const FPersistentLevelData2& LevelData) const {
    return false;
}

bool UVoidSelectWidgetBase::GetIsSeenBefore() const {
    return false;
}


