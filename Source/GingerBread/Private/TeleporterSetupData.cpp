#include "TeleporterSetupData.h"

FTeleporterSetupData::FTeleporterSetupData() {
    this->TransitionType = ETeleporterTransition::Pan;
    this->TeleportOrderType = ETeleporterPlayerSequence::Default;
    this->TeleportAll = false;
    this->RemoveGloop = false;
    this->FadeInTime = 0.00f;
    this->HoldDelay = 0.00f;
    this->FadeOutTime = 0.00f;
    this->CutsceneDelay = 0.00f;
    this->LevelSequencer = NULL;
}

