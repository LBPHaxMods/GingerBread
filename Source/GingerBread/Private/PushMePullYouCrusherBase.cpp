#include "PushMePullYouCrusherBase.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

APushMePullYouCrusherBase::APushMePullYouCrusherBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->CrushableVolumeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CrushableVolumeComponent"));
    this->CrushableInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("TriggerInteractionComponent"));
    this->LineTraceOriginComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("LineTraceOriginComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->DealCrushingDamage = false;
    this->LineTraceDistance = 20.00f;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(SplineComponent);
    this->CrushableVolumeComponent->SetupAttachment(StaticMeshComponent);
    this->CrushableInteractionComponent->SetupAttachment(CrushableVolumeComponent);
    this->LineTraceOriginComponent->SetupAttachment(StaticMeshComponent);
}

void APushMePullYouCrusherBase::OnCrushableVolumeEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex) {
}

void APushMePullYouCrusherBase::OnCrushableVolumeBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APushMePullYouCrusherBase::OnCrushableInteractionEndOverlap(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void APushMePullYouCrusherBase::OnCrushableInteractionBeginOverlap(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}


