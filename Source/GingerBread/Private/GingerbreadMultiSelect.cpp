#include "GingerbreadMultiSelect.h"

UGingerbreadMultiSelect::UGingerbreadMultiSelect() {
    this->CurrentSelectedIndex = 0;
    this->LoopSelections = true;
    this->SelectionTextField = NULL;
    this->SelectionImageField = NULL;
    this->SelectionImageSize = NULL;
}

FUIMultiSelectData UGingerbreadMultiSelect::SwapToSelection(int32 OptionValue, bool TriggerCallback) {
    return FUIMultiSelectData{};
}

FUIMultiSelectData UGingerbreadMultiSelect::SwapToPreviousSelection() {
    return FUIMultiSelectData{};
}

FUIMultiSelectData UGingerbreadMultiSelect::SwapToNextSelection() {
    return FUIMultiSelectData{};
}

FUIMultiSelectData UGingerbreadMultiSelect::SwapToIndexedSelection(int32 Index, bool TriggerCallback) {
    return FUIMultiSelectData{};
}

void UGingerbreadMultiSelect::RemoveOption(int32 OptionValue, bool RemoveAllInstances) {
}

void UGingerbreadMultiSelect::ReleaseOptionTextures() {
}

void UGingerbreadMultiSelect::PreloadOptionTextures() {
}

void UGingerbreadMultiSelect::OnAssetsLoaded() {
}

FUIMultiSelectData UGingerbreadMultiSelect::GetSelectionByIndex(int32 Index) const {
    return FUIMultiSelectData{};
}

FUIMultiSelectData UGingerbreadMultiSelect::GetCurrentSelection() const {
    return FUIMultiSelectData{};
}

void UGingerbreadMultiSelect::ClearOptions() {
}

void UGingerbreadMultiSelect::AddOption(FUIMultiSelectData NewOption) {
}


