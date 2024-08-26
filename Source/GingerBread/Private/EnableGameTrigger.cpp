#include "EnableGameTrigger.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

AEnableGameTrigger::AEnableGameTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bSetupComplete = false;
    this->CurrentMode = EGameTriggerActivationMode::Automatic;
    this->TriggerVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("TriggerVolume"));
    this->DebugLogActive = false;
    this->EnableDebugLogInstance = false;
    this->TriggerVolume->SetupAttachment(RootComponent);
}

void AEnableGameTrigger::ToggleActorAwake(AActor*& Actor, bool bWake) {
}

void AEnableGameTrigger::StaggeredActorEnable(bool bEnableActors, bool Force) {
}

void AEnableGameTrigger::SetTriggerActivationMode(EGameTriggerActivationMode NewActivationMode) {
}

void AEnableGameTrigger::SetActorsEnabled(bool bEnableActors, bool Force) {
}

void AEnableGameTrigger::SetActivationMode(EEnableGameTriggerActivationMode NewActivationMode) {
}

void AEnableGameTrigger::Server_OnTriggerManagerAvailable(AActor* ManagerActor) {
}

void AEnableGameTrigger::Server_OnSubLevelResetStart(int32 ResetCount, bool AllPlayersDead) {
}

void AEnableGameTrigger::Server_OnSubLevelResetFinish(int32 ResetCount, bool AllPlayersDead) {
}

void AEnableGameTrigger::Server_OnStartIgnoringOverlaps() {
}

void AEnableGameTrigger::Server_OnNetworkManagerAvailable() {
}

void AEnableGameTrigger::Server_OnLevelResetManagerAvailable(AActor* ManagerActor) {
}

void AEnableGameTrigger::Server_OnFinishIgnoringOverlaps() {
}

void AEnableGameTrigger::Server_OnCutsceneManagerAvailable(AActor* ManagerActor) {
}

void AEnableGameTrigger::OnRep_TriggerActors() {
}

void AEnableGameTrigger::OnRep_CurrentMode() {
}

void AEnableGameTrigger::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AEnableGameTrigger::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AEnableGameTrigger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnableGameTrigger, CurrentMode);
    DOREPLIFETIME(AEnableGameTrigger, TriggerActors);
}


