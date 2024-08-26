#include "BreakablePowerPinEffect.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ABreakablePowerPinEffect::ABreakablePowerPinEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnbrokenMesh"));
    this->ExplosionParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionParticles"));
    this->TimeTillShatter = 1.90f;
    this->ExplosiveStrength = 0.10f;
    this->LocalRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LocalRoot"));
    this->RotateWithCamera = true;
    this->RotationCurve = NULL;
    this->TimeAlive = 0.00f;
    this->PieceMinLifeTime = 4.00f;
    this->PieceMaxLifeTime = 5.50f;
    this->PieceFadeTime = 1.00f;
    this->MaterialOpacityParam = TEXT("Opacity");
    this->MainMesh->SetupAttachment(LocalRoot);
    this->ExplosionParticleSystem->SetupAttachment(LocalRoot);
    this->LocalRoot->SetupAttachment(RootComponent);
}

void ABreakablePowerPinEffect::ShatterPin() {
}

void ABreakablePowerPinEffect::ResetPowerPin() {
}


bool ABreakablePowerPinEffect::GetHasShattered() const {
    return false;
}


