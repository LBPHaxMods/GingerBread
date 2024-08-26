#include "RustyScales.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARustyScales::ARustyScales(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));

    this->BaseMesh = (UStaticMeshComponent*)RootComponent;
    this->LeftPanMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftPanMesh"));
    this->LeftPanAk = CreateDefaultSubobject<UAkComponent>(TEXT("LeftPanAk"));
    this->LeftPanVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftPanVFX"));
    this->LeftPanSmokeVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftPanSmokeVFX"));
    this->RightPanMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightPanMesh"));
    this->RightPanAk = CreateDefaultSubobject<UAkComponent>(TEXT("RightPanAk"));
    this->RightPanVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightPanVFX"));
    this->RightPanSmokeVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightPanSmokeVFX"));
    this->ArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmMesh"));
    this->SackboyRelevanceVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftPanDetectionVolume"));
    this->SackboyRelevanceInteractVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("SackboyRelevanceInteractVolume"));
    this->ActivationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ActivationTimeline"));
    this->DeactivationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DeactivationTimeline"));
    this->HeadStompWobbleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("HeadStompWobbleTimeline"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ActivationTimelineCurve = NULL;
    this->DeactivationTimelineCurve = NULL;
    this->HeadStompWobbleTimelineCurve = NULL;
    this->ActivationDuration = 1.00f;
    this->DeactivationDuration = 1.00f;
    this->ActivationThudTime = 1.00f;
    this->DeactivationThudTime = 0.00f;
    this->MovementDistance = 10.00f;
    this->SackboyThudVerticalSpeed = 40.00f;
    this->HeadStompWobbleDuration = 0.40f;
    this->PanMoveUpAudioEvent = NULL;
    this->PanMoveDownAudioEvent = NULL;
    this->PanHeadStompAudioEvent = NULL;
    this->PlayPanMovementHapticsEvent = NULL;
    this->StopPanMovementHapticsEvent = NULL;
    this->PanMovementForceFeedback = NULL;
    this->PanCloseThudHapticsEvent = NULL;
    this->PanCloseThudForceFeedback = NULL;
    this->PanFarThudHapticsEvent = NULL;
    this->PanFarThudForceFeedback = NULL;
    this->PanHeadStompHapticsEvent = NULL;
    this->PanHeadStompForceFeedback = NULL;
    this->PanMovementParticleSystem = NULL;
    this->PanThudParticleSystem = NULL;
    this->PanThudCameraShake = NULL;
    this->CurrentState = ERustyScalesState::Inactive;
    this->LeftPanMesh->SetupAttachment(RootComponent);
    this->LeftPanAk->SetupAttachment(RootComponent);
    this->LeftPanVFX->SetupAttachment(RootComponent);
    this->LeftPanSmokeVFX->SetupAttachment(LeftPanVFX);
    this->RightPanMesh->SetupAttachment(RootComponent);
    this->RightPanAk->SetupAttachment(RootComponent);
    this->RightPanVFX->SetupAttachment(RootComponent);
    this->RightPanSmokeVFX->SetupAttachment(RightPanVFX);
    this->ArmMesh->SetupAttachment(RootComponent);
    this->SackboyRelevanceVolume->SetupAttachment(RootComponent);
    this->SackboyRelevanceInteractVolume->SetupAttachment(RootComponent);
}

void ARustyScales::OnSackboyStoppedTouchingSomething(AActor* pTouchedActor, UPrimitiveComponent* pTouchedCollider, ASackboy* pSackboy, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails) {
}

void ARustyScales::OnSackboyStartedTouchingSomething(AActor* pTouchedActor, UPrimitiveComponent* pTouchedCollider, ASackboy* pSackboy, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails, FVector UsefulVec, int32 UsefulInt) {
}

void ARustyScales::OnSackboyRelevanceVolumeEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ARustyScales::OnSackboyRelevanceVolumeEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ARustyScales::OnSackboyRelevanceVolumeBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARustyScales::OnSackboyRelevanceVolumeBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ARustyScales::OnMovementTimelineUpdate(float MovementAlpha) {
}

void ARustyScales::OnMovementTimelineStarted() {
}

void ARustyScales::OnMovementTimelineFinished() {
}

void ARustyScales::OnMovementThudEvent() {
}

void ARustyScales::OnHeadStompWobbleTimelineUpdate(float WobbleDistance) {
}

void ARustyScales::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARustyScales, CurrentState);
}


