#include "VexFinalRevealVanishServerState.h"

FVexFinalRevealVanishServerState::FVexFinalRevealVanishServerState() {
    this->ServerTimeStamp = 0.00f;
    this->RevealVanishState = EVexFinalRevealVanishState::Vanished;
    this->CurrentRevealVanishTimeStamp = 0.00f;
    this->RevealVanishTimer = 0.00f;
}

