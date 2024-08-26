#include "3DUI_LevelMemoryOrbCounter.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "GingerbreadWidgetComponent.h"
#include "HudAmbientMovementComponent.h"
#include "HudFishingLineComponent.h"
#include "HudSkeletalMeshComponent.h"
#include "HudStaticMeshComponent.h"

A3DUI_LevelMemoryOrbCounter::A3DUI_LevelMemoryOrbCounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShatteredOrbCounterLifeTime = 2.00f;
    this->NumOrbSlots = 0;
    this->IntroMontage = NULL;
    this->OutroMontage = NULL;
    this->HitReactCentreMontage = NULL;
    this->HitReactLeftMontage = NULL;
    this->HitReactRightMontage = NULL;
    this->DefaultCloudMesh = NULL;
    this->MemoryOrbBP = NULL;
    this->ShatteredOrb1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ShatteredOrb1"));
    this->ShatteredOrb2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ShatteredOrb2"));
    this->ShatteredOrb3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ShatteredOrb3"));
    this->ShatteredOrb4 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ShatteredOrb4"));
    this->HudAmbientMovement = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovement"));
    this->OrbSkeletalMesh = CreateDefaultSubobject<UHudSkeletalMeshComponent>(TEXT("OrbSkeletalMesh"));
    this->CloudStaticMesh = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CloudStaticMesh"));
    this->FishingLine1 = CreateDefaultSubobject<UHudFishingLineComponent>(TEXT("FishingLine1"));
    this->FishingLine2 = CreateDefaultSubobject<UHudFishingLineComponent>(TEXT("FishingLine2"));
    this->FishingLineTarget1 = CreateDefaultSubobject<USceneComponent>(TEXT("FishingLineTarget1"));
    this->FishingLineTarget2 = CreateDefaultSubobject<USceneComponent>(TEXT("FishingLineTarget2"));
    this->OrbTotalWidgetComponent = CreateDefaultSubobject<UGingerbreadWidgetComponent>(TEXT("OrbTotalWidgetComponent"));
    this->ShatteredOrb1->SetupAttachment(RootComponent);
    this->ShatteredOrb2->SetupAttachment(RootComponent);
    this->ShatteredOrb3->SetupAttachment(RootComponent);
    this->ShatteredOrb4->SetupAttachment(RootComponent);
    this->HudAmbientMovement->SetupAttachment(RootComponent);
    this->OrbSkeletalMesh->SetupAttachment(HudAmbientMovement);
    this->CloudStaticMesh->SetupAttachment(OrbSkeletalMesh);
    this->FishingLine1->SetupAttachment(CloudStaticMesh);
    this->FishingLine2->SetupAttachment(CloudStaticMesh);
    this->FishingLineTarget1->SetupAttachment(RootComponent);
    this->FishingLineTarget2->SetupAttachment(RootComponent);
    this->OrbTotalWidgetComponent->SetupAttachment(CloudStaticMesh);
}

void A3DUI_LevelMemoryOrbCounter::UpdateOrbCollectedState(int32 orbIndex, bool animate) {
}

void A3DUI_LevelMemoryOrbCounter::ShowShatteredOrb(FVector WorldLocation, int32 current, int32 Total, ASackboy* Sackboy) {
}

void A3DUI_LevelMemoryOrbCounter::SetupActor() {
}

void A3DUI_LevelMemoryOrbCounter::SetOrbTextures() {
}

void A3DUI_LevelMemoryOrbCounter::SetOrbCount(int32 orbCount) {
}


void A3DUI_LevelMemoryOrbCounter::OnOutroBlendOut(UAnimMontage* Montage, bool interrupted) {
}

void A3DUI_LevelMemoryOrbCounter::OnOrbActorCollectedAnimFinished(A3DUI_MemoryOrb* callingOrb) {
}

void A3DUI_LevelMemoryOrbCounter::OnCloudMeshLoaded() {
}

FName A3DUI_LevelMemoryOrbCounter::GetOrbSocketName(int32 orbIndex) {
    return NAME_None;
}

FVector A3DUI_LevelMemoryOrbCounter::GetOrbSlotPosition(int32 orbIndex) {
    return FVector{};
}

void A3DUI_LevelMemoryOrbCounter::EventChangeVisibility(bool NewVisibility) {
}


void A3DUI_LevelMemoryOrbCounter::Anim_PlayShimmer() {
}

void A3DUI_LevelMemoryOrbCounter::Anim_PlayOutro() {
}

void A3DUI_LevelMemoryOrbCounter::Anim_PlayIntro() {
}

void A3DUI_LevelMemoryOrbCounter::Anim_PlayHitReactRight() {
}

void A3DUI_LevelMemoryOrbCounter::Anim_PlayHitReactLeft() {
}

void A3DUI_LevelMemoryOrbCounter::Anim_PlayHitReactFromSlotNum(int32 orbSlot) {
}

void A3DUI_LevelMemoryOrbCounter::Anim_PlayHitReactCentre() {
}


