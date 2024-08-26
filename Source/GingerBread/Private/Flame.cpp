#include "Flame.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

AFlame::AFlame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->AUTH_FlameActive = true;
    this->FlameParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameParticleSystem"));
    this->FlameDamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("FlameDamageCollision"));
    this->FlameDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("FlameDamageInteraction"));
    this->FlameAudio = CreateDefaultSubobject<UAkComponent>(TEXT("FlameAudio"));
    this->PointLightComp = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComp"));
    this->TriggerActorComp = NULL;
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->FlameBeginEvent = NULL;
    this->FlameEndEvent = NULL;
    this->FlameParticleSystem->SetupAttachment(RootComponent);
    this->FlameDamageCollision->SetupAttachment(RootComponent);
    this->FlameDamageInteraction->SetupAttachment(RootComponent);
    this->FlameAudio->SetupAttachment(RootComponent);
    this->PointLightComp->SetupAttachment(RootComponent);
}

void AFlame::SetFlameActive(bool Active) {
}

void AFlame::OnRep_FlameActive() {
}

void AFlame::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
}

void AFlame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlame, AUTH_FlameActive);
}


