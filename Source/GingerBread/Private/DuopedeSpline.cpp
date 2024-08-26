#include "DuopedeSpline.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

ADuopedeSpline::ADuopedeSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->SplineFollowerLeader = NULL;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->ActorToSpawn = NULL;
    this->DuopedeSpeed = EDuopedeSpeed::Slow;
    this->DelayBetweenDuopedes = 3.00f;
    this->RespawnDeadSections = false;
    this->OneShotDuopede = false;
    this->ShowDebugText = false;
    this->CanSpawnRewards = true;
    this->UseStandardBladeSpinSpeedAnim = true;
    this->LoopedSpline = false;
    this->ContinuousActors = false;
    this->DisableSpikesDamage = false;
    this->ActorSections = 0;
    this->ActorsPerSection = 4;
    this->SectionSpacing = 10.00f;
    this->StartDistanceOffset = 0.00f;
    this->StartDelay = 0.00f;
    this->Active = true;
    this->DuopedeSpeeds[0] = 10.00f;
    this->DuopedeSpeeds[1] = 10.00f;
    this->DuopedeSpeeds[2] = 10.00f;
    this->AnimDurations[0] = 0.53f;
    this->AnimDurations[1] = 0.53f;
    this->AnimDurations[2] = 0.53f;
    this->WaveMultiplier[0] = 0.06f;
    this->WaveMultiplier[1] = 0.06f;
    this->WaveMultiplier[2] = 0.06f;
    this->ActorSpeed = 10.00f;
    this->AnimationDuration = 0.00f;
    this->SplineLength = 0.00f;
    this->traversalTime = 0.00f;
    this->ActorSpacing = 0.00f;
    this->VirtualLengthExtension = 0.00f;
    this->bHasStarted = false;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void ADuopedeSpline::SectionPickedUp(ADuopedeSegment* Segment) {
}

void ADuopedeSpline::EndReached(USplineLeaderSubjectComponent* SplineLeaderSubject, bool bWasTravellingForward) {
}

void ADuopedeSpline::DuopedeKilledEvent(ADuopedeSegment* killedSegment) {
}


