#include "PhaseBomb.h"
#include "AkComponent.h"
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
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

APhaseBomb::APhaseBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightSource"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->LightSource = (UStaticMeshComponent*)RootComponent;
    this->SphereCollisionBlocking = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionBlocking"));
    this->SphereCollisionOverlap = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionOverlap"));
    this->InteractionOverlap = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionOverlap"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->AK_PhaseLight = CreateDefaultSubobject<UAkComponent>(TEXT("AK_PhaseLight"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->InteractionSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractionSphere"));
    this->InteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractSphere"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->InteractionSphereGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("InteractionSphereGameplayTag"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->Bubbles_PhaseBomb_VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Bubbles_PhaseBomb_VFX"));
    this->TL_Explode = NULL;
    this->TL_Explode2 = CreateDefaultSubobject<UTimelineComponent>(TEXT("TL_Explode2"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowComponent"));
    this->LightIntensityScaleActive = 50.00f;
    this->FinalRadiusSize = 30.00f;
    this->GrowthTime = 1.00f;
    this->PauseActivated = 0.00f;
    this->ReverseTime = 1.00f;
    this->StayOpen = false;
    this->StartOpen = false;
    this->UpdateAudioVelocity = false;
    this->VelocityRTPC_Name = TEXT("phase_bomb_velocity");
    this->PhaseLightExpansion = NULL;
    this->PhaseLightExpansionStop = NULL;
    this->PhaseLightAmbActive = NULL;
    this->PhaseLightAmbActiveStop = NULL;
    this->PhaseLightRetract = NULL;
    this->PhaseLightRetractStop = NULL;
    this->PhaseLightActivate = NULL;
    this->PhaseLightDeactivate = NULL;
    this->PhaseLightImpact = NULL;
    this->TL_ExplodeAlphaCurve = NULL;
    this->PhasePlatformInverseOverlapStart = NULL;
    this->PhasePlatformInverseOverlapStop = NULL;
    this->PhasePlatformAdditiveOverlapStart = NULL;
    this->PhasePlatformAdditiveOverlapStop = NULL;
    this->NetworkState = EPhaseBombState::Idle;
    this->bIsActive = true;
    this->CraftCutterTarget->SetupAttachment(SphereCollisionBlocking);
    this->AK_PhaseLight->SetupAttachment(SphereCollisionBlocking);
    this->SkeletalMesh->SetupAttachment(SphereCollisionBlocking);
    this->PointLight->SetupAttachment(SphereCollisionBlocking);
    this->InteractionSphere->SetupAttachment(SkeletalMesh);
    this->InteractSphere->SetupAttachment(InteractionSphere);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->InteractionSphereGameplayTag->SetupAttachment(InteractionSphere);
    this->SpotShadow->SetupAttachment(SkeletalMesh);
    this->Bubbles_PhaseBomb_VFX->SetupAttachment(RootComponent);
    this->PoIComponent->SetupAttachment(SkeletalMesh);
    this->ThrowTargetComponent->SetupAttachment(SphereCollisionBlocking);
    this->SphereCollisionBlocking->SetupAttachment(RootComponent);
    this->SphereCollisionOverlap->SetupAttachment(SphereCollisionBlocking);
    this->InteractionOverlap->SetupAttachment(SphereCollisionBlocking);
    this->GrappleTarget->SetupAttachment(SphereCollisionBlocking);
}

void APhaseBomb::TL_Explode_Update(const float Alpha) {
}

void APhaseBomb::TL_Explode_PlayDeactivateSound() {
}

void APhaseBomb::TL_Explode_PlayActivateSound() {
}

void APhaseBomb::TL_Explode_Finished() {
}

void APhaseBomb::OnRep_ServerTimelineData() {
}

void APhaseBomb::OnRep_NetworkState() {
}

float APhaseBomb::GetSkeletalMeshSize() {
    return 0.0f;
}

void APhaseBomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhaseBomb, FinalRadiusSize);
    DOREPLIFETIME(APhaseBomb, StayOpen);
    DOREPLIFETIME(APhaseBomb, StartOpen);
    DOREPLIFETIME(APhaseBomb, UpdateAudioVelocity);
    DOREPLIFETIME(APhaseBomb, NetworkState);
    DOREPLIFETIME(APhaseBomb, ServerTimelineData);
    DOREPLIFETIME(APhaseBomb, bIsActive);
}


