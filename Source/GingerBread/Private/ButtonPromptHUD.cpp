#include "ButtonPromptHUD.h"

UButtonPromptHUD::UButtonPromptHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ContextTextWidgets[0] = NULL;
    this->ContextTextWidgets[1] = NULL;
    this->ContextTextWidgets[2] = NULL;
    this->ContextTextWidgets[3] = NULL;
    this->PlayerWidgets[0] = NULL;
    this->PlayerWidgets[1] = NULL;
    this->PlayerWidgets[2] = NULL;
    this->PlayerWidgets[3] = NULL;
    this->OnOffAnimations[0] = NULL;
    this->OnOffAnimations[1] = NULL;
    this->OnOffAnimations[2] = NULL;
    this->OnOffAnimations[3] = NULL;
    this->PlayerAnimations[0] = NULL;
    this->PlayerAnimations[1] = NULL;
    this->PlayerAnimations[2] = NULL;
    this->PlayerAnimations[3] = NULL;
    this->WidgetName_CraftBelt[0] = TEXT("CraftBeltP1P3Widget_207");
    this->WidgetName_CraftBelt[1] = TEXT("CraftBeltP1P3Widget_207");
    this->WidgetName_CraftBelt[2] = TEXT("CraftBeltP1P3Widget_207");
    this->WidgetName_CraftBelt[3] = TEXT("CraftBeltP1P3Widget_207");
    this->WidgetName_R2Prompt = TEXT("R2Prompt");
    this->WidgetName_R2Text = TEXT("StitchText");
    this->WidgetName_CirclePrompt = TEXT("CirclePrompt");
    this->WidgetName_CircleText = TEXT("DeleteText");
    this->AnimationName_P1P3 = TEXT("Player1or3");
    this->AnimationName_P2P4 = TEXT("Player2or4");
    this->AnimationTime_P1234[0] = 0.00f;
    this->AnimationTime_P1234[1] = 0.00f;
    this->AnimationTime_P1234[2] = 0.00f;
    this->AnimationTime_P1234[3] = 0.00f;
    this->AnimationName_OnOff = TEXT("OnOrOff");
    this->AnimationTime_On = 0.60f;
    this->AnimationTime_Off = 0.10f;
    this->ActionTextPrompts = NULL;
}


