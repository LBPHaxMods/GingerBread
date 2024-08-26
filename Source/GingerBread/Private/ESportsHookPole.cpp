#include "ESportsHookPole.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"

AESportsHookPole::AESportsHookPole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HookWidth = 0.15f;
    this->HasPole = true;
    this->PoleLength = 0.50f;
    this->PoleStaticMesh = NULL;
    this->PoleMaterial = NULL;
    this->Pole = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pole"));
    this->Hook = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hook"));
    this->CapBack = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapBack"));
    this->CapFront = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapFront"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->Pole->SetupAttachment(RootComponent);
    this->Hook->SetupAttachment(RootComponent);
    this->CapBack->SetupAttachment(RootComponent);
    this->CapFront->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(Hook);
    this->GrappleTarget->SetupAttachment(Hook);
}

void AESportsHookPole::OnTouchingSackboyDestroyed(AActor* DestroyedActor) {
}

void AESportsHookPole::OnSackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails) {
}

void AESportsHookPole::OnSackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger) {
}


