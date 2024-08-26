#include "VexFinalVoiceLineManager.h"
#include "Components/SceneComponent.h"

AVexFinalVoiceLineManager::AVexFinalVoiceLineManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->DisembodiedRTPC = TEXT("vex_disembodied_fx");
}

bool AVexFinalVoiceLineManager::TriggerVoiceLine_FromBlueprint(EVexFinalVoiceLineTriggerType TriggerType, bool Force100PercentChance) {
    return false;
}

void AVexFinalVoiceLineManager::SetupVoiceLine_Implementation(FVexFinalActiveInfo NewActiveInfo) {
}

void AVexFinalVoiceLineManager::OnVoiceLineEnded(const FString& SubtitleKey) {
}


