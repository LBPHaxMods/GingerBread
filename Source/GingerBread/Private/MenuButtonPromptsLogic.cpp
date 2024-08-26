#include "MenuButtonPromptsLogic.h"

UMenuButtonPromptsLogic::UMenuButtonPromptsLogic() {
    this->RootWidget = NULL;
    this->WidgetNames[0] = TEXT("CrossPrompt");
    this->WidgetNames[1] = TEXT("CrossPrompt");
    this->WidgetNames[2] = TEXT("CrossPrompt");
    this->WidgetNames[3] = TEXT("CrossPrompt");
    this->WidgetNames[4] = TEXT("CrossPrompt");
    this->WidgetNames[5] = TEXT("CrossPrompt");
    this->WidgetNames[6] = TEXT("CrossPrompt");
    this->WidgetNames[7] = TEXT("CrossPrompt");
    this->WidgetNames[8] = TEXT("CrossPrompt");
    this->WidgetNames[9] = TEXT("CrossPrompt");
    this->WidgetNames[10] = TEXT("CrossPrompt");
    this->WidgetNames[11] = TEXT("CrossPrompt");
    this->WidgetNames[12] = TEXT("CrossPrompt");
    this->WidgetNames[13] = TEXT("CrossPrompt");
    this->WidgetNames[14] = TEXT("CrossPrompt");
    this->WidgetNames[15] = TEXT("CrossPrompt");
    this->WidgetName_ButtonText = TEXT("PromptText");
}

void UMenuButtonPromptsLogic::ShowButton(EButtonNames buttonName, FText DisplayText, UAkAudioEvent* ButtonPressSFX, float HoldTime, UAkAudioEvent* hapticEvent, UAkAudioEvent* gamepadAudioEvent, bool MouseInput) {
}

void UMenuButtonPromptsLogic::SetPromptCollection(const FUIMenuPromptsCollection& Collection) {
}

void UMenuButtonPromptsLogic::HideAllButtons() {
}

void UMenuButtonPromptsLogic::CacheWidgetsAndAnimations(UUserWidget* Root) {
}


