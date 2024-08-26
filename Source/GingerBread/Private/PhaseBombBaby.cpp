#include "PhaseBombBaby.h"
#include "AkComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

APhaseBombBaby::APhaseBombBaby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightSource"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->LightSource = (UStaticMeshComponent*)RootComponent;
    this->SphereCollisionBlocking = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionBlocking"));
    this->SphereCollisionOverlap = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionOverlap"));
    this->InteractionBody = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionBody"));
    this->InteractionOverlap = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionOverlap"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->AK_PhaseLight = CreateDefaultSubobject<UAkComponent>(TEXT("AK_PhaseLight"));
    this->AKCompPhaseLightShrink = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompPhaseLightShrink"));
    this->AKCompPhaseLightAmb = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompPhaseLightAmb"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->AKCompPlatformNormal = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompPlatformNormal"));
    this->AKCompPlatformInverse = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompPlatformInverse"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->Bubbles_PhaseBomb_VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Bubbles_PhaseBomb_VFX"));
    this->AKVox = CreateDefaultSubobject<UAkComponent>(TEXT("AKVox"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TL_Explode = CreateDefaultSubobject<UTimelineComponent>(TEXT("TL_Explode"));
    this->JumpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("JumpTimeline"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));

    this->LightIntensityScaleActive = 50.00f;
    this->FinalRadiusSize = 30.00f;
    this->GrowthTime = 1.00f;
    this->PauseActivated = 0.00f;
    this->ReverseTime = 1.00f;
    this->StayOpen = true;
    this->StartOpen = false;
    this->MinRollSpeed = 20.00f;
    this->MinSlapReactionForce = 128.00f;
    this->MaxSlapReactionForce = 160.00f;
    this->CloseAfterThrown = true;
    this->CloseAfterThrownTime = 3.00f;
    this->DestroyAfterContracting = true;
    this->DestroyAfterContractingTime = 3.00f;
    this->PhasePlatformOverlapRTPC_Name = TEXT("phase_baby_velocity");
    this->PhaseLightExpansion = NULL;
    this->PhaseLightExpansionStop = NULL;
    this->PhaseLightAmbActive = NULL;
    this->PhaseLightAmbActiveStop = NULL;
    this->PhaseLightRetract = NULL;
    this->PhaseLightRetractStop = NULL;
    this->PhaseLightActivate = NULL;
    this->PhaseLightDeactivate = NULL;
    this->PhaseLightImpact = NULL;
    this->PhaseLightBabyVoxConfused = NULL;
    this->PhaseLightBabyAppears = NULL;
    this->PhaseLightBabyVox = NULL;
    this->PhasePlatformInverse = NULL;
    this->PhasePlatformNormal = NULL;
    this->TL_ExplodeAlphaCurve = NULL;
    this->JumpTimelineHeightAlphaCurve = NULL;
    this->JumpTimelineRotationAlphaCurve = NULL;
    this->PhaseBombBabyPhysMaterial = NULL;
    this->FallImpactVFX = NULL;
    this->HitVFX = NULL;
    this->NetworkBombState = EPhaseBombState::Idle;
    this->NetworkBabyState = EPhaseBombBabyState::Idle;
    this->bIsInBubble = false;
    this->SphereCollisionBlocking->SetupAttachment(RootComponent);
    this->SphereCollisionOverlap->SetupAttachment(SphereCollisionBlocking);
    this->InteractionBody->SetupAttachment(SphereCollisionBlocking);
    this->InteractionOverlap->SetupAttachment(SphereCollisionBlocking);
    this->GrappleTarget->SetupAttachment(SphereCollisionBlocking);
    this->CraftCutterTarget->SetupAttachment(SphereCollisionBlocking);
    this->AK_PhaseLight->SetupAttachment(SphereCollisionBlocking);
    this->AKCompPhaseLightShrink->SetupAttachment(SphereCollisionBlocking);
    this->AKCompPhaseLightAmb->SetupAttachment(SphereCollisionBlocking);
    this->SkeletalMesh->SetupAttachment(SphereCollisionBlocking);
    this->PointLight->SetupAttachment(SphereCollisionBlocking);
    this->AKCompPlatformNormal->SetupAttachment(SphereCollisionBlocking);
    this->AKCompPlatformInverse->SetupAttachment(SphereCollisionBlocking);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(SkeletalMesh);
    this->Bubbles_PhaseBomb_VFX->SetupAttachment(RootComponent);
    this->AKVox->SetupAttachment(RootComponent);
    this->PoIComponent->SetupAttachment(SkeletalMesh);
}

void APhaseBombBaby::TL_Explode_Update(const float Alpha) {
}

void APhaseBombBaby::TL_Explode_PlayDeactivateSound() {
}

void APhaseBombBaby::TL_Explode_PlayActivateSound() {
}

void APhaseBombBaby::TL_Explode_Finished() {
}

void APhaseBombBaby::SelfDestruct_Implementation() {
}

void APhaseBombBaby::OnRep_NetworkBombState() {
}

void APhaseBombBaby::OnRep_NetworkBabyState() {
}

void APhaseBombBaby::OnLightSourceHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void APhaseBombBaby::OnBombHit_Implementation() {
}

void APhaseBombBaby::OnBabyHit_Implementation(bool WasJumpedOn) {
}

void APhaseBombBaby::JumpTimeline_UpdateRotation(const float RotationAlpha) {
}

void APhaseBombBaby::JumpTimeline_UpdateHeight(const float HeightAlpha) {
}

void APhaseBombBaby::JumpTimeline_Finished() {
}

void APhaseBombBaby::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhaseBombBaby, FinalRadiusSize);
    DOREPLIFETIME(APhaseBombBaby, NetworkBombState);
    DOREPLIFETIME(APhaseBombBaby, NetworkBabyState);
    DOREPLIFETIME(APhaseBombBaby, bIsInBubble);
}


