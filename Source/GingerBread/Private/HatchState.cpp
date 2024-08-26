#include "HatchState.h"

FHatchState::FHatchState() {
    this->ServerRequestTime = 0.00f;
    this->HatchState = EFakeHatchState::Invalid;
    this->HatchAlpha = 0.00f;
    this->PhysicalHatchVisible = false;
}

