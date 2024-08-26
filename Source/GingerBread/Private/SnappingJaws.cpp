#include "SnappingJaws.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "MultiplayerObjectComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"
#include "PoIComponent.h"
#include "TriggerActorComponent.h"

ASnappingJaws::ASnappingJaws(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->SceneRoot = (USceneComponent*)RootComponent;
    this->SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComp"));
    this->DamagerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DamagerComponent"));
    this->DamagerInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamagerInteractComponent"));
    this->InMouthComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InMouthComponent"));
    this->InMouthInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InMouthInteractComponent"));
    this->HeaddressComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeaddressComponent"));
    this->EarRingsComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EarRingsComponent"));
    this->EyeRightCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("EyeRightCollisionComponent"));
    this->EyeLeftCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("EyeLeftCollisionComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->OnTopComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OnTopComponent"));
    this->OnTopInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("OnTopInteractComponent"));
    this->VineLeftComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VineLeftComponent"));
    this->VineRightComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VineRightComponent"));
    this->SupportComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SupportComponent"));
    this->BackMouthCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BackMouthCollisionComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->InMouthHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("InMouthHapticsComponent"));
    this->HitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
    this->MultiplayerObjectComponent = CreateDefaultSubobject<UMultiplayerObjectComponent>(TEXT("MultiplayerObjectComponent"));
    this->TimeMouthClosed = 5.00f;
    this->UseSupports = false;
    this->UseLeftVine = false;
    this->UseRightVine = false;
    this->StartAwake = true;
    this->bIsActive = true;
    this->bIsMultiplayer = false;
    this->SignpostTime = 1.50f;
    this->SignpostTimeMultiplayer = 1.75f;
    this->OnShutCameraShake = NULL;
    this->OnShutCameraShakeAttenuation = NULL;
    this->OnShutForceFeedbackEvent = NULL;
    this->OnShutForceFeedbackAttenuation = NULL;
    this->OnShutHapticEvent = NULL;
    this->OnShutHapticStopEvent = NULL;
    this->OnTopWarnVibration = NULL;
    this->OnTopWarnHapticsEvent = NULL;
    this->OnTopWarnHapticsStopEvent = NULL;
    this->InMouthWarnVibration = NULL;
    this->InMouthWarnHapticsEvent = NULL;
    this->InMouthWarnHapticsStopEvent = NULL;
    this->OnTopLaunchImpulse = 5.00f;
    this->SkeletalMeshComp->SetupAttachment(RootComponent);
    this->DamagerComponent->SetupAttachment(SkeletalMeshComp);
    this->DamagerInteractComponent->SetupAttachment(SkeletalMeshComp);
    this->InMouthComponent->SetupAttachment(SkeletalMeshComp);
    this->InMouthInteractComponent->SetupAttachment(SkeletalMeshComp);
    this->HeaddressComponent->SetupAttachment(SkeletalMeshComp);
    this->EarRingsComponent->SetupAttachment(SkeletalMeshComp);
    this->EyeRightCollisionComponent->SetupAttachment(SkeletalMeshComp);
    this->EyeLeftCollisionComponent->SetupAttachment(SkeletalMeshComp);
    this->PoIComponent->SetupAttachment(SkeletalMeshComp);
    this->OnTopComponent->SetupAttachment(SkeletalMeshComp);
    this->OnTopInteractComponent->SetupAttachment(SkeletalMeshComp);
    this->VineLeftComponent->SetupAttachment(RootComponent);
    this->VineRightComponent->SetupAttachment(RootComponent);
    this->SupportComponent->SetupAttachment(RootComponent);
    this->BackMouthCollisionComponent->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
}

void ASnappingJaws::SetIsActive(bool bNewActive) {
}

void ASnappingJaws::OpenMouth() {
}

void ASnappingJaws::OnTopEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASnappingJaws::OnTopEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASnappingJaws::OnTopBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnappingJaws::OnTopBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASnappingJaws::OnSnapAnimEvent() {
}

void ASnappingJaws::OnRep_IsMultiplayer() {
}

void ASnappingJaws::OnRep_IsActive() {
}

void ASnappingJaws::OnPlayerCountUpdated(int32 CurrentCount, int32 OldCount) {
}

void ASnappingJaws::OnNetworkEvent(FName EventName) {
}

void ASnappingJaws::OnMouthOpenedAnimEvent() {
}

void ASnappingJaws::OnMouthEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASnappingJaws::OnMouthEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASnappingJaws::OnMouthClosedAnimEvent() {
}

void ASnappingJaws::OnMouthBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnappingJaws::OnMouthBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASnappingJaws::OnHitPointsPostModificationAttempt(const FHitPointModifyResult& Result) {
}

void ASnappingJaws::OnHitPointsModifierPreModificationAttempt(const FHitPointModifyAttempt& Attempt) {
}

void ASnappingJaws::OnHitPointsModifierPostModificationAttempt(const FHitPointModifyResult& Result) {
}

void ASnappingJaws::OnHalfOpenAnimEvent() {
}

void ASnappingJaws::OnDamagerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnappingJaws::OnDamagerBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool ASnappingJaws::IsEditorOnlyData() {
    return false;
}

void ASnappingJaws::CloseMouth() {
}

void ASnappingJaws::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASnappingJaws, bIsActive);
    DOREPLIFETIME(ASnappingJaws, bIsMultiplayer);
}


