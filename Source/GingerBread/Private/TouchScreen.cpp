#include "TouchScreen.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MultiplayerObjectComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "TriggerActorComponent.h"

ATouchScreen::ATouchScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Screen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Screen"));
    this->IconMesh = NULL;
    this->AKComp = CreateDefaultSubobject<UAkComponent>(TEXT("AKComp"));
    this->Root = (USceneComponent*)RootComponent;
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->MultiplayerObject = CreateDefaultSubobject<UMultiplayerObjectComponent>(TEXT("MultiplayerObject"));
    this->ScreenOnMaterial = NULL;
    this->ScreenOffMaterial = NULL;
    this->BSODMaterial = NULL;
    this->bScreenOn = true;
    this->PageTransitionInTime = 0.50f;
    this->PageTransitionOutTime = 0.50f;
    this->ActivePage = 0;
    this->bLoopPages = false;
    this->bCanBSOD = true;
    this->BSODDuration = 1.00f;
    this->bShouldBSODClearPage = false;
    this->UseScreensaver = true;
    this->DelayTillScreensaver = 5.00f;
    this->CurrentPageIndex = 0;
    this->ChangePageSound = NULL;
    this->PageCompleteSound = NULL;
    this->BorderMaterial = NULL;
    this->EdgeMesh = NULL;
    this->CornerMesh = NULL;
    this->GeneratedMesh = NULL;
    this->OutScreenMask = NULL;
    this->OutMaskSize = 0.00f;
    this->OutScreenMesh = NULL;
    this->NetActivePage = 0;
    this->AuthCurrentPageIndex = 0;
    this->bHasAdminPhase = false;
    this->SackboyCount = -1;
    this->AppEdgeInset = 1.00f;
    this->AKComp->SetupAttachment(RootComponent);
    this->Screen->SetupAttachment(RootComponent);
}

void ATouchScreen::ToggleScreenState() {
}

void ATouchScreen::ToggleScreenCollision() {
}

void ATouchScreen::SetUpForMP() {
}

void ATouchScreen::SetNewPage(const int32 PageIndex) {
}

void ATouchScreen::RunManualInitialization() {
}

void ATouchScreen::OnSackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails) {
}

void ATouchScreen::OnSackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger) {
}

void ATouchScreen::OnSackboyCountChanged(int32 NewSackCount, int32 OldSackCount) {
}

void ATouchScreen::OnRep_ScreenOn() {
}

void ATouchScreen::OnRep_AUTHSackboyCountChange() {
}

void ATouchScreen::OnRep_AuthCurrentPageIndex() {
}

void ATouchScreen::GoToNextPage() {
}

UStaticMeshComponent* ATouchScreen::GetScreenMesh() const {
    return NULL;
}

bool ATouchScreen::GetBSODActive() const {
    return false;
}

UTouchScreenAppBaseComponent* ATouchScreen::GetApp(TSubclassOf<UTouchScreenAppBaseComponent> ComponentClass, int32 ID) const {
    return NULL;
}

void ATouchScreen::GetAllApps(const TSubclassOf<UTouchScreenAppBaseComponent> ComponentClass, TArray<UTouchScreenAppBaseComponent*>& OutComponents) {
}

void ATouchScreen::AppLockChangedState(UTouchScreenAppBaseComponent* App, const bool bIsLocked) {
}

UTouchScreenAppBaseComponent* ATouchScreen::AddAppToScreen_BP(TSubclassOf<UTouchScreenAppBaseComponent> ComponentClass, int32 Page) {
    return NULL;
}

void ATouchScreen::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATouchScreen, bScreenOn);
    DOREPLIFETIME(ATouchScreen, NetActivePage);
    DOREPLIFETIME(ATouchScreen, AuthCurrentPageIndex);
    DOREPLIFETIME(ATouchScreen, SackboyCount);
}


