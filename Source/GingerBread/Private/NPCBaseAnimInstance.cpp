#include "NPCBaseAnimInstance.h"

UNPCBaseAnimInstance::UNPCBaseAnimInstance() {
    this->SackboyCloseIdle = NULL;
    this->NoSackboysIdle = NULL;
    this->AimSpaceEyes = NULL;
    this->AimSpaceHead = NULL;
    this->bTargetTrackingEnabled = false;
    this->bUseAimOffsets = false;
    this->Yaw = 0.00f;
    this->Pitch = 0.00f;
    this->LookAlpha = 0.00f;
}


