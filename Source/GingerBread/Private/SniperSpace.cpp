#include "SniperSpace.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SniperHoverComponent.h"
#include "SniperSpaceThrowNeedleComponent.h"

ASniperSpace::ASniperSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USniperSpaceThrowNeedleComponent>(TEXT("ThrowNeedleComponent"))) {
    this->Tags.AddDefaulted(2);
    this->BoosterRightVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoosterRightVFX"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->BoosterLeftVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoosterLeftVFX"));
    this->JetpackLaunchVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("JetpackLaunchVFX"));
    this->HoverComponent = CreateDefaultSubobject<USniperHoverComponent>(TEXT("HoverComponent"));
}

void ASniperSpace::OnBoosterStop_Internal_Implementation() {
}

void ASniperSpace::OnBoosterStart_Internal_Implementation() {
}


