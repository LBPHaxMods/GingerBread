#include "ESportsRaceEnd.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"

AESportsRaceEnd::AESportsRaceEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

    this->BoxCollision = (UBoxComponent*)RootComponent;
    this->ProjectileBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ProjectileBoxCollision"));
    this->BoxInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoxInteract"));
    this->EndGateBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateBase"));
    this->EndGateLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateLeft"));
    this->EndGateRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateRight"));
    this->EndGateFlag1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateFlag1"));
    this->EndGateFlag2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateFlag2"));
    this->EndGateFlag3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateFlag3"));
    this->EndGateFlag4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateFlag4"));
    this->EndGateFlag5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateFlag5"));
    this->EndGateFlag6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndGateFlag6"));
    this->BurstLeftVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BurstLeftVFX"));
    this->BurstRightVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BurstRightVFX"));
    this->ParticleEndGate = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_StartGate"));
    this->Ak_RaceEndGate = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RaceEndGate"));
    this->RaceEndSFX = NULL;
    this->RaceEndCheerSFX = NULL;
    this->RaceEndLoseSFX = NULL;
    this->RaceEndHaptic = NULL;
    this->RaceEndGamepadAudio = NULL;
    this->bMoving = false;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->EndGateRight->SetupAttachment(EndGateBase);
    this->EndGateFlag1->SetupAttachment(EndGateBase);
    this->EndGateFlag2->SetupAttachment(EndGateBase);
    this->EndGateFlag3->SetupAttachment(EndGateBase);
    this->EndGateFlag4->SetupAttachment(EndGateBase);
    this->EndGateFlag5->SetupAttachment(EndGateBase);
    this->EndGateFlag6->SetupAttachment(EndGateBase);
    this->BurstLeftVFX->SetupAttachment(EndGateBase);
    this->BurstRightVFX->SetupAttachment(EndGateBase);
    this->ParticleEndGate->SetupAttachment(EndGateBase);
    this->Ak_RaceEndGate->SetupAttachment(EndGateBase);
    this->ProjectileBoxCollision->SetupAttachment(RootComponent);
    this->BoxInteract->SetupAttachment(RootComponent);
    this->EndGateBase->SetupAttachment(RootComponent);
    this->EndGateLeft->SetupAttachment(EndGateBase);
}

void AESportsRaceEnd::RESET() {
}

void AESportsRaceEnd::OnTimedChallengeAvailable(AActor* ManagerActor) {
}

void AESportsRaceEnd::OnLevelSettingsAvailable(AActor* Manager) {
}

void AESportsRaceEnd::OnFinishLineBeginOverlapInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AESportsRaceEnd::OnFinishLineBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


