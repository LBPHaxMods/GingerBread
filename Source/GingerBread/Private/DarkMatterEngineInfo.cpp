#include "DarkMatterEngineInfo.h"

FDarkMatterEngineInfo::FDarkMatterEngineInfo() {
    this->DefaultMovementSpace = EDarkMatterEngineMovementSpace::Universe;
    this->CanTeleport = false;
    this->WantsRelativeUpdate = false;
    this->SwitchMovementSpaceOnHit = false;
    this->GatherComponentsAutomatically = false;
}

