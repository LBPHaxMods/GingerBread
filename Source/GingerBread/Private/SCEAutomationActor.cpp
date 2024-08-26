#include "SCEAutomationActor.h"

ASCEAutomationActor::ASCEAutomationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mShowDebugMessages = false;
    this->GetActorsContaining = NULL;
    this->GetPlayerInfo = NULL;
    this->GetSystemInfo = NULL;
    this->SetPositionBP = NULL;
    this->SetRelPositionBP = NULL;
    this->SetToActorPosition = NULL;
    this->ToggleDebugMessages = NULL;
    this->doConsoleCommand = NULL;
}


