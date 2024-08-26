#include "GingerBreadLoadingScreenSettings.h"

UGingerBreadLoadingScreenSettings::UGingerBreadLoadingScreenSettings() {
    this->BootLoadingScreens.AddDefaulted(24);
    this->ButtonPromptWidgetName = TEXT("StartLevelButton");
    this->LoadingWidgetName = TEXT("Loading");
    this->BasicScreenFadeOffAnimName = TEXT("FadeOut");
    this->JoiningGameWidgetName = TEXT("JoiningGameText");
}


