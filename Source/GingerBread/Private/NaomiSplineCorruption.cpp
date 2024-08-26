#include "NaomiSplineCorruption.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "BlastersTargetComponent.h"
#include "HitPointsComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"

ANaomiSplineCorruption::ANaomiSplineCorruption(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->VirusPlaneSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VirusPlaneSM"));
    this->CollisionPlaneSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionPlaneSM"));
    this->BlasterTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlasterTarget"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->TrailVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFXComponent"));
    this->DisableDamageWhenBelowZThreshold = true;
    this->DisableDamageZThreshold = 228.50f;
    this->DisableDamageHitReactionPositionZThreshold = 224.50f;
    this->NonBlinkTexture = NULL;
    this->BlinkTexture = NULL;
    this->BlinkDuration = 0.30f;
    this->MinTimeBetweenBlinks = 1.00f;
    this->MaxTimeBetweenBlinks = 3.00f;
    this->DestroyedVFX = NULL;
    this->DestroyedSFX = NULL;
    this->DestroyedHaptics = NULL;
    this->IsActive = false;
    this->CollisionEnabled = false;
    this->PickupContainer->SetupAttachment(VirusPlaneSM);
    this->TrailVFXComponent->SetupAttachment(VirusPlaneSM);
    this->Spline->SetupAttachment(RootComponent);
    this->VirusPlaneSM->SetupAttachment(Spline);
    this->CollisionPlaneSM->SetupAttachment(VirusPlaneSM);
    this->BlasterTarget->SetupAttachment(VirusPlaneSM);
    this->HitPoints->SetupAttachment(VirusPlaneSM);
}

void ANaomiSplineCorruption::OnRep_IsActive() {
}

void ANaomiSplineCorruption::OnRep_CollisionEnabled() {
}

void ANaomiSplineCorruption::OnPickupContainerFinishedSpawning() {
}

void ANaomiSplineCorruption::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANaomiSplineCorruption, IsActive);
    DOREPLIFETIME(ANaomiSplineCorruption, CollisionEnabled);
}


