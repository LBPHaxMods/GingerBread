#include "RhythmicMoverTool.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicMoverTool::ARhythmicMoverTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->MotionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MotionTimeline"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AkHapticsComponent = NULL;
    this->TargetActor = NULL;
    this->ShouldListenToAkMarkers = false;
    this->ShouldMoveAkComponentWithTargetActor = false;
    this->WakeAction = ERhythmicMotionWakeAction::TeleportToPosition;
    this->InformTargetActorOfMotion = false;
    this->DefaultMotionCurve = NULL;
    this->PreviousTargetActor = NULL;
    this->HasSetTargetActorInitialTransform = false;
    this->BillboardComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void ARhythmicMoverTool::SortIdleMotionKeyframes() {
}

void ARhythmicMoverTool::SortActiveMotionKeyframes() {
}

void ARhythmicMoverTool::ReplaceTargetActorReference(AActor* OldActor, AActor* NewActor) {
}

void ARhythmicMoverTool::OnRhythmManagerInSyncWithServer(ARhythmManager* pRhythmManager, FName PendingSectionName) {
}

void ARhythmicMoverTool::OnRep_ReplicatedPosition() {
}

void ARhythmicMoverTool::OnMusicStateChanged(ARhythmManager* pRhythmManager, const FMusicStateTableRow NewMusicState, const FMusicStateTableRow PreviousMusicState) {
}

void ARhythmicMoverTool::OnMotionTimelineUpdate(const float Alpha) {
}

void ARhythmicMoverTool::OffsetIdleMotionKeyframes() {
}

void ARhythmicMoverTool::OffsetActionMotionKeyframes() {
}

bool ARhythmicMoverTool::GetIsUsingActiveMotionSetup() const {
    return false;
}

FRhythmicMotionSetup ARhythmicMoverTool::GetIdleMotionSetup() const {
    return FRhythmicMotionSetup{};
}

FRhythmicMotionSetup ARhythmicMoverTool::GetCurrentMotionSetup() const {
    return FRhythmicMotionSetup{};
}

FRhythmicMotionSetup ARhythmicMoverTool::GetActiveMotionSetup() const {
    return FRhythmicMotionSetup{};
}

int32 ARhythmicMoverTool::AssignHapticEventForExistingAudioEvent(UAkAudioEvent* LookUpAudio, UAkAudioEvent* HapticEventToAssign) {
    return 0;
}

void ARhythmicMoverTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicMoverTool, ReplicatedPosition);
    DOREPLIFETIME(ARhythmicMoverTool, PlayedOnlyOnceAudioKeyframes);
}


