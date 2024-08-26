#include "CutsceneManager.h"
#include "Net/UnrealNetwork.h"

ACutsceneManager::ACutsceneManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Rep_IsRunningCutscene = false;
}

void ACutsceneManager::StartCutscene(AGingerbreadLevelSequenceActor* CutsceneController, FName CutsceneTriggersTag, FName CutsceneActorsTag, bool IsDebug) {
}

void ACutsceneManager::SetLeaveCutsceneBarsUp() {
}

void ACutsceneManager::OnRunCutsceneRPC_Implementation(bool IsRunning, float StartTime) {
}

void ACutsceneManager::OnRep_IsRunningCutscene() {
}

void ACutsceneManager::OnRep_ExpiredCutsceneControllers() {
}

void ACutsceneManager::OnLoadingScreenTransitionStart() {
}

void ACutsceneManager::OnLoadingScreenTransitionFinish() {
}

void ACutsceneManager::OnCutsceneFinish(AGingerbreadLevelSequenceActor* CutsceneController) {
}

bool ACutsceneManager::LoadScreenIsCutsceneReadyToPlay() {
    return false;
}

bool ACutsceneManager::IsCutsceneSkipEnabled() {
    return false;
}

ACutsceneManager* ACutsceneManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void ACutsceneManager::EnableCutsceneSkip() {
}

void ACutsceneManager::DisableCutsceneSkip() {
}

void ACutsceneManager::DisableCameraCuts() {
}

void ACutsceneManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACutsceneManager, Rep_IsRunningCutscene);
    DOREPLIFETIME(ACutsceneManager, Rep_CurrentCutsceneController);
    DOREPLIFETIME(ACutsceneManager, Rep_ExpiredCutsceneControllers);
}


