#include "3DUI_WorldMemoryOrbCounter.h"
#include "AkComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "GingerbreadWidgetComponent.h"
#include "HudAmbientMovementComponent.h"
#include "HudFishingLineComponent.h"
#include "HudSkeletalMeshComponent.h"
#include "HudStaticMeshComponent.h"

A3DUI_WorldMemoryOrbCounter::A3DUI_WorldMemoryOrbCounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialPositionCentred = false;
    this->OrbChildActor = NULL;
    this->DropInMontage = NULL;
    this->MoveLeftMontage = NULL;
    this->IdleMontage = NULL;
    this->ExitUpMontage = NULL;
    this->HitReactionCentreMontage = NULL;
    this->HitReactionLeftMontage = NULL;
    this->HitReactionRightMontage = NULL;
    this->CloudDropEvent = NULL;
    this->CloudAwayEvent = NULL;
    this->MoveToCornerEvent = NULL;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineFollower = CreateDefaultSubobject<USceneComponent>(TEXT("SplineFollower"));
    this->HudAmbientMovement = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovement"));
    this->OrbSkeletalMesh = CreateDefaultSubobject<UHudSkeletalMeshComponent>(TEXT("OrbSkeletalMesh"));
    this->CloudStaticMesh = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CloudStaticMesh"));
    this->Orb = CreateDefaultSubobject<UChildActorComponent>(TEXT("Orb"));
    this->OrbTotalWidgetComponent = CreateDefaultSubobject<UGingerbreadWidgetComponent>(TEXT("OrbTotalWidgetComponent"));
    this->FishingLine1 = CreateDefaultSubobject<UHudFishingLineComponent>(TEXT("FishingLine1"));
    this->FishingLine2 = CreateDefaultSubobject<UHudFishingLineComponent>(TEXT("FishingLine2"));
    this->FishingLineTarget1 = CreateDefaultSubobject<USceneComponent>(TEXT("FishingLineTarget1"));
    this->FishingLineTarget2 = CreateDefaultSubobject<USceneComponent>(TEXT("FishingLineTarget2"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->Spline->SetupAttachment(RootComponent);
    this->SplineFollower->SetupAttachment(RootComponent);
    this->HudAmbientMovement->SetupAttachment(SplineFollower);
    this->OrbSkeletalMesh->SetupAttachment(HudAmbientMovement);
    this->CloudStaticMesh->SetupAttachment(OrbSkeletalMesh);
    this->Orb->SetupAttachment(CloudStaticMesh);
    this->OrbTotalWidgetComponent->SetupAttachment(CloudStaticMesh);
    this->FishingLine1->SetupAttachment(CloudStaticMesh);
    this->FishingLine2->SetupAttachment(CloudStaticMesh);
    this->FishingLineTarget1->SetupAttachment(SplineFollower);
    this->FishingLineTarget2->SetupAttachment(SplineFollower);
    this->AkComponent->SetupAttachment(RootComponent);
}

void A3DUI_WorldMemoryOrbCounter::StopActiveMontage() {
}

void A3DUI_WorldMemoryOrbCounter::SetupHudActor() {
}

void A3DUI_WorldMemoryOrbCounter::SetIsCentered(bool centered, bool instant) {
}

void A3DUI_WorldMemoryOrbCounter::OnMoveToCornerBlendOut(UAnimMontage* Montage, bool interrupted) {
}

void A3DUI_WorldMemoryOrbCounter::OnExitUpBlendOut(UAnimMontage* Montage, bool interrupted) {
}

void A3DUI_WorldMemoryOrbCounter::OnCloudMovementFinished() {
}

void A3DUI_WorldMemoryOrbCounter::OnAnimNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

bool A3DUI_WorldMemoryOrbCounter::IsInCorner() {
    return false;
}


FVector A3DUI_WorldMemoryOrbCounter::GetOrbSocketPosition() {
    return FVector{};
}

void A3DUI_WorldMemoryOrbCounter::Anim_PlayMoveToCorner() {
}

void A3DUI_WorldMemoryOrbCounter::Anim_PlayIdle() {
}

void A3DUI_WorldMemoryOrbCounter::Anim_PlayHitReactRight() {
}

void A3DUI_WorldMemoryOrbCounter::Anim_PlayHitReactLeft() {
}

void A3DUI_WorldMemoryOrbCounter::Anim_PlayHitReactCentre() {
}

void A3DUI_WorldMemoryOrbCounter::Anim_PlayExitUp() {
}

void A3DUI_WorldMemoryOrbCounter::Anim_PlayDropIn() {
}


