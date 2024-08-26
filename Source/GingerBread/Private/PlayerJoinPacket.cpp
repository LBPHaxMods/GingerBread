#include "PlayerJoinPacket.h"

FPlayerJoinPacket::FPlayerJoinPacket() {
    this->Slot = EPlayerSlot::PLAYER_SLOT_1;
    this->IsNetworkGameHost = false;
    this->PlayerReadyForLevel = false;
    this->PlayerJoinedGame = false;
    this->LastSeenJoinDir = EPlayerJoinDirection::Joined;
}

