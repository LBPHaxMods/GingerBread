#include "3DUI_BonusTimerPartyPopper.h"
#include "Particles/ParticleSystemComponent.h"
#include "HudRootSceneComponent.h"
#include "HudStaticMeshComponent.h"
#include "VertexAnimatedMeshComponent.h"

A3DUI_BonusTimerPartyPopper::A3DUI_BonusTimerPartyPopper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHudRootSceneComponent>(TEXT("HudRootScene"));
    this->HudRootScene = (UHudRootSceneComponent*)RootComponent;
    this->PopperVertexMesh = CreateDefaultSubobject<UVertexAnimatedMeshComponent>(TEXT("PopperVertexMesh"));
    this->PopperConfettiVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PopperConfettiVFX"));
    this->DebugConfetti = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("DebugConfetti"));
    this->PopperVertexMesh->SetupAttachment(RootComponent);
    this->PopperConfettiVFX->SetupAttachment(RootComponent);
    this->DebugConfetti->SetupAttachment(PopperConfettiVFX);
}

void A3DUI_BonusTimerPartyPopper::PlayPopper() {
}

void A3DUI_BonusTimerPartyPopper::OnClipEnded(int32 ClipIndex) {
}

void A3DUI_BonusTimerPartyPopper::HidePopper() {
}

void A3DUI_BonusTimerPartyPopper::GetIntroLength(float& Length) {
}

void A3DUI_BonusTimerPartyPopper::AnticipatePopper() {
}


