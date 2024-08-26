#include "KeyUIActor.h"
#include "Components/ChildActorComponent.h"
#include "HudAmbientMovementComponent.h"
#include "HudRootSceneComponent.h"
#include "HudSkeletalMeshComponent.h"
#include "HudStaticMeshComponent.h"

AKeyUIActor::AKeyUIActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KeyRoot = CreateDefaultSubobject<UHudRootSceneComponent>(TEXT("KeyRoot"));
    this->HudAmbientMovementKey = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovementKey"));
    this->KeySkele = CreateDefaultSubobject<UHudSkeletalMeshComponent>(TEXT("KeySkele"));
    this->KeyMesh = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("KeyMesh"));
    this->LineRoot = CreateDefaultSubobject<UHudRootSceneComponent>(TEXT("LineRoot"));
    this->FishingLine1 = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("FishingLine1"));
    this->HudAmbientMovementText = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovementText"));
    this->NumberOfKeys = CreateDefaultSubobject<UChildActorComponent>(TEXT("NumberOfKeys"));
    this->AwayAudioEvent = NULL;
    this->AppearAudioEvent = NULL;
    this->AddAudioEvent = NULL;
    this->AddHapticsEvent = NULL;
    this->AllKeysAnimation = NULL;
    this->LastKeyAnimation = NULL;
    this->NumberOfKeys->SetupAttachment(HudAmbientMovementText);
    this->KeyRoot->SetupAttachment(RootComponent);
    this->HudAmbientMovementKey->SetupAttachment(KeyRoot);
    this->KeySkele->SetupAttachment(HudAmbientMovementKey);
    this->KeyMesh->SetupAttachment(KeySkele);
    this->LineRoot->SetupAttachment(KeySkele);
    this->FishingLine1->SetupAttachment(LineRoot);
    this->HudAmbientMovementText->SetupAttachment(RootComponent);
}

void AKeyUIActor::PlayAddKey_Delay() {
}

void AKeyUIActor::OnKeyOutroFinished() {
}

void AKeyUIActor::OnKeyIntroFinished() {
}

void AKeyUIActor::IsKeyringOn(bool& IsOn) {
}

void AKeyUIActor::GetKeySpawnTransform(FTransform& Transform) {
}


