#include "MinibossMeaniePunchAttackComponent.h"
#include "Net/UnrealNetwork.h"

UMinibossMeaniePunchAttackComponent::UMinibossMeaniePunchAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PunchSignpostTime = 0.00f;
    this->PunchSignpostRotationSpeed = 0.00f;
    this->TotalPunchTime = 0.00f;
    this->PunchRotationSpeed = 0.00f;
    this->StartWithRightArm = true;
    this->MinDistanceToDoLongRangeAttack = 0.00f;
    this->TauntDuration = 0.00f;
    this->PredictionCurve = NULL;
    this->PredictionCone = 0.30f;
    this->PredictionMinRange = 20.00f;
    this->PredictionMaxRange = 60.00f;
    this->PredicitionMaxStep = 100.00f;
    this->PredictionDebug = false;
    this->InnerRingRotatesClockwise = false;
    this->RotationDirectionTogglesAfterEachAttack = true;
    this->WobbleBombRespawnTime = 0.00f;
}

void UMinibossMeaniePunchAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMinibossMeaniePunchAttackComponent, InnerRingRotatesClockwise);
}


