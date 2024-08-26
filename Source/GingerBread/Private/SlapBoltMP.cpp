#include "SlapBoltMP.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "TriggerActorComponent.h"

ASlapBoltMP::ASlapBoltMP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Root = (USceneComponent*)RootComponent;
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->BoltWasher = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoltWasher"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ForwardTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ForwardTimeline"));
    this->ReverseTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ReverseTimeline"));

    this->ForwardFloatCurve = NULL;
    this->ReverseFloatCurve = NULL;
    this->ScrewActor = NULL;
    this->P1Angle = 1.00f;
    this->P2Angle = 1.40f;
    this->P3Angle = 1.80f;
    this->P4Angle = 2.20f;
    this->LightDamageMod = 0.70f;
    this->MediumDamageMod = 1.00f;
    this->HeavyDamageMod = 1.30f;
    this->RadialDamageMod = 0.90f;
    this->UnblockableMod = 1.00f;
    this->AnglePerSlap = 750.00f;
    this->TotalRotationAngle = 2880.00f;
    this->LaunchSpeed = 100.00f;
    this->TimelinePlayRate = 2.00f;
    this->RotationMultiplier = 2.43f;
    this->HitAkEvent = NULL;
    this->PopOutAkEvent = NULL;
    this->RewindAkEvent = NULL;
    this->RewindStopAkEvent = NULL;
    this->AuthState = ESlapBoltMPState::Seated;
    this->SlapCount = 0;
    this->SlappedByCount = 0;
    this->SlapDamageLevel = EDamageLevel::Light;
    this->PickupContainer->SetupAttachment(RootComponent);
    this->BoltWasher->SetupAttachment(RootComponent);
    this->ArrowComponent->SetupAttachment(RootComponent);
}

void ASlapBoltMP::ReverseTLUpdate(float InAlpha) {
}

void ASlapBoltMP::ReverseTLFinished() {
}

void ASlapBoltMP::OnScrewSlappedRPC_Implementation(float InForwardRot, float InStartAngle, ASackboy* InSlappedBy) {
}

void ASlapBoltMP::OnRep_ReplicateScrew() {
}

void ASlapBoltMP::OnRep_AuthState() {
}

void ASlapBoltMP::ForwardTLUpdate(float InAlpha) {
}

void ASlapBoltMP::ForwardTLFinished() {
}

void ASlapBoltMP::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASlapBoltMP, AuthState);
    DOREPLIFETIME(ASlapBoltMP, SpawnedScrew);
    DOREPLIFETIME(ASlapBoltMP, SlapCount);
    DOREPLIFETIME(ASlapBoltMP, SlappedByCount);
    DOREPLIFETIME(ASlapBoltMP, SlapDamageLevel);
}


