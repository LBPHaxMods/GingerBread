#include "GingerbreadScreen.h"

UGingerbreadScreen::UGingerbreadScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScreenWidgetClass = NULL;
    this->ScreenWidgetClass_PC = NULL;
    this->PauseHUDComponent = NULL;
    this->PauseHUDComponent_PC = NULL;
    this->DebugHUDComponent = NULL;
    this->ReplicateScreenPush = false;
    this->CanReplicateScreensOnTop = false;
    this->ScreenListPushType = EUIScreenListPushType::None;
    this->ParentHUD = NULL;
    this->RootWidget = NULL;
    this->bIsLoaded = false;
    this->bIsInitialised = false;
    this->bRemainLoaded = false;
    this->bWidgetRemainsInViewport = false;
    this->bIsBootScreen = false;
    this->bCanPauseOver = false;
    this->bIsScreenActive = false;
    this->LastDesiredVisiblity = false;
    this->CurrentVisiblity = false;
    this->HidesWithHud = false;
    this->AllowsLocalCoopJoining = true;
    this->IsLayeredUpon = false;
    this->IsLayeringObstructed = false;
    this->IsObstructingLayers = true;
    this->ShowMouseWhenScreenActive = false;
    this->ShowMouseForMainPlayerOnly = true;
}

void UGingerbreadScreen::UnregisterCursor(UGingerbreadHUDComponent* Cursor) {
}

void UGingerbreadScreen::RegisterCursor(UGingerbreadHUDComponent* Cursor) {
}

bool UGingerbreadScreen::PushThisScreen(bool LayerOnTop) {
    return false;
}

bool UGingerbreadScreen::PopThisScreen(bool PopScreensAbove) {
    return false;
}






bool UGingerbreadScreen::IsTopScreen() const {
    return false;
}

bool UGingerbreadScreen::IsScreenActive() const {
    return false;
}

bool UGingerbreadScreen::IsBootScreen() const {
    return false;
}

int32 UGingerbreadScreen::GetScreenLayer() const {
    return 0;
}

bool UGingerbreadScreen::GetIsObstructingLayers() const {
    return false;
}

bool UGingerbreadScreen::GetIsLayered() const {
    return false;
}

void UGingerbreadScreen::EnableHUDTick(UGingerbreadHUDComponent* HUDComponent, bool bTick) {
}

bool UGingerbreadScreen::CanPauseOver() {
    return false;
}


