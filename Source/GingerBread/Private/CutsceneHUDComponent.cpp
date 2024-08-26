#include "CutsceneHUDComponent.h"

UCutsceneHUDComponent::UCutsceneHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PauseOnSFX = NULL;
    this->PauseOffSFX = NULL;
}

void UCutsceneHUDComponent::ShowPauseText(bool Show) {
}

void UCutsceneHUDComponent::ShowCutSceneUI(bool show_blackbars, bool show_skip_cutscene_prompt, bool show_skip_speech_prompt, bool show_title_screen, bool show_vote_skips, bool show_next_and_skip_prompt) {
}

void UCutsceneHUDComponent::RequestVisibilityCheck() {
}

bool UCutsceneHUDComponent::IsPauseTextVisible() const {
    return false;
}

bool UCutsceneHUDComponent::IsNonPauseComponentVisible() const {
    return false;
}

bool UCutsceneHUDComponent::IsLevelIntroRequested() const {
    return false;
}

bool UCutsceneHUDComponent::IsInCutscene() const {
    return false;
}

bool UCutsceneHUDComponent::IsBlackBarsVisible() const {
    return false;
}


