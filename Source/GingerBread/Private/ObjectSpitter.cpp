#include "ObjectSpitter.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/TimelineComponent.h"
#include "ArcComponent.h"
#include "InteractionComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AObjectSpitter::AObjectSpitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->ObjectSpitter_SK = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ObjectSpitter_SK"));
    this->Ak_ObjectSpitter = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_ObjectSpitter"));
    this->DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
    this->InteractionSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionSphere"));
    this->Object_Spitter_VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Object_Spitter_VFX"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->ArcComponent = CreateDefaultSubobject<UArcComponent>(TEXT("ArcComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->ActorPosition = CreateDefaultSubobject<UTimelineComponent>(TEXT("ActorPosition"));
    this->IgnoreSackboy = false;
    this->UseArcComponent = false;
    this->LaunchSpeed = 200.00f;
    this->LaunchSackboysOntoGloopedSurfaces = false;
    this->DisableSackboyActionsWhenFired = false;
    this->ObjectSwallowedAkEvent = NULL;
    this->ObjectSwallowedGamepadAkEvent = NULL;
    this->ObjectSpatOutAkEvent = NULL;
    this->ObjectSpatOutGamepadAkEvent = NULL;
    this->ActorPositionTimelineCurve = NULL;
    this->SackboySwallowHapticsEvent = NULL;
    this->SackboyLaunchHapticsEvent = NULL;
    this->SackboyLaunchForceFeedback = NULL;
    this->SackboyLaunchCameraShake = NULL;
    this->DetectionSphere->SetupAttachment(RootComponent);
    this->InteractionSphere->SetupAttachment(RootComponent);
    this->Object_Spitter_VFX->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->ArcComponent->SetupAttachment(RootComponent);
    this->ObjectSpitter_SK->SetupAttachment(RootComponent);
    this->Ak_ObjectSpitter->SetupAttachment(RootComponent);
}

void AObjectSpitter::ServerTriggerSpit() {
}

void AObjectSpitter::ReturnToIdle() {
}

void AObjectSpitter::OnNetworkEvent(FName EventName) {
}

void AObjectSpitter::OnDetectionSphereBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComponent, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}

void AObjectSpitter::OnDetectionSphereBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComponent) {
}

void AObjectSpitter::OnActorPositionTimelineUpdate(const float Alpha) {
}

void AObjectSpitter::ClientAbandonSpit() {
}


