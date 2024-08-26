#include "RestartScreenHUDComponent.h"
#include "MenuButtonPromptsLogic.h"

URestartScreenHUDComponent::URestartScreenHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MenuButtonPrompts = CreateDefaultSubobject<UMenuButtonPromptsLogic>(TEXT("MenuButtonPromptsLogic"));
    this->WidgetMenu = NULL;
    this->RestartWidget = NULL;
    this->WidgetOnAnimation = NULL;
    this->WidgetName_RestartHUD = TEXT("LevelRestartScreen");
    this->WidgetName_MenuButtonPrompts = TEXT("MenuButtonPromptsWidget_194");
    this->WidgetName_OnAnimation = TEXT("RestartScreenOn");
    this->ControlsName_Select = TEXT("Select");
}


