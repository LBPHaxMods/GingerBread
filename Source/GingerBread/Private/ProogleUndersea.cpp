#include "ProogleUndersea.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "ProogleUnderseaLaunchComponent.h"

AProogleUndersea::AProogleUndersea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UProogleUnderseaLaunchComponent>(TEXT("ProogleLaunchComponent"))) {
    this->Tags.AddDefaulted(1);
    this->AttackDamageCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AttackDamageCylinder"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->AttackDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("AttackDamageInteraction"));
    this->AttackSpinVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AttackSpinVFX"));
    this->AttackTrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AttackTrailVFX"));
    this->AttackTakeoffVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AttackTakeoffVFX"));
    this->AttackLandingVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AttackLandingVFX"));
    this->AttackDamageInteraction->SetupAttachment(AttackDamageCylinder);
}

void AProogleUndersea::Multicast_LaunchStart_Implementation() {
}

void AProogleUndersea::Multicast_LaunchEnd_Implementation() {
}

void AProogleUndersea::LaunchStartCallback(EProogleLaunchType LaunchType) {
}

void AProogleUndersea::LaunchEndCallback(EProogleLaunchType LaunchType) {
}


