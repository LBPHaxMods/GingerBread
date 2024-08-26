#include "ElectricEel.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "HitPointsModifierComponent.h"
#include "ProcStaticMeshComponent.h"
#include "TriggerActorComponent.h"

AElectricEel::AElectricEel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Ak_ElectricEel = NULL;
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->EelHead = NULL;
    this->EelBodyA = NULL;
    this->EelBodyB = NULL;
    this->EelTail = NULL;
    this->ElectricField = NULL;
    this->ElectricMaterial = NULL;
    this->EelEyeMaterial = NULL;
    this->EelBodyMaterial = NULL;
    this->PlaySFX = NULL;
    this->StopSFX = NULL;
    this->NumberOfEels = 1;
    this->EelSeparation = 2.00f;
    this->bClosedLoop = false;
    this->CapsuleLength = 20.00f;
    this->CapsuleRadius = 3.00f;
    this->GeneratedMesh = CreateDefaultSubobject<UProcStaticMeshComponent>(TEXT("GeneratedMesh"));
    this->Spline->SetupAttachment(RootComponent);
    this->GeneratedMesh->SetupAttachment(RootComponent);
}


