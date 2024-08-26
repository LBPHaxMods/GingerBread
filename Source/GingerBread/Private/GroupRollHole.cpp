#include "GroupRollHole.h"
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

AGroupRollHole::AGroupRollHole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->Exits[0] = NULL;
    this->Exits[1] = NULL;
    this->Exits[2] = NULL;
    this->Exits[3] = NULL;
    this->EntranceTangentLength = 100.00f;
    this->SplineSpeedMultiplier = 1.00f;
    this->UsesConstantSpeed = false;
    this->AllowZ = false;
    this->DistanceToSearchForFloor = 50.00f;
    this->SnappingDistance = 10.00f;
    this->MaxEntryAngle = 0.75f;
    this->SackboyYankHeightOffset = 2.00f;
    this->CostumeRadius = 3.00f;
    this->CostumeBlendInTime = 0.10f;
    this->CostumeBlendOutTime = 0.10f;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
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
    this->CurrentState = EGroupRollHoleState::Idle;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelper"));
    this->bInitialEnter = true;
    this->NumOfPlayers = 1;
    this->EntranceMesh->SetupAttachment(RootComponent);
    this->EntranceCollider->SetupAttachment(EntranceMesh);
    this->EntranceInteractCollider->SetupAttachment(EntranceMesh);
    this->BackgroundMesh->SetupAttachment(EntranceMesh);
    this->PlayerOneMesh->SetupAttachment(BackgroundMesh);
    this->PlayerTwoMesh->SetupAttachment(BackgroundMesh);
    this->PlayerThreeMesh->SetupAttachment(BackgroundMesh);
    this->PlayerFourMesh->SetupAttachment(BackgroundMesh);
    this->GameplayTag->SetupAttachment(BackgroundMesh);
    this->GameplayTagMeshOne->SetupAttachment(PlayerOneMesh);
    this->GameplayTagMeshTwo->SetupAttachment(PlayerTwoMesh);
    this->GameplayTagMeshThree->SetupAttachment(PlayerThreeMesh);
    this->GameplayTagMeshFour->SetupAttachment(PlayerFourMesh);
}

void AGroupRollHole::StartRollingDelayed() {
}

void AGroupRollHole::OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) {
}

void AGroupRollHole::OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) {
}

void AGroupRollHole::OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) {
}

void AGroupRollHole::OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) {
}

void AGroupRollHole::OnRep_NumOfPlayers() {
}

void AGroupRollHole::OnRep_Initial() {
}

void AGroupRollHole::OnRep_CurrentState() {
}

void AGroupRollHole::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& ID, bool forced) {
}

void AGroupRollHole::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void AGroupRollHole::OnEntranceMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted) {
}

void AGroupRollHole::OnCSPAction(uint32 Type) {
}



void AGroupRollHole::DisableSkMeshTick() {
}

void AGroupRollHole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGroupRollHole, CurrentState);
    DOREPLIFETIME(AGroupRollHole, bInitialEnter);
    DOREPLIFETIME(AGroupRollHole, NumOfPlayers);
    DOREPLIFETIME(AGroupRollHole, SplineIndexMappings);
}


