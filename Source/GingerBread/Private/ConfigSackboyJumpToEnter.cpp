#include "ConfigSackboyJumpToEnter.h"

UConfigSackboyJumpToEnter::UConfigSackboyJumpToEnter() {
    this->JumpDurationSeconds.AddDefaulted(4);
    this->CopterJumpToleranceCm = 1.00f;
    this->CopterMaxIterationCount = 16;
    this->PostJumpDelaySeconds = 0.00f;
}


