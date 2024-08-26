#include "WaterObjectProc.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "ProcStaticMeshComponent.h"
#include "TriggerActorComponent.h"

AWaterObjectProc::AWaterObjectProc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ProcWaterStaticMesh = CreateDefaultSubobject<UProcStaticMeshComponent>(TEXT("ProcWaterStaticMesh"));
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Ak_WaterObjectProc = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_WaterObjectProc"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->DebugHigherFoamLevelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebugHigherFoamLevelMesh"));
    this->DebugLowerFoamLevelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebugLowerFoamLevelMesh"));
    this->WaveMotion = CreateDefaultSubobject<UTimelineComponent>(TEXT("WaveMotion"));
    this->AmplitudeCurve = NULL;
    this->bIsActive = false;
    this->bAutoupdate = false;
    this->LowerFoamLevel = 0.00f;
    this->HighFoamLevel = 50.00f;
    this->WaterMaterial = NULL;
    this->WaterMeshOverride = NULL;
    this->bOnlyAutoAttachCurrentSubLevel = true;
    this->WaterHeight = 0.00f;
    this->InitialWaterHeight = 0.00f;
    this->CurrentWaterHeight = 0.00f;
    this->WaterPlaneOffsetX = 0.00f;
    this->WaterPlaneOffsetY = 0.00f;
    this->WaveHeight = 0.00f;
    this->bPlayWaveAtBeginPlay = false;
    this->bStartAtMaxheight = false;
    this->DelayAtTop = 0.00f;
    this->DelayAtBottom = 0.00f;
    this->RiseTime = 0.50f;
    this->LowerTime = 0.50f;
    this->StartDownAudio = NULL;
    this->StartUpAudio = NULL;
    this->PreEndDownAudio = NULL;
    this->PreEndUpAudio = NULL;
    this->PreEndTriggerTime = 1.00f;
    this->flowRate = 0.00f;
    this->WaterDMI = NULL;
    this->ProcWaterStaticMesh->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(RootComponent);
    this->Ak_WaterObjectProc->SetupAttachment(ProcWaterStaticMesh);
    this->DebugHigherFoamLevelMesh->SetupAttachment(RootComponent);
    this->DebugLowerFoamLevelMesh->SetupAttachment(RootComponent);
}

void AWaterObjectProc::WaveMotionTLFinished() {
}


void AWaterObjectProc::StopWater() {
}

void AWaterObjectProc::SetWaterHeight(float InNewWaterHeight) {
}

void AWaterObjectProc::SetFlowRate(float InFlowRate) {
}

void AWaterObjectProc::RestartWaveMotion() {
}

void AWaterObjectProc::RestartAfterHeightChange(bool InbWasMovingUp) {
}

void AWaterObjectProc::PlayWave() {
}

void AWaterObjectProc::OnRep_ReplicateIsActive() {
}

void AWaterObjectProc::OnRep_ReplicateFlowRate() {
}

void AWaterObjectProc::OnGingerBreadManagerAvailable(AActor* ManagerActor) {
}


void AWaterObjectProc::AmplitudeTLUpdate(float InAlpha) {
}

void AWaterObjectProc::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWaterObjectProc, bIsActive);
    DOREPLIFETIME(AWaterObjectProc, WaterHeight);
    DOREPLIFETIME(AWaterObjectProc, flowRate);
}


