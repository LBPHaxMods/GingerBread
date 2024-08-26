#include "CraftCutterSwitch.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/RectLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/TimelineComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ACraftCutterSwitch::ACraftCutterSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->MachineCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MachineCollision"));
    this->PipeCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PipeCollision"));
    this->PipeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("PipeInteraction"));
    this->HitPointsCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("HitPointsCollision"));
    this->HitPointsInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsInteraction"));
    this->SpinVfxComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SpinVFX"));
    this->Ak_CraftCutterSwitch = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_CraftCutterSwitch"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTargetComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->Mainlight = CreateDefaultSubobject<USpotLightComponent>(TEXT("Mainlight"));
    this->EntranceLight = CreateDefaultSubobject<URectLightComponent>(TEXT("EntranceLight"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorCompoent"));
    this->IdleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("IdleTimeline"));
    this->Server_State = ECraftCutterSwitchState::Idle;
    this->Server_TriggeringCraftCutter = NULL;
    this->IdleTimelineLength = 2.00f;
    this->IdleTimelineCurve = NULL;
    this->MainLightTimelineMultiplier = 0.30f;
    this->EntranceLightTimelineMultiplier = 10.00f;
    this->CraftCutterEnteredAudioEvent = NULL;
    this->TriggeredLightIntensity = 3.00f;
    this->TriggerActivatedAnimationDelay = 0.03f;
    this->SetOnStateDelay = 0.40f;
    this->ActivationTime = 5.00f;
    this->TriggerIdleStateDelay = 1.00f;
    this->ReleaseCraftCutterDelay = 0.30f;
    this->CraftCutterExitAudioEvent = NULL;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->MachineCollision->SetupAttachment(SkeletalMesh);
    this->PipeCollision->SetupAttachment(SkeletalMesh);
    this->PipeInteraction->SetupAttachment(SkeletalMesh);
    this->HitPointsCollision->SetupAttachment(SkeletalMesh);
    this->HitPointsInteraction->SetupAttachment(SkeletalMesh);
    this->SpinVfxComponent->SetupAttachment(SkeletalMesh);
    this->Ak_CraftCutterSwitch->SetupAttachment(SkeletalMesh);
    this->CraftCutterTargetComponent->SetupAttachment(SkeletalMesh);
    this->HitPointsComponent->SetupAttachment(SkeletalMesh);
    this->GameplayTagComponent->SetupAttachment(SkeletalMesh);
    this->Mainlight->SetupAttachment(SkeletalMesh);
    this->EntranceLight->SetupAttachment(SkeletalMesh);
}

void ACraftCutterSwitch::SwitchActivatedPartTwo() {
}

void ACraftCutterSwitch::StealCraftCutter() {
}

void ACraftCutterSwitch::Server_SetState(const ECraftCutterSwitchState NewState) {
}

void ACraftCutterSwitch::ReleaseCraftCutter() {
}

void ACraftCutterSwitch::OnRep_State() {
}

void ACraftCutterSwitch::OnRep_CraftCutter() {
}

void ACraftCutterSwitch::OnIdleTimelineUpdate(const float Value) {
}

void ACraftCutterSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACraftCutterSwitch, Server_State);
    DOREPLIFETIME(ACraftCutterSwitch, Server_TriggeringCraftCutter);
}


