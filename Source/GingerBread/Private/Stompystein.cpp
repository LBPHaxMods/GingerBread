#include "Stompystein.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "StompyChaseComponent.h"
#include "StompySpaceLinkComponent.h"
#include "StompysteinActionComponent.h"
#include "StompysteinCanAttackComponent.h"
#include "StompysteinDynamicHitPointsComponent.h"
#include "StompysteinPhaseComponent.h"
#include "StompysteinSpinComponent.h"

AStompystein::AStompystein(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->HitpointsCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HitpointsCollider"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->HitPointsInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsInteraction"));
    this->HeadDamageAuraCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HeadDamageAuraCollider"));
    this->HeadDamageAuraInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HeadDamageAuraInteraction"));
    this->SpinHitCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpinHitCylinder"));
    this->StompysteinActionComponent = CreateDefaultSubobject<UStompysteinActionComponent>(TEXT("StompysteinActionComponent"));
    this->LinkComponent = CreateDefaultSubobject<UStompySpaceLinkComponent>(TEXT("LinkComponent"));
    this->DamageAuraModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("DamageAuraModifier"));
    this->DynamicHitPointsComponent = CreateDefaultSubobject<UStompysteinDynamicHitPointsComponent>(TEXT("DynamicHitPointsComponent"));
    this->SpinComponent = CreateDefaultSubobject<UStompysteinSpinComponent>(TEXT("SpinComponent"));
    this->ChaseComponent = CreateDefaultSubobject<UStompyChaseComponent>(TEXT("ChaseComponent"));
    this->CanAttackComponent = CreateDefaultSubobject<UStompysteinCanAttackComponent>(TEXT("StompysteinCanAttackComponent"));
    this->PhaseComponent = CreateDefaultSubobject<UStompysteinPhaseComponent>(TEXT("PhaseComponent"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->StompysteinVariant = EStompysteinConfigVariant::Base;
    this->BlasterProjectileDestroyVFX = NULL;
    this->PylonController = NULL;
    this->DynamicNumPlayers = -1;
    this->SpinStarted = false;
    this->HealthBarEnabled = false;
    this->HealthBarFill = 1.00f;
    this->HitPointsInteraction->SetupAttachment(HitpointsCollider);
    this->HeadDamageAuraInteraction->SetupAttachment(HeadDamageAuraCollider);
    this->SpinHitCylinder->SetupAttachment(RootComponent);
    this->AkHapticsComponent->SetupAttachment(RootComponent);
}

void AStompystein::OnRepSpinStarted() {
}

void AStompystein::OnRepHealthBarFill() {
}

void AStompystein::OnRepHealthBarEnabled() {
}

void AStompystein::OnRepDynamicNumPlayers() {
}




void AStompystein::OnAlertStateChanged(EAlertState oldAlertState, EAlertState newAlertState) {
}

void AStompystein::Initialise(AActor* ArenaCentreActor, AStompysteinPylonController* InPylonController) {
}

float AStompystein::GetHealthBarFill() const {
    return 0.0f;
}

EStompysteinPhase AStompystein::GetCurrentPhase() const {
    return EStompysteinPhase::Invalid;
}

void AStompystein::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStompystein, DynamicNumPlayers);
    DOREPLIFETIME(AStompystein, SpinStarted);
    DOREPLIFETIME(AStompystein, HealthBarEnabled);
    DOREPLIFETIME(AStompystein, HealthBarFill);
}


