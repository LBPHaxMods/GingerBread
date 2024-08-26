#include "VexProjectile.h"

AVexProjectile::AVexProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->extraHeight = 0.00f;
    this->ThrowDuration = 0.00f;
    this->TargetSackboy = NULL;
    this->mpChange = false;
    this->DisappearPoofParticle = NULL;
    this->DisappearPoofSFX = NULL;
}


void AVexProjectile::SetupCollisions() {
}

void AVexProjectile::Initialise_Implementation(FVector NewTargetLocation, float NewExtraHeight, float projectileThrowDuration, ASackboy* NewTargetSackboy, bool NewMpChange) {
}


void AVexProjectile::DisappearPoof() {
}


void AVexProjectile::DamagedBoss(bool BodyWasDamaged) {
}


