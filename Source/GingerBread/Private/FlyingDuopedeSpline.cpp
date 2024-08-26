#include "FlyingDuopedeSpline.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

AFlyingDuopedeSpline::AFlyingDuopedeSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->SplineFollowerLeader = NULL;
    this->ActorToSpawn = NULL;
    this->DuopedeSpeed = EFlyingDuopedeSpeed::Slow;
    this->DelayBetweenDuopedes = 3.00f;
    this->bOneShotDuopede = false;
    this->bCanSpawnRewards = true;
    this->bLoopedSpline = false;
    this->bSplineOnFloor = false;
    this->HeightFromFloor = 0.00f;
    this->MeshOffset = 2.50f;
    this->bContinuousActors = false;
    this->bRespawnDeadSections = false;
    this->ActorsPerSection = 4;
    this->StartDelay = 0.00f;
    this->bIsActive = true;
    this->DuopedeSpeeds[0] = 10.00f;
    this->DuopedeSpeeds[1] = 10.00f;
    this->DuopedeSpeeds[2] = 10.00f;
    this->AnimDurations[0] = 0.83f;
    this->AnimDurations[1] = 0.83f;
    this->AnimDurations[2] = 0.83f;
    this->WaveMultiplier[0] = 0.10f;
    this->WaveMultiplier[1] = 0.10f;
    this->WaveMultiplier[2] = 0.10f;
    this->ActorSpeed = 10.00f;
    this->AnimationDuration = 0.00f;
    this->SplineLength = 0.00f;
    this->traversalTime = 0.00f;
    this->ActorSpacing = 0.00f;
    this->VirtualLengthExtension = 0.00f;
    this->bHasStarted = false;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AFlyingDuopedeSpline::SectionPickedUp(AFlyingDuopedeSegment* Segment) {
}

void AFlyingDuopedeSpline::EndReached(USplineLeaderSubjectComponent* SplineLeaderSubject, bool bWasTravellingForward) {
}

void AFlyingDuopedeSpline::DuopedeKilledEvent(AFlyingDuopedeSegment* killedSegment) {
}


