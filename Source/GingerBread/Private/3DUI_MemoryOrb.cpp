#include "3DUI_MemoryOrb.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"

A3DUI_MemoryOrb::A3DUI_MemoryOrb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ObjectRoot"));
    this->IsCollected = false;
    this->OrbStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OrbStaticMesh"));
    this->CloudBurstThroughParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CloudBurstThroughParticles"));
    this->AllCollectedParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AllCollectedParticles"));
    this->StaticParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("StaticParticles"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->PulseTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PulseTimeline"));
    this->HudCollectionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("HudCollectionTimeline"));
    this->CollectCurve = NULL;
    this->PulseCurve = NULL;
    this->OrbDynamicMaterial = NULL;
    this->OrbStaticMesh->SetupAttachment(RootComponent);
    this->CloudBurstThroughParticles->SetupAttachment(RootComponent);
    this->AllCollectedParticles->SetupAttachment(RootComponent);
    this->StaticParticles->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void A3DUI_MemoryOrb::SetSoftOrbTexture(TSoftObjectPtr<UTexture2D> textureRef) {
}

void A3DUI_MemoryOrb::SetCollected(bool Collected) {
}

void A3DUI_MemoryOrb::PlayBurstThroughVFX() {
}

void A3DUI_MemoryOrb::PlayAllCollectedVFX() {
}

void A3DUI_MemoryOrb::OnPlayPulseUpdate(float Alpha) {
}

void A3DUI_MemoryOrb::OnPlayPulseFinished() {
}

void A3DUI_MemoryOrb::OnPlayHudCollectionUpdate(float Alpha) {
}

void A3DUI_MemoryOrb::OnPlayHudCollectionFinished() {
}

void A3DUI_MemoryOrb::OnMemoryTextureLoaded() {
}

void A3DUI_MemoryOrb::Anim_PlayPulse() {
}

void A3DUI_MemoryOrb::Anim_PlayHudCollection(float minScale) {
}


