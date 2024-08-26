#include "TemporaryScoreBubble.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

ATemporaryScoreBubble::ATemporaryScoreBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak Collected SFX"));
    this->UsePulseBubbleMaterial = true;
    this->AkSpawnSFX = NULL;
    this->SpawnVFX = NULL;
    this->PopInCurve = NULL;
    this->AkTimedOutSFX = NULL;
    this->TimedOutVFX = NULL;
    this->PopOutCurve = NULL;
    this->Server_State = ETemporaryScoreBubbleState::PoppingIn;
    this->Server_SpawnedTimestamp = 0.00f;
    this->OwningSpline = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
}

void ATemporaryScoreBubble::OnWakeSleepChanged(bool bIsWake) {
}

void ATemporaryScoreBubble::OnRep_ServerState() {
}

void ATemporaryScoreBubble::OnRep_OwningSpline() {
}

void ATemporaryScoreBubble::OnCollectedEvent(ACollectableBase* Collectable, ASackboy* CollectingSackboy) {
}

void ATemporaryScoreBubble::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATemporaryScoreBubble, Server_State);
    DOREPLIFETIME(ATemporaryScoreBubble, Server_SpawnedTimestamp);
    DOREPLIFETIME(ATemporaryScoreBubble, OwningSpline);
}


