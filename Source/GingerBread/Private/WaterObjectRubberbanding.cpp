#include "WaterObjectRubberbanding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"

AWaterObjectRubberbanding::AWaterObjectRubberbanding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->MovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RubberbandParent"));
    this->EndWaterHeightTL = CreateDefaultSubobject<UTimelineComponent>(TEXT("EndWaterHeightTL"));
    this->EndWaterHeight = 100.00f;
    this->MaxSpeed = 6.00f;
    this->MinSpeed = 3.00f;
    this->MaxSpeedDistance = 14.00f;
    this->Acceleration = 1.50f;
    this->Deceleration = 2.00f;
    this->bUseNearestSackboy = false;
    this->DeaccelerateWaterHeight = 815.00f;
    this->DeaccelerateWaterTime = 5.00f;
    this->DeaccelerateWaterCurve = NULL;
    this->EndStartSpeed = 0.00f;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->MovementRoot->SetupAttachment(RootComponent);
}

void AWaterObjectRubberbanding::StopWaterRubberBand() {
}

void AWaterObjectRubberbanding::StartWaterRubberBand() {
}

void AWaterObjectRubberbanding::SplineUpdatePosition(float InCurrentPosition, float InDeltaTime) {
}

void AWaterObjectRubberbanding::ResetWaterRubberBand_Implementation() {
}

void AWaterObjectRubberbanding::EndSectionTLUpdate(float InAlpha) {
}

void AWaterObjectRubberbanding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWaterObjectRubberbanding, EndStartSpeed);
}


