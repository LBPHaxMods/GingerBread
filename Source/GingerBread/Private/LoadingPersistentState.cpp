#include "LoadingPersistentState.h"

FLoadingPersistentState::FLoadingPersistentState() {
    this->LoadingType = ELoadingType::Default;
    this->LoadingTheme = ELoadingTheme::Default;
    this->OverlayIsVisibleOnEntry = false;
    this->SpinnerShownDuringLoad = false;
    this->JoiningNetworkText = false;
}

