#include "ThrowableObject.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AICarryableComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AThrowableObject::AThrowableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->RollDetector = CreateDefaultSubobject<USphereComponent>(TEXT("RollDetector"));
    this->RollInteractDetector = CreateDefaultSubobject<UInteractionComponent>(TEXT("RollInteractDetector"));

    this->AICarryableComponent = CreateDefaultSubobject<UAICarryableComponent>(TEXT("AICarryableComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->SplatDecalMaterial = NULL;
    this->ImpactAudio = NULL;
    this->ObjectVFX = NULL;
    this->ObjectState = EThrowableState::AtRest;
    this->BrokenPartLifeSpan = 3.00f;
    this->BreakForce = 5.00f;
    this->Breakable = false;
    this->ThrowableObjectType = EThrowableType::Seed;
    this->CanBePickedUp = true;
    this->Damage = -50.00f;
    this->GameplayTag->SetupAttachment(StaticMesh);
    this->RollDetector->SetupAttachment(StaticMesh);
    this->RollInteractDetector->SetupAttachment(StaticMesh);
}

void AThrowableObject::OnRep_CanBePickedUp() {
}

void AThrowableObject::OnComponentWake(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AThrowableObject::OnComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AThrowableObject::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AThrowableObject::OnAIThrown(AGingerbreadAICharacter* InteractingAICharacter) {
}

void AThrowableObject::OnAIPickedUp(AGingerbreadAICharacter* InteractingAICharacter) {
}

void AThrowableObject::FadeSplatDecal() {
}

void AThrowableObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowableObject, CanBePickedUp);
}


