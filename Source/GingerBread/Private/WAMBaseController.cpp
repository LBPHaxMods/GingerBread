#include "WAMBaseController.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/TextRenderComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AWAMBaseController::AWAMBaseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->DebugText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DebugText"));
    this->WinLoseText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("WinLoseText"));
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->RewardsDrop = CreateDefaultSubobject<USceneComponent>(TEXT("RewardsDrop"));
    this->Billboard1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard1"));
    this->Ak = CreateDefaultSubobject<UAkComponent>(TEXT("Ak"));
    this->InitMoleTriggerSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InitMoleTriggerSphere"));
    this->InitMoleTriggerInteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InitMoleTriggerInteractSphere"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->BonusRoomMusic = NULL;
    this->StopLevelMusicClip = NULL;
    this->StartLevelMusicClip = NULL;
    this->StartLevelMusicStateGroup = TEXT("music");
    this->StartLevelMusicState = TEXT("Main");
    this->TriggerHole = NULL;
    this->PrizeHole = NULL;
    this->InitMoleTriggerSphereSize = 32.00f;
    this->BaitPrize = false;
    this->SlapInitMoleToTriggerGame = true;
    this->ResetOnFail = false;
    this->RoundTimes.AddDefaulted(5);
    this->MoleHitScorePerWave.AddDefaulted(5);
    this->MoleUndergrownAnimTime = 0.80f;
    this->Mole_BP = NULL;
    this->PrizeMole_BP = NULL;
    this->StartMolesBurrowTime = 2.00f;
    this->QueenMoleEmergeOffsetTime = 1.50f;
    this->QueenMoleStealOrbOffsetTime = 1.40f;
    this->BurrowFasterOffsetTime = 2.00f;
    this->LossAwwAudio = NULL;
    this->MoleRoundTickAudio = NULL;
    this->MoleRoundTickEnd = NULL;
    this->TimedCollectableFail = NULL;
    this->MoleCelebrateTada = NULL;
    this->WinCheersAudio = NULL;
    this->MoleLooseCannon = NULL;
    this->CountdownTimer_AlphaCurve = NULL;
    this->PrizeMole = NULL;
    this->State = EWAMControllerState::DisabledState;
    this->DebugText->SetupAttachment(RootComponent);
    this->WinLoseText->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(RootComponent);
    this->RewardsDrop->SetupAttachment(RootComponent);
    this->Billboard1->SetupAttachment(RewardsDrop);
    this->Ak->SetupAttachment(RootComponent);
    this->InitMoleTriggerSphere->SetupAttachment(RootComponent);
    this->InitMoleTriggerInteractSphere->SetupAttachment(RootComponent);
}

void AWAMBaseController::RegisterMoleHit(AWAMMole* Mole) {
}

void AWAMBaseController::OnTriggerSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWAMBaseController::OnTriggerSphereBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AWAMBaseController::OnRep_State() {
}

void AWAMBaseController::OnRep_PrizeMole() {
}

void AWAMBaseController::OnRep_MolePool() {
}

void AWAMBaseController::DeallocateAllMoles_Implementation() {
}

void AWAMBaseController::ChangeStateToTriggerReady(AActor* LookAtActor) {
}

void AWAMBaseController::AllocatePrizeMoleToHole_Implementation(AWAMHole* Hole) {
}

void AWAMBaseController::AllocateMoleToHole_Implementation(const int32 poolIndex, AWAMHole* Hole) {
}

void AWAMBaseController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWAMBaseController, MolePool);
    DOREPLIFETIME(AWAMBaseController, PrizeMole);
    DOREPLIFETIME(AWAMBaseController, State);
}


