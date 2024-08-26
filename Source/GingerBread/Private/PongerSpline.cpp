#include "PongerSpline.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

APongerSpline::APongerSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->PongerToSpawn = NULL;
    this->SpawnedPongerMover = NULL;
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->SlappedForwardImpulse = -90.00f;
    this->SlappedZImpulseOffset = 90.00f;
    this->SlappedLinearDamping = 1.50f;
    this->GridSize = 10.00f;
    this->PreemptiveEngageTime = 0.10f;
    this->PreemptiveStopTime = 0.10f;
    this->TurnTimelineLength = 1.00f;
    this->bManualMode = false;
    this->bStartActive = true;
    this->bLoop = false;
    this->TraversalTimePerTrackSegment = 1.00f;
    this->TurnTime = 1.00f;
    this->bFlipDirection = false;
    this->bSpawnReward = true;
    this->NoseGlintStartDelay = 0.20f;
    this->CurrentManoeuvre = EManoeuvre::Straight;
    this->PreviousManoeuvre = EManoeuvre::Straight;
    this->TravelFromPoint = 0;
    this->bGoingForward = true;
    this->TravelTooPoint = 1;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void APongerSpline::SetTurnTime(float InTurnTime) {
}

void APongerSpline::SetTraversalTimePerTrackSegment(float Time) {
}

void APongerSpline::SetStartActive(bool InStartActive) {
}

void APongerSpline::SetSplinePoints(USplineComponent* InSplineComponent) {
}

void APongerSpline::SetManualMode(bool InManualMode) {
}

void APongerSpline::SetIsLoop(bool Loop) {
}

void APongerSpline::OnRep_SetTravelTooPoint() {
}

void APongerSpline::OnRep_ReplicatePongerMover() {
}

void APongerSpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APongerSpline, SpawnedPongerMover);
    DOREPLIFETIME(APongerSpline, CurrentManoeuvre);
    DOREPLIFETIME(APongerSpline, CurrentRotator);
    DOREPLIFETIME(APongerSpline, PreviousManoeuvre);
    DOREPLIFETIME(APongerSpline, TravelFromPoint);
    DOREPLIFETIME(APongerSpline, bGoingForward);
    DOREPLIFETIME(APongerSpline, TravelTooPoint);
}


