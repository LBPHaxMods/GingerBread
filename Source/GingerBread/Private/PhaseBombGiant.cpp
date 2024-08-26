#include "PhaseBombGiant.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PoIComponent.h"
#include "SplineFollowerComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

APhaseBombGiant::APhaseBombGiant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->SphereCollisionBlocking = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionBlocking"));
    this->SphereCollisionOverlap = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionOverlap"));
    this->AK_PhaseBombGiant = CreateDefaultSubobject<UAkComponent>(TEXT("AK_PhaseBombGiant"));
    this->AKHaptics_PhaseBombGiant = CreateDefaultSubobject<UAkComponent>(TEXT("AKHaptics_PhaseBombGiant"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->LightSource = CreateDefaultSubobject<USceneComponent>(TEXT("LightSource"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->AuraVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AuraVFX"));
    this->VexVeesVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VexVeesVFX"));
    this->KillBox = CreateDefaultSubobject<UBoxComponent>(TEXT("KillBox"));
    this->TopHitPointSphere = CreateDefaultSubobject<USphereComponent>(TEXT("TopHitPointSphere"));
    this->LowerHitPointSphere = CreateDefaultSubobject<USphereComponent>(TEXT("LowerHitPointSphere"));
    this->KillInteractBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("KillInteractBox"));
    this->TopHitPointInteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("TopHitPointInteractSphere"));
    this->LowerHitPointInteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("LowerHitPointInteractSphere"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->KillHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("KillHitPointsModifier"));
    this->InteractionOverlap = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionOverlap"));
    this->InteractionSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractionSphere"));
    this->InteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractSphere"));
    this->InteractionSphereGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("InteractionSphereGameplayTag"));
    this->bUsingMoverTool = false;
    this->MaxSpeed = 50.00f;
    this->MinSpeed = 2.00f;
    this->MaxSpeedDistance = 70.00f;
    this->Acceleration = 30.00f;
    this->Deceleration = 60.00f;
    this->GrowthTime = 1.00f;
    this->bUseNearestSackboy = true;
    this->TL_Explode = CreateDefaultSubobject<UTimelineComponent>(TEXT("TL_Explode"));
    this->TL_ExplodeAlphaCurve = NULL;
    this->LightIntensityScaleActive = 50.00f;
    this->FinalRadiusSize = 30.00f;
    this->WakeToChaseDelay = 1.80f;
    this->StateToTriggerUponActivation = EPhaseBombGiantState::WakingUp;
    this->EnergyStartHaptics = NULL;
    this->EnergyStopHaptics = NULL;
    this->EnergyStartAudio = NULL;
    this->EnergyStopAudio = NULL;
    this->AuthState = EPhaseBombGiantState::Sleeping;
    this->bActive = true;
    this->EnableKillBox = true;
    this->TopHitPointSphere->SetupAttachment(SkeletalMesh);
    this->LowerHitPointSphere->SetupAttachment(SkeletalMesh);
    this->KillInteractBox->SetupAttachment(SkeletalMesh);
    this->TopHitPointInteractSphere->SetupAttachment(SkeletalMesh);
    this->LowerHitPointInteractSphere->SetupAttachment(SkeletalMesh);
    this->InteractionOverlap->SetupAttachment(LightSource);
    this->InteractionSphere->SetupAttachment(SkeletalMesh);
    this->InteractSphere->SetupAttachment(InteractionSphere);
    this->InteractionSphereGameplayTag->SetupAttachment(InteractionSphere);
    this->SphereCollisionBlocking->SetupAttachment(LightSource);
    this->SphereCollisionOverlap->SetupAttachment(LightSource);
    this->AK_PhaseBombGiant->SetupAttachment(SkeletalMesh);
    this->AKHaptics_PhaseBombGiant->SetupAttachment(SkeletalMesh);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(SkeletalMesh);
    this->PoIComponent->SetupAttachment(SkeletalMesh);
    this->LightSource->SetupAttachment(SkeletalMesh);
    this->PointLight->SetupAttachment(SkeletalMesh);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->SplinePath->SetupAttachment(RootComponent);
    this->AuraVFX->SetupAttachment(SkeletalMesh);
    this->VexVeesVFX->SetupAttachment(SkeletalMesh);
    this->KillBox->SetupAttachment(SkeletalMesh);
}

void APhaseBombGiant::TL_Explode_Update(const float Alpha) {
}

void APhaseBombGiant::SetState(EPhaseBombGiantState NewState) {
}

void APhaseBombGiant::SetAuthStateToChase() {
}

void APhaseBombGiant::OnRep_AuthState() {
}

void APhaseBombGiant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhaseBombGiant, AuthState);
    DOREPLIFETIME(APhaseBombGiant, bActive);
}


