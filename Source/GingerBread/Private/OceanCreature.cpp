#include "OceanCreature.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"

AOceanCreature::AOceanCreature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->MovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovementRoot"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComp"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->BubbleStreamRightParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BubbleStreamRightParticle"));
    this->BubbleStreamLeftParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BubbleStreamLeftParticle"));
    this->DebrisLeftParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DebrisLeftParticle"));
    this->DebrisRightParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DebrisRightParticle"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->Ak_OceanCreature = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_OceanCreature"));
    this->AKHaptics_OceanCreature = CreateDefaultSubobject<UAkComponent>(TEXT("AKHaptics_OceanCreature"));
    this->AnimSequence = NULL;
    this->bPlayBubbleVFX = true;
    this->bPlayDebriesVFX = false;
    this->DeactivateDelay = 5.00f;
    this->SplineFollowTime = 5.00f;
    this->StartMovementAudio = NULL;
    this->StopMovementAudio = NULL;
    this->StartMovementHaptic = NULL;
    this->StopMovementHaptic = NULL;
    this->bIsActive = false;
    this->DebrisLeftParticle->SetupAttachment(StaticMesh);
    this->DebrisRightParticle->SetupAttachment(StaticMesh);
    this->SpotLightComponent->SetupAttachment(SkeletalMesh);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->Ak_OceanCreature->SetupAttachment(SkeletalMesh);
    this->AKHaptics_OceanCreature->SetupAttachment(SkeletalMesh);
    this->MovementRoot->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(MovementRoot);
    this->StaticMesh->SetupAttachment(SkeletalMesh);
    this->BubbleStreamRightParticle->SetupAttachment(StaticMesh);
    this->BubbleStreamLeftParticle->SetupAttachment(StaticMesh);
}

void AOceanCreature::StartOceanCreatureSplineFollow() {
}

void AOceanCreature::SplineFollowStarted(USplineFollowerComponent* InSplineFollower, bool WasTravellingForward) {
}

void AOceanCreature::SplineFollowDone(USplineFollowerComponent* InSplineFollower, bool WasTravellingForward) {
}

void AOceanCreature::ResetOceanCreatureSplineFollow() {
}

void AOceanCreature::OnRep_Active() {
}

void AOceanCreature::DelayedSplineFollowDone() {
}

void AOceanCreature::ActivateAndStartFollow() {
}

void AOceanCreature::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOceanCreature, bIsActive);
}


