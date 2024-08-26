#include "VexFinalTricksterAttack.h"
#include "AkComponent.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexFinalTricksterAttack::AVexFinalTricksterAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->ShadowComponentHQ = CreateDefaultSubobject<UDecalComponent>(TEXT("ShadowComponentHQ"));
    this->HandAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("HandAkComponent"));
    this->TrailVFXComponent1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFXComponent1"));
    this->TrailVFXComponent2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFXComponent2"));
    this->TrailVFXComponent3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFXComponent3"));
    this->TrailVFXComponent4 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFXComponent4"));
    this->TrailAkComponent1 = CreateDefaultSubobject<UAkComponent>(TEXT("TrailAkComponent1"));
    this->TrailAkComponent2 = CreateDefaultSubobject<UAkComponent>(TEXT("TrailAkComponent2"));
    this->TrailAkComponent3 = CreateDefaultSubobject<UAkComponent>(TEXT("TrailAkComponent3"));
    this->TrailAkComponent4 = CreateDefaultSubobject<UAkComponent>(TEXT("TrailAkComponent4"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->Vex = NULL;
    this->TrailMovementCurve = NULL;
    this->TrailHeightCurve = NULL;
    this->TrailHeightOffset = 7.50f;
    this->TrailHitTime = 0.80f;
    this->TrailMovementDuration = 2.50f;
    this->CrumplerSpawnClass = NULL;
    this->CrumplerFloorTagName = TEXT("Floor");
    this->CrumplerFloorHeightOffset = 1.00f;
    this->LifeStealTargetDistanceFromScreen = 100.00f;
    this->MinLifeNumberValuePerNumberOfLivingPlayers.AddDefaulted(4);
    this->MaxNumberOfLivesToStealPerNumberOfLivingPlayers_Fight1.AddDefaulted(4);
    this->MaxNumberOfLivesToStealPerNumberOfLivingPlayers_Fight2.AddDefaulted(4);
    this->MinNumberOfLivesToSteal = 2;
    this->LifeStealLaunchArc = 0.60f;
    this->LifeSpawnDelay = 0.20f;
    this->LifePickupClass = NULL;
    this->TransformAIClass = NULL;
    this->TransformAILevelType = EEnemyLevelType::Arena;
    this->TransformAIWorldLocation = EWorldLocation::Himalayas;
    this->TransformAIPatrolObject = NULL;
    this->TransformSackboyDuration = 8.00f;
    this->EmissiveTexture = NULL;
    this->MaxEmissiveIntensity = 5.00f;
    this->UseHQShadow = false;
    this->HQShadowRTIndex = 0;
    this->CurrentAttackType = EVexFinalTricksterAttackType::Crumpler;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->ShadowComponentHQ->SetupAttachment(RootComponent);
    this->HandAkComponent->SetupAttachment(RootComponent);
    this->TrailVFXComponent1->SetupAttachment(RootComponent);
    this->TrailVFXComponent2->SetupAttachment(RootComponent);
    this->TrailVFXComponent3->SetupAttachment(RootComponent);
    this->TrailVFXComponent4->SetupAttachment(RootComponent);
    this->TrailAkComponent1->SetupAttachment(TrailVFXComponent1);
    this->TrailAkComponent2->SetupAttachment(TrailVFXComponent2);
    this->TrailAkComponent3->SetupAttachment(TrailVFXComponent3);
    this->TrailAkComponent4->SetupAttachment(TrailVFXComponent4);
}

void AVexFinalTricksterAttack::SwapSackboys_CSPAction(TArray<uint64> IntArray) {
}


void AVexFinalTricksterAttack::OnVexDefeated() {
}


void AVexFinalTricksterAttack::OnSnapNotify() {
}







void AVexFinalTricksterAttack::OnCSPEventArray(uint32 EventCode, TArray<uint64> IntArray) {
}

void AVexFinalTricksterAttack::OnCSPEvent(uint32 EventCode) {
}


void AVexFinalTricksterAttack::OnAISpawned(AAISpawner* Spawner, const TArray<AGingerbreadAICharacter*>& AIs) {
}

void AVexFinalTricksterAttack::FireTricksterAttack(EVexFinalTricksterAttackType AttackType) {
}

void AVexFinalTricksterAttack::CrumplerTrapTriggered(ACrumpler* Crumpler) {
}

void AVexFinalTricksterAttack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalTricksterAttack, CurrentAttackType);
}


