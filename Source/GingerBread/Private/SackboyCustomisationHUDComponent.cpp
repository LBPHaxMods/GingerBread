#include "SackboyCustomisationHUDComponent.h"

USackboyCustomisationHUDComponent::USackboyCustomisationHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShopKeeperVOTable = NULL;
    this->GameState = NULL;
    this->GameMode = NULL;
}


void USackboyCustomisationHUDComponent::UpdatePlayerColors() {
}

void USackboyCustomisationHUDComponent::UnlockEmote(FName EmoteName, const FGingerbreadPlayerId& PlayerId) {
}

void USackboyCustomisationHUDComponent::SortEmotesForSackboy(const FGingerbreadPlayerId& PlayerId) {
}

void USackboyCustomisationHUDComponent::SetVOEvent(const FGingerbreadPlayerId& PlayerId, EVOEventType EventType) {
}

void USackboyCustomisationHUDComponent::SetHasEnteredCostumeShop(const FGingerbreadPlayerId& PlayerId) {
}

bool USackboyCustomisationHUDComponent::SetEmotionalStateForSackboy(ASackboy* playerSackboy, ESackboyEmotionalState NewState, EUINavigationDirection DpadDir) {
    return false;
}

bool USackboyCustomisationHUDComponent::SetEmoteForSackboy(ASackboy* playerSackboy, const FName& EmoteNameID, EUINavigationDirection DpadDir) {
    return false;
}

void USackboyCustomisationHUDComponent::SetCurrentCollectabells(const FGingerbreadPlayerId& PlayerId, int32 collectabellCount) {
}





void USackboyCustomisationHUDComponent::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool forced) {
}

void USackboyCustomisationHUDComponent::MarkEmoteNotNew(FName EmoteName, const FGingerbreadPlayerId& PlayerId) {
}

bool USackboyCustomisationHUDComponent::IsWorldUnlockedForHost(ELevelType World) const {
    return false;
}

bool USackboyCustomisationHUDComponent::IsWorldUnlocked(ELevelType World, FGingerbreadPlayerId PlayerId) {
    return false;
}

bool USackboyCustomisationHUDComponent::IsEmoteNew(FName EmoteName, const FGingerbreadPlayerId& PlayerId) {
    return false;
}

bool USackboyCustomisationHUDComponent::IsAllCostumeItemsDebugOn() {
    return false;
}

bool USackboyCustomisationHUDComponent::GetVOEvent(const FGingerbreadPlayerId& PlayerId, EVOEventType EventType) {
    return false;
}

TArray<ESackboyEmotionalState> USackboyCustomisationHUDComponent::GetUnlockedEmotionalStatesForSackboy(ASackboy* playerSackboy) {
    return TArray<ESackboyEmotionalState>();
}

TArray<FSackboyEmote> USackboyCustomisationHUDComponent::GetUnlockedEmotesForSackboy(const FGingerbreadPlayerId& PlayerId) {
    return TArray<FSackboyEmote>();
}

UAnimSequenceBase* USackboyCustomisationHUDComponent::GetShuffledShopKeeperVoAnim(EZomZomShopVOType VOType) {
    return NULL;
}

TArray<UAnimSequenceBase*> USackboyCustomisationHUDComponent::GetShopKeeperVOTypeAnims(EZomZomShopVOType VOType) const {
    return TArray<UAnimSequenceBase*>();
}

UAnimSequenceBase* USackboyCustomisationHUDComponent::GetRandomShopKeeperVoAnim(EZomZomShopVOType VOType) const {
    return NULL;
}

FName USackboyCustomisationHUDComponent::GetNameForSackboyAction(ESackboyActions specialActionName) {
    return NAME_None;
}

TArray<FSackboyEmote> USackboyCustomisationHUDComponent::GetLockedEmotesForSackboy(const FGingerbreadPlayerId& PlayerId) {
    return TArray<FSackboyEmote>();
}

bool USackboyCustomisationHUDComponent::GetHasEnteredCostumeShop(const FGingerbreadPlayerId& PlayerId) {
    return false;
}

ESackboyEmotionalState USackboyCustomisationHUDComponent::GetEmotionalStateForSackboy(ASackboy* playerSackboy, EUINavigationDirection DpadDir) {
    return ESackboyEmotionalState::Neutral;
}

int32 USackboyCustomisationHUDComponent::GetEmoteIndex(FName EmoteNameID) {
    return 0;
}

UTexture2D* USackboyCustomisationHUDComponent::GetEmoteBoundKeyTexture(ASackboy* Sackboy, ESackboyActions specialActionName) {
    return NULL;
}

int32 USackboyCustomisationHUDComponent::GetEmoteBindingIndexFromDirection(EUINavigationDirection DpadDir) {
    return 0;
}

FSackboyEmote USackboyCustomisationHUDComponent::GetEmote(FName EmoteNameID) {
    return FSackboyEmote{};
}

int32 USackboyCustomisationHUDComponent::GetCurrentCollectabells(const FGingerbreadPlayerId& PlayerId) {
    return 0;
}

ESackboyEmotionalState USackboyCustomisationHUDComponent::GetBoundEmotionalStateForSackboy(ASackboy* playerSackboy, EUINavigationDirection DpadDir) {
    return ESackboyEmotionalState::Neutral;
}

FSackboyEmote USackboyCustomisationHUDComponent::GetBoundEmoteForSackboy(ASackboy* playerSackboy, EUINavigationDirection DpadDir) {
    return FSackboyEmote{};
}






