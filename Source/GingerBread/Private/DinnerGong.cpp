#include "DinnerGong.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "CraftCutterTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ADinnerGong::ADinnerGong(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GongSkeleton"));
    this->GongSkeleton = (USkeletalMeshComponent*)RootComponent;
    this->GongCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GongCollision"));
    this->GongBaseCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GongBaseCollision"));
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->BoxInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoxInteraction"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->Ak_DinnerGong = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_DinnerGong"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->GongHitMontage = NULL;
    this->GongRetractAnim = NULL;
    this->GongSFX = NULL;
    this->RetractSFX = NULL;
    this->GongHaptic = NULL;
    this->GongFeedback = NULL;
    this->GongGamepadAudio = NULL;
    this->RetractDelay = 1.50f;
    this->CameraShake = NULL;
    this->Server_RetractPosition = -1.00f;
    this->GongCollision->SetupAttachment(RootComponent);
    this->GongBaseCollision->SetupAttachment(RootComponent);
    this->BoxCollision->SetupAttachment(RootComponent);
    this->BoxInteraction->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(BoxCollision);
    this->Ak_DinnerGong->SetupAttachment(RootComponent);
}

void ADinnerGong::OnRep_RetractPosition() {
}

void ADinnerGong::OnCSPAction(uint32 Type) {
}

void ADinnerGong::DisableGongSkeletonTick(UAnimationAsset* Animation) {
}

void ADinnerGong::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADinnerGong, Server_RetractPosition);
}


