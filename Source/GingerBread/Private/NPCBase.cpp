#include "NPCBase.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "TriggerActorComponent.h"

ANPCBase::ANPCBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootCollision"));

    this->RootCollision = (UCapsuleComponent*)RootComponent;
    this->HitInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitInteraction"));
    this->SackboyInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SackboyInteraction"));
    this->CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->SackboyDetector = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SackboyDetector"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->Ak_NPC = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_NPC"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->HitReact = NULL;
    this->HitCameraShake = NULL;
    this->MinHitReactionPlaybackPos = 0.50f;
    this->bServer_UseSpecificHitReactMontage = false;
    this->SpecificHitReactMontage = NULL;
    this->bRandomiseReminders = true;
    this->bUseDifferentFirstReminderTime = false;
    this->FirstReminderTime = 15.00f;
    this->ReminderLoopTime = 15.00f;
    this->bAutoPlayReminders = false;
    this->Server_NextReminderTimestamp = 0.00f;
    this->Server_NextReminderIndex = 0;
    this->HitInteraction->SetupAttachment(RootComponent);
    this->SackboyInteraction->SetupAttachment(RootComponent);
    this->CharacterMesh->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->SackboyDetector->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->Ak_NPC->SetupAttachment(RootComponent);
}

void ANPCBase::UseSpecificHitReactMontage(bool UseSpecificMontage) {
}

void ANPCBase::TriggerReminder() {
}

void ANPCBase::TriggerCustomMontage(UAnimMontage* Montage, bool CanBeInterrupted) {
}

void ANPCBase::OnRep_NextReminderTimestamp() {
}

void ANPCBase::OnReminderMontageEnded(UAnimMontage* pMontage, bool interrupted) {
}

void ANPCBase::OnEndOverlapLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ANPCBase::OnEndInteractLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ANPCBase::OnCustomMontageEnded(UAnimMontage* pMontage, bool interrupted) {
}

void ANPCBase::OnBeginOverlapFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ANPCBase::OnBeginInteractFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ANPCBase::MulticastTriggerCustomMontage_Implementation(UAnimMontage* Montage, bool CanBeInterrupted) {
}

void ANPCBase::EnableReminders(bool Enable) {
}

void ANPCBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANPCBase, bServer_UseSpecificHitReactMontage);
    DOREPLIFETIME(ANPCBase, Server_NextReminderTimestamp);
    DOREPLIFETIME(ANPCBase, Server_NextReminderIndex);
}


