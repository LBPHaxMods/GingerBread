#include "PlatapushVexed.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "NetworkEventComponent.h"
#include "TriggerActorComponent.h"

APlatapushVexed::APlatapushVexed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->MyRootComponent = (USceneComponent*)RootComponent;
    this->HitPoint = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->PlatapushCol = CreateDefaultSubobject<UBoxComponent>(TEXT("PlatapushCollision"));
    this->LaunchCol = NULL;
    this->FaceRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FaceCenter"));
    this->PlatapushHead = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Face_SK"));
    this->GameplayTagMain = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagMain"));
    this->Visualisation = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visualisation"));
    this->AkPlatapushVexed = CreateDefaultSubobject<UAkComponent>(TEXT("AkPlatapushVexed"));
    this->AkHapticsPlatapushVexed = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsPlatapushVexed"));
    this->RightEyeRotComp = NULL;
    this->LeftEyeRotComp = NULL;
    this->ExtendTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ExtendingTimeline"));
    this->RetractTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RetractTimeline"));
    this->InteractLaunch = NULL;
    this->OMLaunch = NULL;
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->NetworkEventComp = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComp"));
    this->ExtentionAmount = 40.00f;
    this->ManualMode = false;
    this->StartIn = true;
    this->CanInheritMomentum = true;
    this->PauseBetweenStrokes = 2.00f;
    this->Active = true;
    this->ExtendRetractPlayRate = 0.30f;
    this->VerticalLaunchPower = 150.00f;
    this->HorizontalLaunchPower = 0.02f;
    this->PrintString = false;
    this->CurveAsset_ExtendHorizontal = NULL;
    this->CurveAsset_ExtendVertical = NULL;
    this->CurveAsset_RetractHorizontal = NULL;
    this->CurveAsset_RetractVertical = NULL;
    this->AKE_SlideStart = NULL;
    this->AKE_SlideStop = NULL;
    this->AKE_Hit = NULL;
    this->PlayVox = false;
    this->AKE_VoxPush = NULL;
    this->AKE_VoxRetract = NULL;
    this->Haptics_SlideStart = NULL;
    this->Haptics_SlideStop = NULL;
    this->Haptics_Hit = NULL;
    this->Haptics_VoxPush = NULL;
    this->Haptics_VoxRetract = NULL;
    this->FF_VerticalBounceVibration = NULL;
    this->FF_LaunchSackboy = NULL;
    this->VerticalMovement = false;
    this->ExtendCurve = NULL;
    this->RetractCurve = NULL;
    this->CurrentState = EPlatapushVexedState::IN_IDLE;
    this->HitPoint->SetupAttachment(RootComponent);
    this->PlatapushCol->SetupAttachment(RootComponent);
    this->FaceRoot->SetupAttachment(PlatapushCol);
    this->PlatapushHead->SetupAttachment(FaceRoot);
    this->GameplayTagMain->SetupAttachment(PlatapushCol);
    this->Visualisation->SetupAttachment(RootComponent);
    this->AkPlatapushVexed->SetupAttachment(RootComponent);
    this->AkHapticsPlatapushVexed->SetupAttachment(PlatapushHead);
}

void APlatapushVexed::RectractVerticalVibration() {
}

void APlatapushVexed::RectractVerticalBounce() {
}

void APlatapushVexed::RectractTimelineUpdate(const float RetractAlpha) {
}

void APlatapushVexed::RectractTimelineFinish() {
}

void APlatapushVexed::RectractHorizontalBounceEvents() {
}

void APlatapushVexed::OnNetworkEvent(FName EventName) {
}

void APlatapushVexed::OnHitPointsPostModificationAttempt_Implementation(const FHitPointModifyResult& Result, const FName& reactionName) {
}

void APlatapushVexed::OnEndOverlapSackboyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void APlatapushVexed::OnEndInteractSackboyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APlatapushVexed::OnBeginOverlapSackboyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APlatapushVexed::OnBeginInteractSackboyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APlatapushVexed::ExtendTimelineUpdate(const float ExtendAlpha) {
}

void APlatapushVexed::ExtendTimelineFinish() {
}

void APlatapushVexed::EDITOR_SetupFromBlutility(FPlatapushVexedSetupData SetupData) {
}


