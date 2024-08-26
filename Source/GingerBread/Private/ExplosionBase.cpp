#include "ExplosionBase.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Components/SphereComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AExplosionBase::AExplosionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

    this->SphereComponent = (USphereComponent*)RootComponent;
    this->InteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractComponent"));
    this->DetectInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("DetectInteract"));
    this->RadialForceComponent = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComponent"));
    this->HitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierComponent"));
    this->ApplyDamage = true;
    this->ApplyForce = true;
    this->SackboyLaunchSpeed = 20.00f;
    this->ParticleSystem = NULL;
    this->AudioEvent = NULL;
    this->ForceFeedbackEffect = NULL;
    this->ForceFeedbackAttenuation = NULL;
    this->HapticsEvent = NULL;
    this->CameraShakeClass = NULL;
    this->InteractComponent->SetupAttachment(RootComponent);
    this->DetectInteract->SetupAttachment(RootComponent);
    this->RadialForceComponent->SetupAttachment(RootComponent);
}

AExplosionBase* AExplosionBase::SpawnReplicatedExplosionNoFinishSpawn(UObject* WorldContext, TSubclassOf<AExplosionBase> ExplosionClass, const FTransform& SpawnTransform, AActor* InOwner, AActor* DamageInstigator) {
    return NULL;
}

AExplosionBase* AExplosionBase::SpawnReplicatedExplosion(UObject* WorldContext, TSubclassOf<AExplosionBase> ExplosionClass, const FTransform& SpawnTransform, AActor* InOwner, AActor* DamageInstigator) {
    return NULL;
}

AExplosionBase* AExplosionBase::SpawnNonReplicatedExplosion(UObject* WorldContext, TSubclassOf<AExplosionBase> ExplosionClass, const FTransform& SpawnTransform, AActor* InOwner, AActor* DamageInstigator, float Delay) {
    return NULL;
}

void AExplosionBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExplosionBase, CachedInstigator);
}


