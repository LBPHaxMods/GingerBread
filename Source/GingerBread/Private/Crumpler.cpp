#include "Crumpler.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ACrumpler::ACrumpler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->Tags.AddDefaulted(1);
    this->CrumplerRoot = NULL;
    this->FlatFormSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FlatFormSkeleton"));
    this->FlatFormCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlatFormCollision"));
    this->CrumpleZone = CreateDefaultSubobject<UBoxComponent>(TEXT("CrumpleZone"));
    this->CrumpleInteractZone = CreateDefaultSubobject<UInteractionComponent>(TEXT("CrumpleInteractZone"));
    this->TriggerVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TriggerVFX"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->BallFormSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BallFormSkeleton"));
    this->CaptureFormSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CaptureFormSkeleton"));
    this->CollisionSphere = (USphereComponent*)RootComponent;
    this->InteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractSphere"));
    this->CollectorSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("CollectorSphere"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->StruggleVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("StruggleVFX"));
    this->Ak_Crumpler = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Crumpler"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->ScaleUpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ScaleUpTimeline"));

    this->CaptureMontage = NULL;
    this->MissedHitMontage = NULL;
    this->Deathmontage = NULL;
    this->ExplodeVFX = NULL;
    this->TriggeredSFX = NULL;
    this->CapturedSFX = NULL;
    this->MissedSFX = NULL;
    this->CapturedRollStartSFX = NULL;
    this->MissedRollStartSFX = NULL;
    this->CapturedRollStopSFX = NULL;
    this->MissedRollStopSFX = NULL;
    this->RollChangeDirectionSFX = NULL;
    this->HitSFX = NULL;
    this->ExplodedSFX = NULL;
    this->Exploded2SFX = NULL;
    this->StrainedSFX = NULL;
    this->ThrowSFX = NULL;
    this->CapturedPickupSFX = NULL;
    this->MissedPickupSFX = NULL;
    this->CapturedLandSFX = NULL;
    this->MissedLandSFX = NULL;
    this->LandHaptic = NULL;
    this->BiteHaptic = NULL;
    this->BiteMissedHaptic = NULL;
    this->DestroyHaptic = NULL;
    this->PickupHaptic = NULL;
    this->RollStartHaptic = NULL;
    this->RollStopHaptic = NULL;
    this->HitHaptic = NULL;
    this->ShakeHaptic = NULL;
    this->StrainedHaptics = NULL;
    this->StrainedGamepadAudio = NULL;
    this->SwallowSackboyGamepadAudio = NULL;
    this->HitGamepadAudio = NULL;
    this->BallVerticalOffset = 7.00f;
    this->BallFormRadius = 3.50f;
    this->CaptureFormRadius = 5.00f;
    this->TriggerDelay = 0.70f;
    this->PopUpMultiplier = 10.00f;
    this->PopUpTorqueMultiplier = 200.00f;
    this->HitImpulseMultiplier = 3.00f;
    this->MovementTorqueMultiplier = 500.00f;
    this->SackboyLaunchMultiplier = 30.00f;
    this->StruggleImpulseMultiplier = 1.00f;
    this->StruggleScale = 0.50f;
    this->RandomDirectionRange = 65.00f;
    this->RandomMovementTorqueMultiplier = 750.00f;
    this->AIDistanceOffset = 50.00f;
    this->StartCrumpled = false;
    this->ScaleUpOnSpawn = false;
    this->SpawnSFX = NULL;
    this->SpawnVFX = NULL;
    this->ScaleUpTimelineScaleCurve = NULL;
    this->DespawnAfterTriggered = false;
    this->DespawnTime = 6.00f;
    this->ScaleDownOnDespawn = false;
    this->DespawnSFX = NULL;
    this->DespawnVFX = NULL;
    this->CurrentState = ECrumpleState::Flat;
    this->RandomAngle = 0.00f;
    this->MissedScale = 1.00f;
    this->FlatFormSkeleton->SetupAttachment(RootComponent);
    this->FlatFormCollision->SetupAttachment(FlatFormSkeleton);
    this->CrumpleZone->SetupAttachment(FlatFormSkeleton);
    this->CrumpleInteractZone->SetupAttachment(CrumpleZone);
    this->TriggerVFX->SetupAttachment(FlatFormSkeleton);
    this->ThrowTarget->SetupAttachment(FlatFormSkeleton);
    this->BallFormSkeleton->SetupAttachment(RootComponent);
    this->CaptureFormSkeleton->SetupAttachment(RootComponent);
    this->InteractSphere->SetupAttachment(RootComponent);
    this->CollectorSphere->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->StruggleVFX->SetupAttachment(RootComponent);
    this->Ak_Crumpler->SetupAttachment(RootComponent);
}

void ACrumpler::ScaleUpTimeline_Update(float Scale) {
}

void ACrumpler::ScaleUpTimeline_Finished() {
}

void ACrumpler::OnRep_RandomAngle() {
}

void ACrumpler::OnRep_CurrentState() {
}

void ACrumpler::OnRep_CapturedActor() {
}

void ACrumpler::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACrumpler::OnCrumpleZoneBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACrumpler::OnCrumpleZoneBeginInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACrumpler::OnCrumplerManagerAvailable(AActor* Manager) {
}

void ACrumpler::OnCollectorSphereBeginInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACrumpler::Multicast_CaptureActor_Implementation(AActor* NewCapturedActor) {
}

void ACrumpler::HideCrumpler() {
}

void ACrumpler::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrumpler, StartCrumpled);
    DOREPLIFETIME(ACrumpler, CurrentState);
    DOREPLIFETIME(ACrumpler, capturedActor);
    DOREPLIFETIME(ACrumpler, RandomAngle);
    DOREPLIFETIME(ACrumpler, MissedScale);
}


