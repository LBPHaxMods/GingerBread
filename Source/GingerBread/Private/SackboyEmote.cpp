#include "SackboyEmote.h"

FSackboyEmote::FSackboyEmote() {
    this->Style = ESackboyEmoteStyle::Standard;
    this->Behaviour = ESackboyEmoteSpecialBehaviour::None;
    this->Price = 0;
    this->IsPrizeBubble = false;
    this->WorldID = ELevelType::Himalaya;
    this->ShouldUseSpeedToBreak = false;
    this->FailOnSinglePlayerOnly = false;
    this->InputThreshold = 0.00f;
    this->InputTimeNeededToBreak = 0.00f;
    this->MaxMoveSpeed = 0.00f;
    this->MinDuration = 0.00f;
    this->FailTime = 0.00f;
    this->SuccessDelay = 0.00f;
    this->ResponseAngle = 0.00f;
    this->ResponseHeight = 0.00f;
    this->IntoAnim = NULL;
    this->LoopAnim = NULL;
    this->ExitAnim = NULL;
    this->SuccessAnim = NULL;
    this->AltSuccessAnim = NULL;
    this->FailAnim = NULL;
    this->ResponseIntoAnim = NULL;
    this->ResponseExitAnim = NULL;
    this->ResponseDistance = 0.00f;
    this->ItemDelay = 0.00f;
    this->HoldDelay = 0.00f;
    this->HoldDuration = 0.00f;
    this->ShouldSyncToBeat = false;
    this->IntoExitFrame = 0.00f;
    this->FramesPerBeat = 0.00f;
    this->MaxDanceRate = 0.00f;
    this->MinDanceRate = 0.00f;
    this->CanBeUsedWhilstRollRiding = false;
    this->CanBeUsedWhilstWalking = false;
    this->IsUnlocked = false;
}

