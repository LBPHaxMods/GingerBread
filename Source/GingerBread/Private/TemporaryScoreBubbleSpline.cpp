#include "TemporaryScoreBubbleSpline.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SplineFollowerComponent.h"
#include "SpotShadowComponent.h"

ATemporaryScoreBubbleSpline::ATemporaryScoreBubbleSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USplineComponent>(TEXT("Path Spline"))) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak Collect SFX"));
    this->ShouldDestroyOnCollected = false;
    this->PathSpline = (USplineComponent*)RootComponent;
    this->PointOfInterest = CreateDefaultSubobject<UPoIComponent>(TEXT("Point of Interest"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("Spot Shadow Component"));
    this->AkExpiringTimerSFX = NULL;
    this->AnimateOutCurve = NULL;
    this->AkGamepadVibration = NULL;
    this->AkGamepadAudio = NULL;
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("Pickup Container"));
    this->AkAllBubbledCollected = NULL;
    this->EndOfSplineEffect = NULL;
    this->TrailEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Trail Effect"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("Path"));
    this->NumberOfBubbles = 10;
    this->BubbleHeight = 5.00f;
    this->BubbleLifetime = 5.00f;
    this->BubbleSpawnInterval = 0.15f;
    this->ExpiringEffectTime = 2.00f;
    this->TrailEffectTimeScaling = 0.10f;
    this->SpawnedBubbleType = NULL;
    this->bUseFixedSplineTransform = false;
    this->AdditionalRewardHeight = 2.00f;
    this->TrailHapticEvent = NULL;
    this->TrailGamepadAudioEvent = NULL;
    this->Server_State = ETempBubbleSplineState::Idle;
    this->Server_TriggeredTimeStamp = 0.00f;
    this->Server_NumBubblesCollected = 0;
    this->AkComponent->SetupAttachment(CollisionComponent);
    this->PointOfInterest->SetupAttachment(CollisionComponent);
    this->SpotShadow->SetupAttachment(CollisionComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->TrailEffect->SetupAttachment(RootComponent);
}

void ATemporaryScoreBubbleSpline::TriggerExpiringEffects() {
}

void ATemporaryScoreBubbleSpline::TriggerBubbleOutAnimation() {
}

void ATemporaryScoreBubbleSpline::SpawnNextBubble(int32 NextBubbleIndex) {
}

void ATemporaryScoreBubbleSpline::OnSplineFollowerEndReached(USplineFollowerComponent* TriggeredSplineFollower, bool bWasTravellingForward) {
}

void ATemporaryScoreBubbleSpline::OnSpawnedBubblesLifespanExpired() {
}

void ATemporaryScoreBubbleSpline::OnSpawnedBubbleCollected(ACollectableBase* Collectable, ASackboy* CollectingSackboy) {
}

void ATemporaryScoreBubbleSpline::OnRep_TriggeredTimeStamp() {
}

void ATemporaryScoreBubbleSpline::OnRep_ServerState() {
}

void ATemporaryScoreBubbleSpline::OnRep_NumBubblesCollected() {
}

void ATemporaryScoreBubbleSpline::EDITOR_SetupVariables(int32 NumBubbles, float Height, float Timespan, bool bFixedSplineTransform) {
}

void ATemporaryScoreBubbleSpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATemporaryScoreBubbleSpline, Server_State);
    DOREPLIFETIME(ATemporaryScoreBubbleSpline, Server_SpawnedScoreBubbles);
    DOREPLIFETIME(ATemporaryScoreBubbleSpline, Server_TriggeredTimeStamp);
    DOREPLIFETIME(ATemporaryScoreBubbleSpline, Server_NumBubblesCollected);
}


