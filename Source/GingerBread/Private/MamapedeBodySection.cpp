#include "MamapedeBodySection.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"

AMamapedeBodySection::AMamapedeBodySection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->CraftCutterTargetCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CraftCutterCylinder"));
    this->CraftCutterTargetInteractionCylinder = CreateDefaultSubobject<UInteractionComponent>(TEXT("CraftCutterInteractionCylinder"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->TargetGameplayTags = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("TargetGameplayTags"));
    this->BlockCollisionCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockCollisionCylinder"));
    this->BlockInteractionCylinder = CreateDefaultSubobject<UInteractionComponent>(TEXT("BlockInteractionCylinder"));
    this->BlockGameplayTags = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("BlockGameplayTags"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->DamagedVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DamagedVFXComponent"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->DamagedVFX = NULL;
    this->DamagedCameraShake = NULL;
    this->ForceFeedbackIntensity = 0.50f;
    this->ForceFeedbackDuration = 1.00f;
    this->IsInflated = true;
    this->CraftCutterTargetCylinder->SetupAttachment(RootComponent);
    this->CraftCutterTargetInteractionCylinder->SetupAttachment(CraftCutterTargetCylinder);
    this->CraftCutterTarget->SetupAttachment(CraftCutterTargetCylinder);
    this->TargetGameplayTags->SetupAttachment(CraftCutterTargetCylinder);
    this->BlockCollisionCylinder->SetupAttachment(RootComponent);
    this->BlockInteractionCylinder->SetupAttachment(BlockCollisionCylinder);
    this->BlockGameplayTags->SetupAttachment(BlockCollisionCylinder);
    this->HitPoints->SetupAttachment(RootComponent);
    this->DamagedVFXComponent->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
}

void AMamapedeBodySection::TriggerDamageVFX_Implementation(float VFXTimeDilation) {
}

void AMamapedeBodySection::PlayDamageForceFeedback_Implementation(ASackboy* Sackboy) {
}

void AMamapedeBodySection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMamapedeBodySection, IsInflated);
}


