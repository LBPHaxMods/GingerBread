#include "VexStuntBomb.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AVexStuntBomb::AVexStuntBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->AKVexBomb = CreateDefaultSubobject<UAkComponent>(TEXT("AKVexBomb"));
    this->SpawnVFX = NULL;
    this->DespawnVFX = NULL;
    this->ScaleUpDuration = 0.10f;
    this->ScaleDownDuration = 0.20f;
    this->AKVexBomb->SetupAttachment(RootComponent);
    this->StaticMesh->SetupAttachment(RootComponent);
}

void AVexStuntBomb::TriggerStuntBomb_Implementation() {
}

void AVexStuntBomb::DisappearStuntBomb_Implementation(bool instant) {
}


