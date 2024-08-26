#include "BonusCollectabellSpawningSpline.h"
#include "Components/SplineComponent.h"

ABonusCollectabellSpawningSpline::ABonusCollectabellSpawningSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SpawnLargeCollectabells = false;
    this->SpawnFrequency = EBonusRoomDensity::Medium;
    this->TrainSize = EBonusRoomDensity::Medium;
    this->InitialDelay = 0.50f;
    this->TravelTime = 4.00f;
    this->SmallCollectabellDistance = 8.00f;
    this->LargeCollectabellDistance = 10.00f;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void ABonusCollectabellSpawningSpline::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, bool WasTravellingForward) {
}

void ABonusCollectabellSpawningSpline::OnActorDestroyed(AActor* pActor) {
}

void ABonusCollectabellSpawningSpline::EDITOR_CopyProperties(bool InStartsActive, bool InIsManuallyTriggered, bool InSpawnLargeCollectabells, EBonusRoomDensity InSpawnFrequency, EBonusRoomDensity InTrainSize, float InInitialDelay, float InTravelTime, USplineComponent* InSplineComponent) {
}

void ABonusCollectabellSpawningSpline::AUTH_SpawnLoop() {
}


