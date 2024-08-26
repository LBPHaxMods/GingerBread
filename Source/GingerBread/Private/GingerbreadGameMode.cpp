#include "GingerbreadGameMode.h"

AGingerbreadGameMode::AGingerbreadGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSeamlessTravel = true;
    this->bDisableTetherSpawn = false;
    this->bShowPlayerLocations = false;
    this->bPlayersHaveInfiniteLives = false;
    this->ShowHealthDebug = false;
    this->ShowHitPointsDebug = false;
    this->bAllowAdditionalLocalPlayers = true;
    this->StatCounter = NULL;
    this->Debug_AIShowGenericInfo = false;
    this->Debug_AIShowAlertInfo = false;
    this->Debug_AIShowVisionInfo = false;
    this->Debug_AIShowGroundedInfo = false;
    this->Debug_AIShowPatrolInfo = false;
    this->Debug_AIShowHookPointsDebug = false;
    this->AI_ParryEnabled = true;
    this->Debug_EnterJetpackOnDeath = false;
    this->UnlockMouseFromViewport = false;
    this->bForceAwardVoidEnergy = false;
    this->PlayerBaseMaterials[0] = NULL;
    this->PlayerBaseMaterials[1] = NULL;
    this->PlayerBaseMaterials[2] = NULL;
    this->PlayerBaseMaterials[3] = NULL;
    this->RestartHUD = NULL;
    this->SumoSackboyPawnClass = NULL;
    this->CurrentGameModeState = EBaseGameModeState::BASE_WaitOnLocalHostPersistentData;
}

void AGingerbreadGameMode::OnSackboyLeavingLevel(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy) {
}

void AGingerbreadGameMode::OnSackboyJoinedLevel(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy) {
}

void AGingerbreadGameMode::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}


