#include "MrCreosote.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AMrCreosote::AMrCreosote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MrCreosoteSkeleton"));
    this->MrCreosoteSkeleton = (USkeletalMeshComponent*)RootComponent;
    this->FakeMemoryOrb = CreateDefaultSubobject<UChildActorComponent>(TEXT("FakeMemoryOrb"));
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->FoodDetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("FoodDetectionSphere"));
    this->FoodInteractionSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("FoodInteractionSphere"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->SpitDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("SpitDirection"));
    this->FireBurpVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireBurpVFX"));
    this->DreamingVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DreamingVFX"));
    this->LeftEarVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftEarVFX"));
    this->RightEarVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightEarVFX"));
    this->LeftNostrilVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftNostrilVFX"));
    this->RightNostrilVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightNostrilVFX"));
    this->Sweat1VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Sweat1VFX"));
    this->Sweat2VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Sweat2VFX"));
    this->Sweat3VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Sweat3VFX"));
    this->Sweat4VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Sweat4VFX"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Ak_MrCreosote = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_MrCreosote"));
    this->PickupContainerWin = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerWin"));
    this->PickupContainerLose = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerLose"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->UnblushTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("UnblushTimeline"));
    this->HitReactionMontage = NULL;
    this->GulpMontage = NULL;
    this->VeryDisappointedMontage = NULL;
    this->ChewHappyMontage = NULL;
    this->ChewUnhappyMontage = NULL;
    this->BurpMontage = NULL;
    this->PrepareBurpMontage = NULL;
    this->ExplodeMontage = NULL;
    this->ExplodeVFX = NULL;
    this->SmallSteamVFX = NULL;
    this->MediumSteamVFX = NULL;
    this->LargeSteamVFX = NULL;
    this->SackboySpitMultiplier = 15.00f;
    this->ObjectSpitMultiplier = 15.00f;
    this->UnblushTime = 4.00f;
    this->ChewToIdleTransitionFraction = 0.70f;
    this->DisappointedToIdleTransitionFraction = 0.70f;
    this->IntroMusicLength = 2.00f;
    this->PostExplodeDelay = 10.00f;
    this->PupilSizeCurve = NULL;
    this->UnblushCurve = NULL;
    this->StartBurpSFX = NULL;
    this->StopBurpSFX = NULL;
    this->StartFlameSFX = NULL;
    this->StopFlameSFX = NULL;
    this->StartSmallSteamSFX = NULL;
    this->StopSmallSteamSFX = NULL;
    this->StartMediumSteamSFX = NULL;
    this->StopMediumSteamSFX = NULL;
    this->StartLargeSteamSFX = NULL;
    this->StopLargeSteamSFX = NULL;
    this->StartMusic = NULL;
    this->Round1Music = NULL;
    this->Round2Music = NULL;
    this->Round3Music = NULL;
    this->FinalRoundMusic = NULL;
    this->CompleteMusic = NULL;
    this->SpitSFX = NULL;
    this->ExplodeSFX = NULL;
    this->GameWinSFX = NULL;
    this->GameLoseSFX = NULL;
    this->ExplosionHaptic = NULL;
    this->DigestHaptic = NULL;
    this->ExplodeCameraShake = NULL;
    this->DigestCameraShake = NULL;
    this->FoodToWin = -1;
    this->CollectabellPrizeCurve = NULL;
    this->CurrentState = EMrCreosoteState::Dreaming;
    this->FoodRemaining = -1;
    this->WaveIndex = 0;
    this->Server_GameStartTimeStamp = 0.00f;
    this->Ak_MrCreosote->SetupAttachment(RootComponent);
    this->PickupContainerWin->SetupAttachment(RootComponent);
    this->PickupContainerLose->SetupAttachment(RootComponent);
    this->FakeMemoryOrb->SetupAttachment(RootComponent);
    this->CollisionSphere->SetupAttachment(RootComponent);
    this->FoodDetectionSphere->SetupAttachment(RootComponent);
    this->FoodInteractionSphere->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->SpitDirection->SetupAttachment(CollisionSphere);
    this->FireBurpVFX->SetupAttachment(SpitDirection);
    this->DreamingVFX->SetupAttachment(RootComponent);
    this->LeftEarVFX->SetupAttachment(RootComponent);
    this->RightEarVFX->SetupAttachment(RootComponent);
    this->LeftNostrilVFX->SetupAttachment(RootComponent);
    this->RightNostrilVFX->SetupAttachment(RootComponent);
    this->Sweat1VFX->SetupAttachment(RootComponent);
    this->Sweat2VFX->SetupAttachment(RootComponent);
    this->Sweat3VFX->SetupAttachment(RootComponent);
    this->Sweat4VFX->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
}

void AMrCreosote::UnblushTimelineCallback(float val) {
}

void AMrCreosote::OnRep_WaveIndex() {
}

void AMrCreosote::OnRep_GameStartTimeStamp() {
}

void AMrCreosote::OnRep_FoodRemaining() {
}

void AMrCreosote::OnRep_CurrentState() {
}

void AMrCreosote::OnPrizeExplodeFinished() {
}

void AMrCreosote::OnPrizeBurpFinished() {
}

void AMrCreosote::OnFoodInteractionSphereBeginOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AMrCreosote::OnFoodDetectionSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMrCreosote::OnAnimNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void AMrCreosote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMrCreosote, CurrentState);
    DOREPLIFETIME(AMrCreosote, FoodRemaining);
    DOREPLIFETIME(AMrCreosote, WaveIndex);
    DOREPLIFETIME(AMrCreosote, Server_GameStartTimeStamp);
}


