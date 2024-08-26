#include "SplineVfxManager.h"
#include "Components/BillboardComponent.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

ASplineVfxManager::ASplineVfxManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard = (UBillboardComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->MaxPoolSize = 15;
    this->PrecomputePoints = true;
    this->MeshesShouldGenerateOverlap = true;
    this->PrecomputeTesselation = 128;
    this->MeshTemplate = NULL;
    this->UseRandomMeshTemplates = false;
    this->TimeRespawnMin = 0.20f;
    this->TimeRespawnMax = 2.00f;
    this->SpeedMin = 60.00f;
    this->SpeedMax = 200.00f;
    this->ParticleSystemTemplate = NULL;
    this->ParticleParameterName = TEXT("wings");
    this->ScaleMin = 1.00f;
    this->ScaleMax = 1.00f;
    this->SpeedCurve = NULL;
    this->OffsetIsRandom = true;
    this->MeshMaterial = NULL;
    this->SplineVfxActorBP = NULL;
    this->Spline->SetupAttachment(RootComponent);
}


