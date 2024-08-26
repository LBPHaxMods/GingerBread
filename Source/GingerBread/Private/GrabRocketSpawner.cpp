#include "GrabRocketSpawner.h"
#include "AkComponent.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AGrabRocketSpawner::AGrabRocketSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->Ak_GrabRocketSpawner = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_GrabRocketSpawner"));
    this->Base = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Base"));
    this->BaseCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseCollision"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->RocketChild = CreateDefaultSubobject<UChildActorComponent>(TEXT("RocketChild"));
    this->IgnitionVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("IgnitionVFX"));
    this->Countdown = 1.00f;
    this->FlightTime = 1.00f;
    this->DelayBeforeRecycle = 0.20f;
    this->bActive = true;
    this->OpenAnim = NULL;
    this->OpenSFX = NULL;
    this->CloseSFX = NULL;
    this->RocketClass = NULL;
    this->RiseCurve = NULL;
    this->State = EGrabRocketLauncherState::Idle;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->Ak_GrabRocketSpawner->SetupAttachment(RootComponent);
    this->Base->SetupAttachment(RootComponent);
    this->BaseCollision->SetupAttachment(Base);
    this->RocketChild->SetupAttachment(RootComponent);
    this->IgnitionVFX->SetupAttachment(RootComponent);
}

void AGrabRocketSpawner::TimelineCompleted() {
}

void AGrabRocketSpawner::TimelineCallback(float val) {
}

void AGrabRocketSpawner::OnRep_CurrentState() {
}

void AGrabRocketSpawner::DisableBaseTick(UAnimationAsset* Animation) {
}

void AGrabRocketSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrabRocketSpawner, State);
}


