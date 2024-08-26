#include "RhythmicDuopedeSpline.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

ARhythmicDuopedeSpline::ARhythmicDuopedeSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->SplineFollowerLeader = NULL;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->ActorToSpawn = NULL;
    this->DuopedeSpeed = ERhythmicDuopedeSpeed::Slow;
    this->DelayBetweenDuopedes = 3.00f;
    this->RespawnDeadSections = false;
    this->ShowDebugText = false;
    this->CanSpawnRewards = true;
    this->LoopedSpline = false;
    this->ContinuousActors = false;
    this->ActorSections = 0;
    this->ActorsPerSection = 4;
    this->SectionSpacing = 10.00f;
    this->StartDistanceOffset = 0.00f;
    this->ActorsPerLeaningSection = 4;
    this->UseAlternateWalk = false;
    this->Active = true;
    this->DuopedeSpeeds[0] = 10.00f;
    this->DuopedeSpeeds[1] = 10.00f;
    this->DuopedeSpeeds[2] = 10.00f;
    this->ActorSpeed = 10.00f;
    this->SplineLength = 0.00f;
    this->traversalTime = 0.00f;
    this->ActorSpacing = 0.00f;
    this->VirtualLengthExtension = 0.00f;
    this->bHasStarted = false;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void ARhythmicDuopedeSpline::StopLeaningAnimations() {
}

void ARhythmicDuopedeSpline::SectionPickedUp(ARhythmicDuopedeSegment* Segment) {
}

void ARhythmicDuopedeSpline::EndReached(USplineLeaderSubjectComponent* SplineLeaderSubject, bool bWasTravellingForward) {
}

void ARhythmicDuopedeSpline::DuopedeKilledEvent(ARhythmicDuopedeSegment* killedSegment) {
}


