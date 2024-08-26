#include "VexFinalDuopedeAttackController.h"
#include "Components/SceneComponent.h"

AVexFinalDuopedeAttackController::AVexFinalDuopedeAttackController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Vex = NULL;
    this->HatchLightsOnDuration = 5.00f;
    this->DuopedeAttackDuration_Fight1 = 16.50f;
    this->DuopedeAttackDuration_Fight2 = 15.00f;
    this->DuopedeCleanUpSpeed = 150.00f;
}

void AVexFinalDuopedeAttackController::OnVexedDuopedeKilled(AVexableDuopedeSpline* DuopedeSpline, AVexableDuopedeSegment* Duopede) {
}

void AVexFinalDuopedeAttackController::CleanUpAllDuopedes() {
}

void AVexFinalDuopedeAttackController::Activate() {
}


