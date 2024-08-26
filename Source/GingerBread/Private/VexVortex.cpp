#include "VexVortex.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AVexVortex::AVexVortex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->VFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFXComponent"));
    this->NumberOfBombsToSpawnPerPlayer.AddDefaulted(4);
    this->TimeBeforeSpawningBombs = 0.70f;
    this->TimeBetweenBombSpawns = 0.26f;
    this->FinishDelay = 0.05f;
    this->VFXErosionCurve = NULL;
    this->VFXErosionTime = 1.00f;
    this->PostVFXErosionTime = 4.00f;
    this->VFXComponent->SetupAttachment(RootComponent);
}






