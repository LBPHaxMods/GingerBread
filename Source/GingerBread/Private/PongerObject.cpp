#include "PongerObject.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SackboySlapTargetComponent.h"
#include "SpotShadowComponent.h"
#include "ThrowTargetComponent.h"

APongerObject::APongerObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
    this->Root = NULL;
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->BoundingBox = (UBoxComponent*)RootComponent;
    this->BoundingInteractBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoundingInteractBox"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->BlasterTargetComponent = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlasterTarget"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->Ak_Ponger = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Ponger"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->GameplayTagThrow = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagThrow"));
    this->HurtBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HurtComponent"));
    this->HurtInteractBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("HurtInteractBox"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->HitPointModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierComponent"));
    this->TurnAnimTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("TurnAnim"));
    this->BobTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("BobTimelineAnim"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
    this->SlapTargetComponent = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SlapTargetComponent"));
    this->WindFXParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WindFXParticleSystem"));
    this->NoseGlintFXParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("NoseFXParticleSystem"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->DieParticleSystem = NULL;
    this->TurnVectorCurve = NULL;
    this->BobFloatCurve = NULL;
    this->PickupFloatCurve = NULL;
    this->PopPongerMontage = NULL;
    this->StopPongerMontage = NULL;
    this->HitReactMontage = NULL;
    this->SmallHitJiggleMontage = NULL;
    this->IdleMontage = NULL;
    this->TurnUpMontage = NULL;
    this->TurnDownMontage = NULL;
    this->TurnRightMontage = NULL;
    this->TurnLeftMontage = NULL;
    this->PongerFlight = NULL;
    this->PongerStart = NULL;
    this->PongerStop = NULL;
    this->PongerPickedUp = NULL;
    this->PongerThrown = NULL;
    this->PongerDestroyed = NULL;
    this->PongerBouncedOn = NULL;
    this->PongerCraftCutterImpact = NULL;
    this->PongerSlapImpact = NULL;
    this->BlasterImpact = NULL;
    this->BlasterImpactHeavy = NULL;
    this->EnemyOutOfLevel = NULL;
    this->PongerAudioEvents = NULL;
    this->AuthState = EPongerState::Idle;
    this->bAuthMarkedToDestroy = false;
    this->bPickedUp = false;
    this->bActive = true;
    this->SlapTargetComponent->SetupAttachment(RootComponent);
    this->WindFXParticleSystem->SetupAttachment(RootComponent);
    this->NoseGlintFXParticleSystem->SetupAttachment(SkeletalMeshComponent);
    this->ThrowTargetComponent->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->BoundingInteractBox->SetupAttachment(RootComponent);
    this->CraftCutterTargetComponent->SetupAttachment(RootComponent);
    this->BlasterTargetComponent->SetupAttachment(RootComponent);
    this->SpotShadowComponent->SetupAttachment(RootComponent);
    this->Ak_Ponger->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->GameplayTagThrow->SetupAttachment(RootComponent);
    this->HurtBox->SetupAttachment(SkeletalMeshComponent);
    this->HurtInteractBox->SetupAttachment(HurtBox);
    this->PoIComponent->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(SkeletalMeshComponent);
}

void APongerObject::TurnOnNoseGlint() {
}

void APongerObject::TurnOffNoseGlint() {
}

void APongerObject::TurnAnimVectorUpdate(FVector InVector) {
}

void APongerObject::TurnAnimTimelineFinished() {
}

void APongerObject::TraverseToPoint() {
}

void APongerObject::PongerMontageTimerDone() {
}

void APongerObject::PongerMontageDone(UAnimMontage* Montage, bool interrupted) {
}

void APongerObject::PongerHitRPC_Implementation(FHitPointModifyResult Result) {
}

void APongerObject::OnRep_SetPongerState() {
}

void APongerObject::OnRep_SetActive() {
}

void APongerObject::OnNetworkEvent(FName InEventName) {
}

void APongerObject::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void APongerObject::HandleHitRPC_Implementation(EDamageType InDamageType, EDamageDetails InDamageDetails, FVector InHitPos) {
}

void APongerObject::BobFloatUpdate(float InAlpha) {
}

void APongerObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APongerObject, AuthState);
    DOREPLIFETIME(APongerObject, bAuthMarkedToDestroy);
    DOREPLIFETIME(APongerObject, bPickedUp);
    DOREPLIFETIME(APongerObject, bActive);
    DOREPLIFETIME(APongerObject, RotateToRotator);
}


