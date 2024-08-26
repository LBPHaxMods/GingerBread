#include "BlastersProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

ABlastersProjectile::ABlastersProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BlasterProjectileVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_Blaster_Projectile_VFX"));
    this->ExplosionHitPointModificationAmount = 1;
    this->ChargeDuration = 0.90f;
    this->ChargePow = 0.50f;
    this->FullyChargedMidPointTime = 0.05f;
    this->FullyChargedDuration = 0.10f;
    this->TargetTrackingVelocityScale = 1.00f;
    this->TargetTrackingDuration = 0.10f;
    this->TargetHeightTrackingLimit = 8.00f;
    this->TargetTrackingMaxRotationDPS = 21600.00f;
    this->ReflectedByEnemyParticalSystem = NULL;
    this->BlastersImpactPS = NULL;
    this->BlastersChargedImpactPS = NULL;
    this->ProjectileChargeInitiatedSFX = NULL;
    this->ProjectileInHandChargedLoopSFX = NULL;
    this->ProjectileInHandChargedStopSFX = NULL;
    this->ProjectileLaunchedSFX = NULL;
    this->ChargedProjectileLaunchedLoopSFX = NULL;
    this->ChargedProjectileLaunchedStopSFX = NULL;
    this->ProjectileImpactSFX = NULL;
    this->ChargedProjectileImpactSFX = NULL;
    this->ChargedProjectileExplodeSFX = NULL;
    this->ProjectileReflectedByEnemySFX = NULL;
    this->ChargedProjectileReflectedByEnemySFX = NULL;
    this->BlasterProjectileVFX->SetupAttachment(RootComponent);
}

void ABlastersProjectile::TriggerExplosion() {
}

bool ABlastersProjectile::IsCharged() const {
    return false;
}


