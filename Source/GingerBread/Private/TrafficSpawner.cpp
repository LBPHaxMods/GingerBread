#include "TrafficSpawner.h"

ATrafficSpawner::ATrafficSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = NULL;
    this->root_i = NULL;
    this->GenerateSurface = true;
    this->NumberOfObjectsToGenerate = 2;
    this->SurfaceMesh = NULL;
    this->TileCount = 2;
    this->GenerateTraffic = true;
    this->RandomSelection = false;
    this->MeshesCastsShadow = false;
    this->TranslationSpeed = 15.00f;
    this->MinDistanceBetween = 100.00f;
    this->MaxDistanceBetween = 200.00f;
    this->RoadSideOffset = 5.00f;
    this->GenFurniture = false;
    this->FurnitureRoadSideOffset = 5.00f;
    this->FurnitureSpacing = 50.00f;
    this->AlternatePlacement = false;
    this->GenBothSides = false;
    this->FurnitureCastsShadow = false;
}

USplineMeshComponent* ATrafficSpawner::GetSplineMesh_Implementation(UStaticMesh* Mesh) {
    return NULL;
}

UStaticMeshComponent* ATrafficSpawner::GetMesh_Implementation(UStaticMesh* Mesh) {
    return NULL;
}

void ATrafficSpawner::GenerateSurfaceMesh() {
}

void ATrafficSpawner::GenerateDecerations() {
}


