#include "RhythmicGroupRollHole.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicGroupRollHole::ARhythmicGroupRollHole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->EntranceMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EntranceMesh"));
    this->EntranceCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("EntranceCollider"));
    this->EntranceInteractCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("EntranceInteractCollider"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->BackgroundMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackgroundMesh"));
    this->PlayerOneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerOneMesh"));
    this->PlayerTwoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerTwoMesh"));
    this->PlayerThreeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerThreeMesh"));
    this->PlayerFourMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerFourMesh"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->GameplayTagMeshOne = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagMeshOne"));
    this->GameplayTagMeshTwo = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagMeshTwo"));
    this->GameplayTagMeshThree = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagMeshThree"));
    this->GameplayTagMeshFour = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagMeshFour"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->Exits[0] = NULL;
    this->Exits[1] = NULL;
    this->Exits[2] = NULL;
    this->Exits[3] = NULL;
    this->EntranceTangentLength = 100.00f;
    this->AllowZ = false;
    this->DistanceToSearchForFloor = 50.00f;
    this->SnappingDistance = 10.00f;
    this->MaxEntryAngle = 0.75f;
    this->SackboyYankHeightOffset = 2.00f;
    this->CostumeRadius = 3.00f;
    this->CostumeBlendInTime = 0.10f;
    this->CostumeBlendOutTime = 0.10f;
    this->TriggerNewMusicState = false;
    this->MusicStateTransitionBeat = 1.00f;
    this->MusicStateTransitionLoop = 8.00f;
    this->MusicStateTransitionRequestBeats = 1.00f;
    this->UseCurrentSectionTransitionLoop = false;
    this->BeatMatchMode = ERhythmicGroupRollHoleBeatMode::ExitBeat;
    this->RollBeat = 1.00f;
    this->ExitBeat = 1.00f;
    this->BeatLoop = 1;
    this->MinHoldBeats = 0.00f;
    this->MinTravelBeats = 1.00f;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->KeystoneAnimCurve = NULL;
    this->RollHoleMontage = NULL;
    this->DelayToDisableSkMeshTick = 0.20f;
    this->EnterEvent = NULL;
    this->StartTravelAudioEvent = NULL;
    this->StopTravelAudioEvent = NULL;
    this->EnterHapticEvent = NULL;
    this->ExitHapticEvent = NULL;
    this->EnterGamepadAudioEvent = NULL;
    this->ExitGamepadAudioEvent = NULL;
    this->StartTravelLoopHapticEvent = NULL;
    this->StopTravelLoopHapticEvent = NULL;
    this->CurrentState = ERhythmicGroupRollHoleState::Idle;
    this->bInitialEnter = true;
    this->NumOfPlayers = 1;
    this->GameplayAudioManager = NULL;
    this->PlayerOneMesh->SetupAttachment(BackgroundMesh);
    this->PlayerTwoMesh->SetupAttachment(BackgroundMesh);
    this->PlayerThreeMesh->SetupAttachment(BackgroundMesh);
    this->PlayerFourMesh->SetupAttachment(BackgroundMesh);
    this->GameplayTag->SetupAttachment(BackgroundMesh);
    this->GameplayTagMeshOne->SetupAttachment(PlayerOneMesh);
    this->GameplayTagMeshTwo->SetupAttachment(PlayerTwoMesh);
    this->GameplayTagMeshThree->SetupAttachment(PlayerThreeMesh);
    this->GameplayTagMeshFour->SetupAttachment(PlayerFourMesh);
    this->EntranceMesh->SetupAttachment(RootComponent);
    this->EntranceCollider->SetupAttachment(EntranceMesh);
    this->EntranceInteractCollider->SetupAttachment(EntranceMesh);
    this->BackgroundMesh->SetupAttachment(EntranceMesh);
}

void ARhythmicGroupRollHole::OnServerStartedSackboysRolling_Implementation() {
}

void ARhythmicGroupRollHole::OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) {
}

void ARhythmicGroupRollHole::OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) {
}

void ARhythmicGroupRollHole::OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) {
}

void ARhythmicGroupRollHole::OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) {
}

void ARhythmicGroupRollHole::OnRep_NumOfPlayers() {
}

void ARhythmicGroupRollHole::OnRep_Initial() {
}

void ARhythmicGroupRollHole::OnRep_CurrentState() {
}

void ARhythmicGroupRollHole::OnNumberSackboysChanged() {
}

void ARhythmicGroupRollHole::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ARhythmicGroupRollHole::OnJoinedPlayerCountChanged(int32 Count) {
}

void ARhythmicGroupRollHole::OnEntranceMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted) {
}

void ARhythmicGroupRollHole::OnCSPActionEvent(uint32 Type) {
}



void ARhythmicGroupRollHole::DisableSkMeshTick() {
}

void ARhythmicGroupRollHole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicGroupRollHole, CurrentState);
    DOREPLIFETIME(ARhythmicGroupRollHole, bInitialEnter);
    DOREPLIFETIME(ARhythmicGroupRollHole, NumOfPlayers);
    DOREPLIFETIME(ARhythmicGroupRollHole, SplineIndexMappings);
}


