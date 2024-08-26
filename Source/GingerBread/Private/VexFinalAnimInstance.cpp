#include "VexFinalAnimInstance.h"

UVexFinalAnimInstance::UVexFinalAnimInstance() {
    this->GenericState = EVexFinalGenericState::Invalid;
    this->RevealingState = EVexFinalRevealingState::Invalid;
    this->AttackState = EVexFinalAttackState::Invalid;
    this->HitState = EVexFinalHitState::Invalid;
    this->VoiceLineType = EVexFinalVoiceLineType::Invalid;
    this->EnterOffScreenState = false;
    this->ExitOffScreenState = false;
    this->EnterVanishingState = false;
    this->ExitVanishingState = false;
    this->EnterRevealingState = false;
    this->ExitRevealingState = false;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterStunnedState = false;
    this->ExitStunnedState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterAttackingState = false;
    this->ExitAttackingState = false;
    this->EnterBreakFloorState = false;
    this->ExitBreakFloorState = false;
    this->EnterBreakWallsState = false;
    this->ExitBreakWallsState = false;
    this->EnterFullBodySpeechLineState = false;
    this->ExitFullBodySpeechLineState = false;
}


