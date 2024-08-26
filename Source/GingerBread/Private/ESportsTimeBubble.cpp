#include "ESportsTimeBubble.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "CollectableHUDMoverComponent.h"
#include "SpotShadowComponent.h"
#include "VertexAnimatedMeshComponent.h"

AESportsTimeBubble::AESportsTimeBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TimerBubble"));
    this->ShouldDestroyOnCollected = false;
    this->VertexAnimatedMeshComponent = CreateDefaultSubobject<UVertexAnimatedMeshComponent>(TEXT("VertexAnimatedMeshComponent"));
    this->IdleParticleSysComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("IdleParticleSysComponent"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->HUDMoverComponent = CreateDefaultSubobject<UCollectableHUDMoverComponent>(TEXT("HUDMoverComponent"));
    this->TimeAdjustment = -2.00f;
    this->IsHidden = false;
    this->DelayFromCollectionToHudMovement = 0.35f;
    this->CollectionAudioEvent = NULL;
    this->CollectionGamepadAudioEvent = NULL;
    this->CollectionVFX = NULL;
    this->CollectHapticsAudioEventPS5 = NULL;
    this->CollectForceFeedbackPS4 = NULL;
    this->CollectionCameraEffect = NULL;
    this->CollectionTriggersLevelIridescence = false;
    this->AkComponent->SetupAttachment(StaticMeshComponent);
    this->VertexAnimatedMeshComponent->SetupAttachment(StaticMeshComponent);
    this->IdleParticleSysComponent->SetupAttachment(StaticMeshComponent);
    this->SpotShadowComponent->SetupAttachment(StaticMeshComponent);
    this->ArrowComponent->SetupAttachment(StaticMeshComponent);
}

void AESportsTimeBubble::Reveal() {
}

void AESportsTimeBubble::OnTimedChallengeManagerAvailable(AActor* ManagerActor) {
}

void AESportsTimeBubble::OnCollectableHUDMotionComplete(UCollectableHUDMoverComponent* pComponent) {
}

void AESportsTimeBubble::Hide() {
}

void AESportsTimeBubble::BeginMoveToHUD() {
}


