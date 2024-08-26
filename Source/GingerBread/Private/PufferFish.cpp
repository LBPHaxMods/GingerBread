#include "PufferFish.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"

APufferFish::APufferFish(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));

    this->CurrentState = EPufferFishState::Disabled;
    this->CanRoll = true;
    this->External_CanRoll = true;
    this->SKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LargeFish"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->Collision = (UBoxComponent*)RootComponent;
    this->HitpointsCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HitpointsCollider"));
    this->HitPointsInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsInteract"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->SwimEvent = NULL;
    this->SwimStopEvent = NULL;
    this->CelebrateEvent = NULL;
    this->SKMesh->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(SKMesh);
    this->HitpointsCollider->SetupAttachment(RootComponent);
    this->HitPointsInteract->SetupAttachment(HitpointsCollider);
    this->AudioComponent->SetupAttachment(SKMesh);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->PoIComponent->SetupAttachment(SKMesh);
    this->HitPointsComponent->SetupAttachment(RootComponent);
}

void APufferFish::OnRep_FishState() {
}

void APufferFish::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APufferFish, CurrentState);
}


