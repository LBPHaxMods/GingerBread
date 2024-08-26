#include "BatterySlot.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "SackboyJumpStompTargetComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ABatterySlot::ABatterySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
    this->Base = (UStaticMeshComponent*)RootComponent;
    this->Hatch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hatch"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->InsertFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("InsertFX"));
    this->ActivateFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ActivateFX"));
    this->Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->CapsuleInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("CapsuleInteract"));
    this->BatterySkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BatterySkeleton"));
    this->BatteryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BatteryMesh"));
    this->BatteryTopCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BatteryTopCollider"));
    this->SackboyJumpStompTarget = CreateDefaultSubobject<USackboyJumpStompTargetComponent>(TEXT("SackboyJumpStompTarget"));
    this->Ak_BatterySlot = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_BatterySlot"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->LED = CreateDefaultSubobject<UPointLightComponent>(TEXT("LED"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->bHasBattery = false;
    this->InsertionCurve = NULL;
    this->ClosingCurve = NULL;
    this->BounceDownCurve = NULL;
    this->BounceUpCurve = NULL;
    this->BounceCurve = NULL;
    this->DropAnim = NULL;
    this->CloseSFX = NULL;
    this->StompSFX = NULL;
    this->JumpOnSFX = NULL;
    this->JumpOffSFX = NULL;
    this->LandSFX = NULL;
    this->JumpOnHapticsEvent = NULL;
    this->StompHapticsEvent = NULL;
    this->InsertionSpeed = 10.00f;
    this->ClosingSpeed = 4.00f;
    this->BatteryBounceHeight = -2.00f;
    this->BatteryDropHeight = -6.60f;
    this->BatteryInstallCosAngle = 0.50f;
    this->DirectionNormalAccpetence = 0.70f;
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->CurrentState = EBatterySlotState::Open;
    this->GameplayTag->SetupAttachment(RootComponent);
    this->Hatch->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->InsertFX->SetupAttachment(RootComponent);
    this->ActivateFX->SetupAttachment(RootComponent);
    this->Capsule->SetupAttachment(RootComponent);
    this->CapsuleInteract->SetupAttachment(RootComponent);
    this->BatterySkeleton->SetupAttachment(RootComponent);
    this->BatteryMesh->SetupAttachment(BatterySkeleton);
    this->BatteryTopCollider->SetupAttachment(BatteryMesh);
    this->SackboyJumpStompTarget->SetupAttachment(BatteryTopCollider);
    this->Ak_BatterySlot->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->LED->SetupAttachment(RootComponent);
}

void ABatterySlot::OnRep_CurrentState() {
}

void ABatterySlot::OnRep_Battery() {
}

void ABatterySlot::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABatterySlot::OnCapsuleBeginInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ABatterySlot::InsertionTimelineFinished() {
}

void ABatterySlot::InsertionTimelineCallback(float val) {
}

void ABatterySlot::HatchTimelineCallback(float val) {
}

void ABatterySlot::DisableBatterySkeletonTick(UAnimationAsset* Animation) {
}

void ABatterySlot::ClosingTimelineFinished() {
}

void ABatterySlot::BatteryTimelineCallback(float val) {
}

void ABatterySlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABatterySlot, CurrentState);
    DOREPLIFETIME(ABatterySlot, Battery);
}


