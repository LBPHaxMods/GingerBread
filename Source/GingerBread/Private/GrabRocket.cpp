#include "GrabRocket.h"
#include "AkComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "SplineFollowerComponent.h"

AGrabRocket::AGrabRocket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Collision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->CollisionTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionTop"));
    this->RocketBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RocketBody"));
    this->ThrusterVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ThrusterVFX"));
    this->Ak_GrabRocket = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_GrabRocket"));
    this->ForceFeedbackComponent = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("ForceFeedbackComponent"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->ExplodeParticles = NULL;
    this->FuseSFX = NULL;
    this->FuseLoopSFX = NULL;
    this->FuseLoopStopSFX = NULL;
    this->FlightSFX = NULL;
    this->ExplodeSFX = NULL;
    this->ExplodeShake = NULL;
    this->VibrationCurve = NULL;
    this->FuseHapticEvent = NULL;
    this->PlayFuseLoopHaptics = NULL;
    this->StopFuseLoopHaptics = NULL;
    this->FlightHapticEvent = NULL;
    this->ExplodeHapticEvent = NULL;
    this->FlightGamepadAudioEvent = NULL;
    this->ExplodeGamepadAudioEvent = NULL;
    this->Collision->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(Collision);
    this->CollisionTop->SetupAttachment(Collision);
    this->RocketBody->SetupAttachment(Collision);
    this->ThrusterVFX->SetupAttachment(RocketBody);
    this->Ak_GrabRocket->SetupAttachment(Collision);
    this->ForceFeedbackComponent->SetupAttachment(Collision);
}

void AGrabRocket::VibrationCallback(FVector val) {
}

void AGrabRocket::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}


