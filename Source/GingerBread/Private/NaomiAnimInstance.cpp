#include "NaomiAnimInstance.h"

UNaomiAnimInstance::UNaomiAnimInstance() {
    this->PunchHand = ENaomiPunchHand::Invalid;
    this->PunchSpeed = ENaomiPunchSpeed::Invalid;
    this->ScreenDestroyed = ENaomiScreenDestroyed::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterStartAdminModeState = false;
    this->ExitStartAdminModeState = false;
    this->EnterFinishAdminModeState = false;
    this->ExitFinishAdminModeState = false;
    this->EnterEnragedState = false;
    this->ExitEnragedState = false;
    this->EnterShortCircuitState = false;
    this->ExitShortCircuitState = false;
    this->EnterLaserState = false;
    this->EnterLaserFoldState = false;
    this->ExitLaserState = false;
    this->EnterNormalPunchState = false;
    this->ExitNormalPunchState = false;
    this->EnterChargedPunchState = false;
    this->EnterChargedPunchOutOfState = false;
    this->ExitChargedPunchState = false;
    this->EnterScreenDestroyedState = false;
    this->ExitScreenDestroyedState = false;
    this->EnterDefeatedState = false;
    this->IsEyeClosed = false;
}


