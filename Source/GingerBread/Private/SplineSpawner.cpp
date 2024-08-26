#include "SplineSpawner.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

ASplineSpawner::ASplineSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->RootHack = CreateDefaultSubobject<USceneComponent>(TEXT("RootHack"));
    this->SplineNew = CreateDefaultSubobject<USplineComponent>(TEXT("SplineNew"));
    this->SpawnClass = NULL;
    this->Count = 5;
    this->IsClosedLoop = false;
    this->DestroyWhenNoSpawnedActors = false;
    this->Spacing = 0.00f;
    this->RootHack->SetupAttachment(RootComponent);
    this->SplineNew->SetupAttachment(RootComponent);
}

void ASplineSpawner::SpawnActors() {
}

void ASplineSpawner::SetUpNewSpline() {
}

void ASplineSpawner::RemoveOldSpline() {
}

void ASplineSpawner::RefreshSpawnedObjects() {
}


void ASplineSpawner::OnActorDestroyedInGame(AActor* DestroyedActor) {
}

void ASplineSpawner::OnActorDestroyedInEditor(AActor* DestroyedActor) {
}


