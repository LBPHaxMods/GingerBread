#include "GatedLock.h"
#include "AkComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AGatedLock::AGatedLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->MainCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainCollision"));
    this->PawnCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PawnCollision"));
    this->PawnCollisionGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("PawnCollisionGameplayTag"));
    this->Ak_GatedLock = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_GatedLock"));
    this->ExplosionParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionParticleSystem"));
    this->ForceFeedbackComponent = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("ForceFeedbackComponent"));
    this->PushBackSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PushBackSphereComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->WheelAnimationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("WheelAnimationTimeline"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->Server_RequiredCount = 1;
    this->UseDestroyAnimation = true;
    this->IconType = EGatedLockIconType::Enemy;
    this->EmissiveIntensity = 5.00f;
    this->UnlockedAudioEvent = NULL;
    this->IncrementAudioEvent = NULL;
    this->PenultimateAudioEvent = NULL;
    this->PushBackPower = 3.00f;
    this->TimelinePlayRate = 3.00f;
    this->TimelineCurve = NULL;
    this->RequiredCountChangedMontage = NULL;
    this->UnlockedMontage = NULL;
    this->RemovePinAnimTime = 0.91f;
    this->RemovePinAndBraceAnimTime = 1.43f;
    this->RemoveLockMontage = NULL;
    this->PushbackEffect = NULL;
    this->UnlockHapticsEvent = NULL;
    this->ExplosionHapticsEvent = NULL;
    this->EjectionForce = 300.00f;
    this->SpawnedComponentDestroyStartDelay = 10.00f;
    this->SpawnedComponentDestroyDelay = 1.00f;
    this->MinAngularImpluse = 15.00f;
    this->MaxAngularImpluse = 150.00f;
    this->Server_State = EGatedLockState::Locked;
    this->WheelDynmaicMatInst = NULL;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->MainCollision->SetupAttachment(RootComponent);
    this->PawnCollision->SetupAttachment(RootComponent);
    this->PawnCollisionGameplayTag->SetupAttachment(PawnCollision);
    this->Ak_GatedLock->SetupAttachment(RootComponent);
    this->ExplosionParticleSystem->SetupAttachment(RootComponent);
    this->ForceFeedbackComponent->SetupAttachment(RootComponent);
    this->PushBackSphereComponent->SetupAttachment(RootComponent);
}

void AGatedLock::WheelAnimationTimeline_Update(const float Alpha) {
}

void AGatedLock::WheelAnimationTimeline_Finished() {
}

void AGatedLock::OnUnlockMontageNotfyRemovePinAndBrace() {
}

void AGatedLock::OnUnlockMontageNotfyRemovePin() {
}

void AGatedLock::OnSetAnimInstanceComplete() {
}

void AGatedLock::OnRep_State() {
}

void AGatedLock::OnRep_RequiredTotal() {
}

void AGatedLock::OnRemoveLockMontageComplete() {
}

void AGatedLock::OnRemoveLock() {
}

void AGatedLock::OnCSPAction(uint32 Type) {
}

void AGatedLock::OnBoundActorDestroyed(AActor* Actor) {
}

void AGatedLock::Multicast_DoJiggleReaction_Implementation() {
}

void AGatedLock::HandleActorPostModificationAttempt(const FHitPointModifyResult& Result) {
}

void AGatedLock::AddTrackedActors(TArray<AActor*> ActorsToTrack) {
}

void AGatedLock::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatedLock, Server_RequiredCount);
    DOREPLIFETIME(AGatedLock, Server_State);
}


