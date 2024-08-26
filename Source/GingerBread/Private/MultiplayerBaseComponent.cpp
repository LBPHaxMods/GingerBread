#include "MultiplayerBaseComponent.h"

UMultiplayerBaseComponent::UMultiplayerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mpSessionManager = NULL;
    this->mpPrimaryPlayer = NULL;
}

void UMultiplayerBaseComponent::ShowPSPlusUpgradeUI(ULocalPlayer* Player) {
}

void UMultiplayerBaseComponent::KickLocalGuestPlayers() {
}

bool UMultiplayerBaseComponent::IsConnectionLimted() const {
    return false;
}

UGingerbreadSessionManager* UMultiplayerBaseComponent::GetSessionManager() const {
    return NULL;
}

ULocalPlayer* UMultiplayerBaseComponent::GetLocalPlayer() const {
    return NULL;
}




void UMultiplayerBaseComponent::CheckPlayOnlinePrivilege(const FNetworkSessionDelegate& Callback) {
}


