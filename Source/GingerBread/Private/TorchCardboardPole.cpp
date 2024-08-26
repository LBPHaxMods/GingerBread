#include "TorchCardboardPole.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ATorchCardboardPole::ATorchCardboardPole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->MainMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMeshComp"));
    this->SpinnerMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpinnerMeshComp"));
    this->FlameMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlameMeshComp"));
    this->FlameVfxComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameVfxComp"));
    this->TriggerActorComp = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComp"));
    this->DisableCollision = false;
    this->RevolutionsPerSecond = 0.85f;
    this->Enabled = true;
    this->FlameActivationCurve = NULL;
    this->DelayToScaleFlame = 0.10f;
    this->Local_State = ETorchCardboardPoleState::On;
    this->SpinnerMeshComp->SetupAttachment(RootComponent);
    this->FlameMeshComp->SetupAttachment(RootComponent);
    this->FlameVfxComp->SetupAttachment(FlameMeshComp);
    this->MainMeshComp->SetupAttachment(RootComponent);
}

void ATorchCardboardPole::OnRep_Enabled() {
}

void ATorchCardboardPole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATorchCardboardPole, Enabled);
}


