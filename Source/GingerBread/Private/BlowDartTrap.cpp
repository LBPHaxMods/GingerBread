#include "BlowDartTrap.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "InteractionComponent.h"
#include "NetworkEventComponent.h"
#include "TriggerActorComponent.h"

ABlowDartTrap::ABlowDartTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkMeshComponent"));

    this->SkMeshComponent = (USkeletalMeshComponent*)RootComponent;
    this->BoxColliderComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxColliderComponent"));
    this->InteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractComponent"));
    this->PLComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PLComponent"));
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComponent"));
    this->NetworkEventComp = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComp"));
    this->TriggerActorComp = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComp"));
    this->DartTrapWarning = NULL;
    this->DartTrapFire = NULL;
    this->LoopTime = 2.50f;
    this->DartWarmup = 1.00f;
    this->Loop = true;
    this->StartDelay = 0.00f;
    this->DartSpeed = 100.00f;
    this->DartLifetime = 4.00f;
    this->DartsCanBeBlocked = true;
    this->IgnoreOtherBlowDartActorCollisions = false;
    this->MaxDarts = 5;
    this->IsActive = true;
    this->PointLightIntensity = 50000.00f;
    this->DartFireDelay = 0.25f;
    this->BlowDartBlueprint = NULL;
    this->BoxColliderComponent->SetupAttachment(RootComponent);
    this->InteractComponent->SetupAttachment(BoxColliderComponent);
    this->PLComponent->SetupAttachment(RootComponent);
    this->ParticleComponent->SetupAttachment(RootComponent);
}

void ABlowDartTrap::SetActive(bool Active) {
}

void ABlowDartTrap::OnNetworkEvent(FName EventName) {
}

void ABlowDartTrap::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABlowDartTrap::OnComponentEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ABlowDartTrap::InitialDelayCompleted() {
}

void ABlowDartTrap::FireDart() {
}


