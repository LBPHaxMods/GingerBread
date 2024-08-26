#include "ButtBomberAnimInst.h"

UButtBomberAnimInst::UButtBomberAnimInst() {
    this->CurrentState = EButtBomberState::Idle;
    this->IKHandRightBlendWeight = 0.00f;
    this->IKHandLeftBlendWeight = 0.00f;
    this->CanEnterIdle = true;
    this->CanEnterAlert = false;
    this->CanEnterBored = false;
    this->CanEnterChase = false;
    this->CanEnterTargetting = false;
    this->CanEnterStartFalling = false;
    this->CanEnterLand = false;
    this->IKBlendWeight = 0.00f;
}


