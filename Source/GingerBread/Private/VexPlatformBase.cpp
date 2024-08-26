#include "VexPlatformBase.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AVexPlatformBase::AVexPlatformBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMeshComp"));

    this->PlatformMeshComp = (UStaticMeshComponent*)RootComponent;
    this->BakedParticlesComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BakedParticlesComp"));
    this->VexParticlesComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VexParticlesComp"));
    this->ArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComp"));
    this->TimelineComp = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimelineComp"));
    this->TriggerActorComp = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComp"));
    this->PlatformMesh = NULL;
    this->BakedParticlesMesh = NULL;
    this->EnableVfxOnTranstion = false;
    this->DisableVfxOnEnd = true;
    this->OnlyActivateParticles = false;
    this->TimelineCurve = NULL;
    this->PlatformMode = EVexPlatformMode::Destroy;
    this->TransitionType = EVexPlatformTransitionType::Linear;
    this->InvertTransitionDirection = true;
    this->TransitionDuration = 1.00f;
    this->MaxTransitionDuration = 1.00f;
    this->UseTransitionClip = true;
    this->DestroyAfterTransition = true;
    this->BoundsScale = 1.10f;
    this->UseSphereicalWorldPosition = false;
    this->TriggerManually = false;
    this->Server_State = EVexPlatformState::Idle;
    this->Server_TransitionTime = 0.00f;
    this->BakedParticlesComp->SetupAttachment(RootComponent);
    this->VexParticlesComp->SetupAttachment(RootComponent);
    this->ArrowComp->SetupAttachment(RootComponent);
}

void AVexPlatformBase::Timeline_Update(const float Time) {
}

void AVexPlatformBase::Timeline_OnFinished() {
}

void AVexPlatformBase::PlayLocalTransition() {
}

void AVexPlatformBase::OnSplineFollowerStarted(USplineFollowerComponent* pSplineFollowerComponent, const bool WillMoveForwards) {
}

void AVexPlatformBase::OnRotatorStarted(URotatorComponent* pRotatorComponent, const bool WillOscillateForwards) {
}

void AVexPlatformBase::OnRep_ServerState() {
}

void AVexPlatformBase::OnProximityActivatorInRange(AProximityActivator* ProximityActivator) {
}

void AVexPlatformBase::OnParticleSystemFinished(UParticleSystemComponent* ParticleSystemComponent) {
}

void AVexPlatformBase::HandleFinishState(bool FromLocalState) {
}

void AVexPlatformBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexPlatformBase, Server_State);
    DOREPLIFETIME(AVexPlatformBase, Server_TransitionTime);
}


