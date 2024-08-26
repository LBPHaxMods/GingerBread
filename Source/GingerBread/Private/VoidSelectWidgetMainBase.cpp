#include "VoidSelectWidgetMainBase.h"

UVoidSelectWidgetMainBase::UVoidSelectWidgetMainBase() {
    this->TabbedHeaders = NULL;
    this->TabHeaderTextBlock = NULL;
    this->TabBtnLeft = NULL;
    this->TabBtnRight = NULL;
    this->PlaystationCompeteScreen = NULL;
    this->ESportState = EVoidSelectESportState::None;
    this->SelectedTrialsType = EVoidSelectTrialsType::Default;
}

bool UVoidSelectWidgetMainBase::ShouldDisplayPlaystationCompetePrompt() const {
    return false;
}

void UVoidSelectWidgetMainBase::SetIsVoidIntroPlaying(bool bIsPlaying) {
}




bool UVoidSelectWidgetMainBase::IsVoidIntroPlaying() const {
    return false;
}


