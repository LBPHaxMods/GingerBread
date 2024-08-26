#include "GingerbreadHUD.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "MediaSoundComponent.h"
#include "Camera3DHudManager.h"
#include "GingerbreadReplicatedHud.h"

AGingerbreadHUD::AGingerbreadHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HUDRoot"));
    this->DebugDisplay.AddDefaulted(1);
    this->SpawnedCamera3DHudClass = ACamera3DHudManager::StaticClass();
    this->SpawnedReplicatedHudClass = AGingerbreadReplicatedHud::StaticClass();
    this->PlayerJoinFailUIClass = NULL;
    this->PlayerJoinFailUI = NULL;
    this->Camera3DHudManager = NULL;
    this->ReplicatedHud = NULL;
    this->SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("HudSceneCapture"));
    this->MediaSound = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("HudMediaSound"));
    this->AreUIControlsBound = false;
    this->bHudInitialised = false;
    this->DefaultSoftImageWidget = NULL;
    this->SceneCapture->SetupAttachment(RootComponent);
}

bool AGingerbreadHUD::UpdateUIControlScheme(APlayerController* Controller, const UControlScheme* ControlScheme, bool Bind) {
    return false;
}

void AGingerbreadHUD::TakeScreenshotWithoutHud(UTextureRenderTarget2D* RenderTarget, bool bDeferred) {
}

void AGingerbreadHUD::SetUIControlsBound(bool UIControlsBound) {
}

void AGingerbreadHUD::ResetHudMediaPlayer() {
}

void AGingerbreadHUD::RemovePersistentScreen(UGingerbreadScreen* Screen) {
}

void AGingerbreadHUD::RefreshPromptsForController(AGingerbreadPlayerController* RefreshingController) {
}

bool AGingerbreadHUD::PushScreen(UGingerbreadScreen* Screen, bool LayerOnTop) {
    return false;
}

void AGingerbreadHUD::PostScreenPush(UGingerbreadScreen* pPushedScreen) {
}

void AGingerbreadHUD::PostScreenPop(UGingerbreadScreen* pPoppedScreen) {
}

bool AGingerbreadHUD::PopToScreen(FName ScreenName, bool bPopTargetScreen) {
    return false;
}

bool AGingerbreadHUD::PopTo(UGingerbreadScreen* Screen, bool bPopTargetScreen) {
    return false;
}

void AGingerbreadHUD::PopScreens(int32 ScreenCount) {
}

bool AGingerbreadHUD::PopScreen() {
    return false;
}


void AGingerbreadHUD::OnControllerConnectionChangeEvent(bool bIsConnected, int32 SomeValue, int32 ControllerIndex) {
}

void AGingerbreadHUD::OnAnyKeyPressed(AGingerbreadPlayerController* PlayerController) {
}

void AGingerbreadHUD::OnAnyAxisMoved(AGingerbreadPlayerController* PlayerController, float Delta) {
}

bool AGingerbreadHUD::IsScreenPersistent(const UGingerbreadScreen* Screen) const {
    return false;
}

bool AGingerbreadHUD::IsHudInitialised() const {
    return false;
}

UGingerbreadScreen* AGingerbreadHUD::GetTopScreen() const {
    return NULL;
}

TArray<UGingerbreadScreen*> AGingerbreadHUD::GetTopLayeredScreens() const {
    return TArray<UGingerbreadScreen*>();
}

int32 AGingerbreadHUD::GetScreenIndex(const UGingerbreadScreen* Screen) const {
    return 0;
}

UGingerbreadScreen* AGingerbreadHUD::GetScreenFromTop(int32 TopScreenOffset) const {
    return NULL;
}

int32 AGingerbreadHUD::GetScreenCount() const {
    return 0;
}

UGingerbreadScreen* AGingerbreadHUD::GetScreenComponent(FName ScreenName) const {
    return NULL;
}

UGingerbreadScreen* AGingerbreadHUD::GetScreen(FName ScreenName) const {
    return NULL;
}

AGingerbreadReplicatedHud* AGingerbreadHUD::GetReplicatedHud() {
    return NULL;
}

TArray<UGingerbreadScreen*> AGingerbreadHUD::GetPushedScreens() const {
    return TArray<UGingerbreadScreen*>();
}

AGingerbreadPlayerController* AGingerbreadHUD::GetPlayerController() {
    return NULL;
}

TArray<UGingerbreadScreen*> AGingerbreadHUD::GetPersistentScreens() const {
    return TArray<UGingerbreadScreen*>();
}

int32 AGingerbreadHUD::GetPersistentScreenCount() const {
    return 0;
}

UGingerbreadScreen* AGingerbreadHUD::GetPersistentScreen(FName ScreenName) const {
    return NULL;
}

bool AGingerbreadHUD::GetHideHud() const {
    return false;
}

UTexture2D* AGingerbreadHUD::GetGamepadIconFromKey(const FKey& Key) const {
    return NULL;
}

ACamera3DHudManager* AGingerbreadHUD::GetCamera3DHudManager() {
    return NULL;
}

UGingerbreadScreen* AGingerbreadHUD::GetBootScreen() const {
    return NULL;
}

void AGingerbreadHUD::ClearScreens() {
}

void AGingerbreadHUD::ClearPersistentScreens() {
}

void AGingerbreadHUD::AssignHudMediaPlayer(UMediaPlayer* MediaPlayer) {
}

void AGingerbreadHUD::AddPersistentScreen(UGingerbreadScreen* Screen) {
}


