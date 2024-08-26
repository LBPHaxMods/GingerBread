#include "VexCrate.h"
#include "AkComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

AVexCrate::AVexCrate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartInactive = false;
    this->ActivationStartDelay = 2.00f;
    this->CrateContents = 0;
    this->bSpawnContents = true;
    this->ImpactImpulseThreshold = 100.00f;
    this->CrateLandingEvent = NULL;
    this->CrateShakingEvent = NULL;
    this->CrateShakeTimeline = NULL;
    this->CrateImpulses = CreateDefaultSubobject<UTimelineComponent>(TEXT("CrateImpulses"));
    this->ActivationToDestructionTime = 3.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkVexCrate"));
    this->bPhysicsEnabled = false;
    this->AkComponent->SetupAttachment(RootComponent);
}

void AVexCrate::TogglePhysics(bool Enable) {
}

void AVexCrate::OnTimelineImpulsesFinished() {
}

void AVexCrate::OnTimelineImpulseEvent_Implementation() {
}

void AVexCrate::OnRep_PhysicsEnabled() {
}

void AVexCrate::OnCrateHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AVexCrate::Activate() {
}

void AVexCrate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexCrate, bPhysicsEnabled);
}


