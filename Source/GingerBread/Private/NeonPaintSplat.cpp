#include "NeonPaintSplat.h"
#include "Components/BillboardComponent.h"
#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"

ANeonPaintSplat::ANeonPaintSplat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));

    this->Sprite = (UBillboardComponent*)RootComponent;
    this->GlowTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("GlowTrigger"));
    this->GlowInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("GlowInteraction"));
    this->Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->GlowTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("GlowTimeline"));
    this->MinimumIntensity = 0.00f;
    this->MaximumIntensity = 3.00f;
    this->Speed = 0.50f;
    this->DetectionRange = 32.00f;
    this->GlowTimelineIntensityAlphaCurve = NULL;
    this->GlowTrigger->SetupAttachment(RootComponent);
    this->GlowInteraction->SetupAttachment(RootComponent);
    this->Decal->SetupAttachment(RootComponent);
}

void ANeonPaintSplat::OnEndOverlapLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ANeonPaintSplat::OnEndInteractionLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ANeonPaintSplat::OnBeginOverlapFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ANeonPaintSplat::OnBeginInteractionFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ANeonPaintSplat::GlowTimeline_Update(float Intensity) {
}


