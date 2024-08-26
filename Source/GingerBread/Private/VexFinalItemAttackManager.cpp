#include "VexFinalItemAttackManager.h"
#include "Components/SceneComponent.h"

AVexFinalItemAttackManager::AVexFinalItemAttackManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Vex = NULL;
    this->DelayBetweenDrops = 1.00f;
    this->HandHeight = 30.00f;
    this->OrientateHandsToVex = true;
    this->DebugShowTargetHanding = false;
}

void AVexFinalItemAttackManager::TriggerAttack(EVexFinalItemAttackType InItemAttackType, int32 InNumberOfItemsToDrop, float InDelayBetweenDrops) {
}

void AVexFinalItemAttackManager::DropItemComplete(AActor* Item) {
}


