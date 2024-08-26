#include "SingleRollHole.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "TriggerActorComponent.h"

ASingleRollHole::ASingleRollHole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->EntranceMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EntranceMesh"));
    this->EntranceCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("EntranceCollider"));
    this->EntranceInteractCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("EntranceInteractCollider"));
    this->ExitMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ExitMesh"));
    this->ExitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("ExitCollider"));
    this->ExitInteractCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("ExitInteractCollider"));
    this->MainSpline = CreateDefaultSubobject<USplineComponent>(TEXT("MainSpline"));
    this->EntranceParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EntranceParticles"));
    this->ExitParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExitParticles"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->CostumeRadius = 3.00f;
    this->CostumeBlendInTime = 0.10f;
    this->CostumeBlendOutTime = 0.10f;
    this->SplineSpeedMultiplier = 1.00f;
    this->UsesConstantSpeed = false;
    this->AllowZ = false;
    this->DistanceToSearchForFloor = 10.00f;
    this->SnappingDistance = 10.00f;
    this->IsTwoWay = true;
    this->MaxEntryAngle = 45.00f;
    this->EntranceHoleType = ERollHoleType::Floor;
    this->ExitHoleType = ERollHoleType::Floor;
    this->RollHoleMontageDoor = NULL;
    this->RollHoleMontagePortal = NULL;
    this->PortalAnimationBlueprint = NULL;
    this->DoorAnimationBlueprint = NULL;
    this->DelayToDisableSkMeshTick = 0.20f;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->FirstEnterEvent = NULL;
    this->EnterEvent = NULL;
    this->FirstExitEvent = NULL;
    this->ExitEvent = NULL;
    this->StartTravelAudioEvent = NULL;
    this->StopTravelAudioEvent = NULL;
    this->DoorMesh = NULL;
    this->PortalMesh = NULL;
    this->DelayBetweenSpawns = 0.20f;
    this->NumberOfScoreBubbles = 0;
    this->FirstEnterVibration = NULL;
    this->EnterVibration = NULL;
    this->TravellingVibration = NULL;
    this->FirstExitVibration = NULL;
    this->ExitVibration = NULL;
    this->PlayTravellingHapticEvent = NULL;
    this->StopTravellingHapticEvent = NULL;
    this->FirstEnterHapticsEvent = NULL;
    this->EnterHapticsEvent = NULL;
    this->FirstExitHapticsEvent = NULL;
    this->ExitHapticsEvent = NULL;
    this->EnterGamepadAudioEvent = NULL;
    this->ExitGamepadAudioEvent = NULL;
    this->IsEntranceFirstUse = true;
    this->IsExitFirstUse = true;
    this->GameplayAudioManager = NULL;
    this->EntranceMesh->SetupAttachment(RootComponent);
    this->EntranceCollider->SetupAttachment(EntranceMesh);
    this->EntranceInteractCollider->SetupAttachment(EntranceMesh);
    this->ExitMesh->SetupAttachment(RootComponent);
    this->ExitCollider->SetupAttachment(ExitMesh);
    this->ExitInteractCollider->SetupAttachment(ExitMesh);
    this->MainSpline->SetupAttachment(RootComponent);
    this->EntranceParticles->SetupAttachment(EntranceMesh);
    this->ExitParticles->SetupAttachment(ExitMesh);
    this->PickupContainer->SetupAttachment(RootComponent);
}

void ASingleRollHole::OnWake_Implementation() {
}

void ASingleRollHole::OnSleep_Implementation() {
}

void ASingleRollHole::OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) {
}

void ASingleRollHole::OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) {
}

void ASingleRollHole::OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) {
}

void ASingleRollHole::OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) {
}

void ASingleRollHole::OnRep_InitialUse() {
}

void ASingleRollHole::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ASingleRollHole::OnExitMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted) {
}

void ASingleRollHole::OnEntranceMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted) {
}


void ASingleRollHole::DisableSkMeshTick(USkeletalMeshComponent* SKMesh) {
}

void ASingleRollHole::CLIENT_RollStart_Implementation(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex) {
}

void ASingleRollHole::CLIENT_RollEnd_Implementation(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex, ERollHoleEndReason EndReason) {
}

void ASingleRollHole::ClearIgnoredSackboy() {
}

void ASingleRollHole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASingleRollHole, IsEntranceFirstUse);
    DOREPLIFETIME(ASingleRollHole, IsExitFirstUse);
}


