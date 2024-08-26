#include "TotemModule.h"
#include "HitPointsComponent.h"

ATotemModule::ATotemModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->IsTotemActive = false;
    this->IsTotemOverdriven = false;
    this->IsFalling = false;
    this->MainPrimaryTarget = NULL;
}

void ATotemModule::SetTarget(AActor* main_primary_target, const TArray<AActor*> primary_targets) {
}








void ATotemModule::HandleStopFalling() {
}

void ATotemModule::HandleStartFalling() {
}

void ATotemModule::ExitOverdriveMode() {
}

void ATotemModule::EnterOverdriveMode() {
}

void ATotemModule::DeactivateTotemModule() {
}

void ATotemModule::ActivateTotemModule() {
}


