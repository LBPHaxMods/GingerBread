#include "KingFroogle.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AIAttackRangeComponent.h"
#include "AICoordinatedAttackComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "KingFroogleActionComponent.h"
#include "KingFroogleCantAttackComponent.h"
#include "KingFroogleCommanderComponent.h"
#include "KingFroogleDynamicHitPointsComponent.h"
#include "KingFroogleHitReactionComponent.h"
#include "KingFroogleHopComponent.h"
#include "KingFroogleSpotShadowManagerComponent.h"
#include "KingFroogleStompComponent.h"
#include "KingFroogleSuperAnticipateComponent.h"
#include "KingFroogleTurnToTargetComponent.h"
#include "LookAtComponent.h"
#include "Net/UnrealNetwork.h"
#include "ProogleSuperAttackComponent.h"
#include "SpotShadowComponent.h"

AKingFroogle::AKingFroogle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->HitpointsCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitpointsCollider"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SquashDamageBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("SquashDamageBoxCollider"));
    this->FallSpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("FallSpotShadow"));
    this->HopKnockbackBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HopKnockbackBox"));
    this->TakeOffVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TakeOffVFX"));
    this->HitPointsInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsInteraction"));
    this->SquashDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SquashDamageInteraction"));
    this->HopKnockbackInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HopKnockbackInteraction"));
    this->KingFroogleAction = CreateDefaultSubobject<UKingFroogleActionComponent>(TEXT("KingFroogleAction"));
    this->AttackRangeComponent = CreateDefaultSubobject<UAIAttackRangeComponent>(TEXT("AttackRangeComponent"));
    this->HopKnockbackHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HopKnockbackHitPointsModifier"));
    this->SquashDamageHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SquashDamageHitPointsModifier"));
    this->StompComponent = CreateDefaultSubobject<UKingFroogleStompComponent>(TEXT("StompComponent"));
    this->HopComponent = CreateDefaultSubobject<UKingFroogleHopComponent>(TEXT("HopComponent"));
    this->CommanderComponent = CreateDefaultSubobject<UKingFroogleCommanderComponent>(TEXT("CommanderComponent"));
    this->DynamicHitPointsComponent = CreateDefaultSubobject<UKingFroogleDynamicHitPointsComponent>(TEXT("DynamicHitPointsComponent"));
    this->TurnToTargetComponent = CreateDefaultSubobject<UKingFroogleTurnToTargetComponent>(TEXT("TurnToTargetComponent"));
    this->ProogleSuperAttackComponent = CreateDefaultSubobject<UProogleSuperAttackComponent>(TEXT("ProogleSuperAttackComponent"));
    this->CoordinatedAttackComponent = CreateDefaultSubobject<UAICoordinatedAttackComponent>(TEXT("CoordinatedAttackComponent"));
    this->KingFroogleCantAttackComponent = CreateDefaultSubobject<UKingFroogleCantAttackComponent>(TEXT("KingFroogleCantAttackComponent"));
    this->KingFroogleSuperAnticipationComponent = CreateDefaultSubobject<UKingFroogleSuperAnticipateComponent>(TEXT("KingFroogleSuperAnticipationComponent"));
    this->KingFroogleHitReactionComponent = CreateDefaultSubobject<UKingFroogleHitReactionComponent>(TEXT("KingFroogleHitReactionComponent"));
    this->LookAtComponent = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAtComponent"));
    this->SpotShadowManagerComponent = CreateDefaultSubobject<UKingFroogleSpotShadowManagerComponent>(TEXT("SpotShadowManagerComponent"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->Variant = EKingFroogleConfigVariant::Base;
    this->Rep_IsInvulnerable = false;
    this->DynamicNumPlayers = -1;
    this->AkHapticsComponent->SetupAttachment(RootComponent);
    this->HopKnockbackBox->SetupAttachment(RootComponent);
    this->TakeOffVFX->SetupAttachment(RootComponent);
    this->HitPointsInteraction->SetupAttachment(HitpointsCollider);
    this->SquashDamageInteraction->SetupAttachment(SquashDamageBoxCollider);
    this->HopKnockbackInteraction->SetupAttachment(HopKnockbackBox);
}

void AKingFroogle::SetupLevelLocations(AActor* ArenaCentreActor, AActor* OffScreenLocationActor) {
}

void AKingFroogle::SetTakeOffVFXEnabled_Implementation(bool Enabled) {
}

void AKingFroogle::RegisterFroogle(AProogle* Froogle) {
}


void AKingFroogle::OnSuperAttackJump_Implementation(bool IsGoingAway) {
}

void AKingFroogle::OnRep_IsInvulnerable() {
}

void AKingFroogle::OnRep_DynamicNumPlayers() {
}

void AKingFroogle::OnFroogleDestroyed(AActor* Actor) {
}

void AKingFroogle::OnAlertStateChanged(EAlertState oldAlertState, EAlertState newAlertState) {
}

void AKingFroogle::NetMulticast_SetPickupLocation_Implementation(const FVector_NetQuantize100& InPickupLocation) {
}

void AKingFroogle::IntroCutsceneStarted() {
}

void AKingFroogle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKingFroogle, Rep_IsInvulnerable);
    DOREPLIFETIME(AKingFroogle, DynamicNumPlayers);
}


