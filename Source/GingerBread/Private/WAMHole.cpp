#include "WAMHole.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AWAMHole::AWAMHole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->MoleHoleSM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MoleHoleSM"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->MoleHoleScaleDown = CreateDefaultSubobject<UTimelineComponent>(TEXT("MoleHoleScaleDown"));
    this->ShouldPlayerVisibleTriggerMamaMole = true;
    this->SightRadius = 60.00f;
    this->ShowSightRadius = false;
    this->MoleGameRef = NULL;
    this->Round = 0;
    this->PreGame_Worship = false;
    this->PostGame_Celebrate = false;
    this->ReqNumPlayers = EWAMMoleReqPlayerEnum::AnyNumberOfPlayers;
    this->PostGame_CelebrateOffsetTime = 0.00f;
    this->HeadTrackingSpeed = 0.20f;
    this->SurpriseHeadTrackingSpeed = 0.50f;
    this->ShouldAwardPlayerWithCollectabell = true;
    this->DisplayProxyMoleHole = true;
    this->MoleHoleScaleDown_AlphaCurve = NULL;
    this->DestroyHoleSpeed = 0.50f;
    this->MoleHoleDestroyVFX = NULL;
    this->Mole = NULL;
    this->MoleHoleSM->SetupAttachment(RootComponent);
}

void AWAMHole::OpenMoleHoleAnim() {
}

void AWAMHole::OnRep_Mole() {
}

void AWAMHole::MoleHoleScaleDown_Update(const float Alpha) {
}

void AWAMHole::MoleHoleScaleDown_Finished() {
}

void AWAMHole::CloseMoleHoleAnim() {
}

void AWAMHole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWAMHole, Mole);
}


