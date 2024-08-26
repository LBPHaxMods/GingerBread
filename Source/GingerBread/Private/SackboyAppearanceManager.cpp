#include "SackboyAppearanceManager.h"

ASackboyAppearanceManager::ASackboyAppearanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotAppearances.AddDefaulted(4);
    this->PlayerColoursParameter = NULL;
    this->ColourBlindProfiles = NULL;
    this->AppearanceManagerIsReady = false;
}

void ASackboyAppearanceManager::RefreshControllerColours() {
}

void ASackboyAppearanceManager::OnSettingsReady(const FGingerbreadPlayerId& player_id) {
}

void ASackboyAppearanceManager::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

FAppearanceSlot ASackboyAppearanceManager::GetUserAppearanceSlotFromController(AGingerbreadPlayerController* PlayerController) {
    return FAppearanceSlot{};
}

FAppearanceSlot ASackboyAppearanceManager::GetUserAppearanceSlot(EPlayerSlot PlayerSlot) {
    return FAppearanceSlot{};
}

FGingerbreadPlayerId ASackboyAppearanceManager::GetPlayerIDFromController(AGingerbreadPlayerController* Controller) {
    return FGingerbreadPlayerId{};
}

ASackboyAppearanceManager* ASackboyAppearanceManager::GetAppearanceManager(const UObject* WorldContextObject) {
    return NULL;
}

FLinearColor ASackboyAppearanceManager::GetAppearanceColour(EPlayerSlot PlayerSlot) {
    return FLinearColor{};
}


