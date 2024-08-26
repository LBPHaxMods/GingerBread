#include "MoverTool.h"
#include "Components/TimelineComponent.h"

AMoverTool::AMoverTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MyTimeline"));
    this->FloatCurve = NULL;
    this->EnabledFastPath = true;
    this->Rotationtype = EMoverRotationType::None;
    this->SplineComp = NULL;
    this->TargetComp = NULL;
    this->ChangeRotationOnly = false;
    this->UseFastAudio = true;
    this->AKComp = NULL;
    this->HasPostedMoveF = false;
    this->HasMovementRTPC = false;
}

void AMoverTool::TimelineFinished() {
}

void AMoverTool::TimelineCallback(float val) {
}

void AMoverTool::Stop() {
}

void AMoverTool::SetNewTime(float NewTime) {
}

void AMoverTool::ReverseFromEnd() {
}

void AMoverTool::Reverse() {
}

void AMoverTool::PlayFromStart() {
}

void AMoverTool::Play() {
}

void AMoverTool::MoveMeshFP(USplineComponent* Spline, bool Rotationonly, USceneComponent* Target, float Alpha) {
}

void AMoverTool::FPSetPlayRate(float NewRate) {
}

void AMoverTool::FPSetFloatCurve(UCurveFloat* Curve) {
}




